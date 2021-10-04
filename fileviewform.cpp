#include <QFileDialog>
#include <fstream>
#include "fileviewform.h"
#include "ui_fileviewform.h"

#include <iostream>
#include <windows.h>
FileViewForm::FileViewForm(QWidget *parent, bool isWriteAllowed) :
        QDialog(parent), ui(new Ui::FileViewForm) {

    SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    ui->setupUi(this);
    this->isWriteAllowed = isWriteAllowed;
    fileName = QFileDialog::getOpenFileName(this, tr("Выберите файл для чтения"), "",
                                            tr("Все файлы (*)"));
    std::ifstream file(fileName.toStdString());
    std::string content;
    std::string buf;
    while (std::getline(file, buf)) {
        content.append(buf);
    }
    file.close();
    ui->fileView->setText(tr(content.data()));
    ui->fileView->setReadOnly(!isWriteAllowed);
    if (!isWriteAllowed) ui->label->hide();
}


FileViewForm::~FileViewForm() {

    SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    delete ui;
}

void FileViewForm::reject() {

    SetConsoleCP(1251);
       SetConsoleOutputCP(1251);
    if (isWriteAllowed) {
        std::ofstream file(fileName.toStdString());
        auto text = ui->fileView->toPlainText();
        file.write(text.toStdString().data(), text.size());
        file.close();
    }
    QDialog::reject();
}
