#include "AdminPanelForm.h"
#include "ui_adminpanelform.h"
#include <string>
#include <QStackedWidget>
#include "constants.h"
#include "fileviewform.h"
#include "privilegechangeform.h"
#include <QFileDialog>
#include <fstream>

adminPanelForm::adminPanelForm(QWidget *parent, int level) :
        QWidget(parent), ui(new Ui::adminPanelForm) {
    ui->setupUi(this);
    ui->label_levelDisplay->setText(
            QString::fromStdString((new std::string("У вас "))->append(std::to_string(level)).append(
                    " уровень доступа.")));
    connect(ui->logoutButton, &QPushButton::released, this, &adminPanelForm::onLogoutButtonClickListener);
    connect(ui->readFileButton, &QPushButton::released, this, &adminPanelForm::onFileViewButtonClickListener);
    connect(ui->fileEditButton, &QPushButton::released, this, &adminPanelForm::onFileEditButtonClickListener);
    connect(ui->rightChangeButton, &QPushButton::released, this, &adminPanelForm::onPrivilegeEditButtonClickListener);
    connect(ui->fileCreateButton, &QPushButton::released, this, &adminPanelForm::onFileCreateButtonClickListener);
    if (level >= 2) {
        ui->fileCreateButton->hide();
        ui->rightChangeButton->hide();
        if (level == 3) ui->fileEditButton->hide();
    }
}

adminPanelForm::~adminPanelForm() {
    delete ui;
}

void adminPanelForm::onLogoutButtonClickListener() {
    ((QStackedWidget *) parentWidget())->setCurrentIndex(WINDOW_MAIN);
}


void adminPanelForm::onFileViewButtonClickListener() {
    (new FileViewForm(parentWidget(), false))->show();
}

void adminPanelForm::onFileEditButtonClickListener() {
    (new FileViewForm(parentWidget(), true))->show();
}

void adminPanelForm::onPrivilegeEditButtonClickListener() {
    (new PrivilegeChangeForm(parentWidget()))->show();
}

void adminPanelForm::onFileCreateButtonClickListener() {
    std::string filename = QFileDialog::getSaveFileName(this, tr("Укажите файл, который хотите создать"), "",
                                                        tr("Все файлы (*)")).toStdString();
    std::ofstream file(filename);
    file.close();
}
