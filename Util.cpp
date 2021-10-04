#include <iostream>
#include <fstream>
#include <set>
#include <vector>
#include <cstring>
#include "Util.h"

using namespace std;
int k = 1;

struct user {
    char username[50];
    char password[100];
    int access;
};
int nn;
user temp;
const string dataBase("f.dat");
std::ofstream foutdataFile("files.txt", ios::app);
std::ifstream findataFile("files.txt", ios::app);
std::ofstream fout(dataBase, ios::binary | ios::app);
std::ifstream fin(dataBase, ios::binary | ios::app);
std::set<string> inf;
std::set<string> files;
pair<bool, int> rez;
bool external_menu = true;
bool internal_menu = true;

void c_admin() {
    //cout << sha256("admin");
    fout.seekp(0, ios::beg);
    user admin;
    strcpy(admin.username, "admin");
    strcpy(admin.password, sha256("admin").c_str());
    admin.access = 1;
    fout.write((char *) &admin, sizeof(admin));
}

bool registration(const string &username, const string &pwd) {
    strncpy(temp.username, username.data(), 50);
    strncpy(temp.password, pwd.data(), 100);
    strcpy(temp.password, sha256(temp.password).c_str());
    temp.access = 3;
    auto f = inf.find(string(temp.username));
    if (f == inf.end() || inf.empty()) {
        k++;
        fout.seekp(sizeof(temp) * k, ios::beg);
        fout.write((char *) &temp, sizeof(temp));
    } else {
        if (inf.find(temp.username) != inf.end()) return false;
        fout.write((char *) &temp, sizeof(temp));
    }
    inf.insert(string(temp.username));
    return true;
}

pair<bool, int> login(const string &username, const string &pwd) {
    vector<int> ttt;
    user check, temp;
    strncpy(check.username, username.data(), 50);
    strncpy(check.password, pwd.data(), 100);
    fin.clear();
    fout.clear();
    fin.seekg(0, ios::beg);
    fout.seekp(0, ios::beg);
    while (fin.read((char *) &temp, sizeof(temp))) {
        if ((strcmp(temp.username, check.username) == 0) &&
            (strcmp(temp.password, sha256(check.password).c_str()) == 0)) {
            ttt.push_back(temp.access);
        }
    }
    if (!ttt.empty())
        return make_pair(true, *ttt.rbegin());
    else return make_pair(false, 0);
}

bool privileges(const string &username, int level) {

    fin.clear();
    auto f = inf.find(username);
    if (f != inf.end() || inf.empty()) {
        fin.seekg(0, ios::beg);
        while (fin.read((char *) &temp, sizeof(temp))) {
            if (strcmp(username.data(), temp.username) == 0) {
                temp.access = level;
                break;
            }
        }

        fout.write((char *) &temp, sizeof(temp));
        return true;
    } else
        return false;
}
