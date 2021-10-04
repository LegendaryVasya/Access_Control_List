#include "privilegechangeform.h"
#include "ui_privilegechangeform.h"
#include "Util.h"
#include <QMessageBox>

PrivilegeChangeForm::PrivilegeChangeForm(QWidget *parent) :
        QDialog(parent), ui(new Ui::PrivilegeChangeForm) {
    ui->setupUi(this);
    ui->levelSelectorBox->addItems(QStringList({"1", "2", "3"}));
    connect(ui->levelChangeButton, &QPushButton::released, this, &PrivilegeChangeForm::onChangeButtonClick);
    ui->statusLabel->hide();
}

PrivilegeChangeForm::~PrivilegeChangeForm() {
    delete ui;
}

void PrivilegeChangeForm::onChangeButtonClick() {
    if (privileges(ui->nameField->text().toStdString(), ui->levelSelectorBox->currentIndex() + 1))
        QMessageBox::information(this, "Операция выполнена", "Права успешно изменены");
    else
        QMessageBox::critical(this, "Ошибка", "Пользователь с таким никнеймом не найден...");
}

