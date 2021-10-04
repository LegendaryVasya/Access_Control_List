#include <QPushButton>
#include <QMessageBox>
#include "SignupForm.h"
#include "ui_SignupForm.h"
#include "MainWindow.h"
#include "constants.h"
#include "AdminPanelForm.h"
#include "Util.h"

SignupForm::SignupForm(QWidget *parent, bool isLogin) :
        QWidget(parent), ui(new Ui::SignupForm) {
    ui->setupUi(this);
    ui->signup_label->setText(isLogin ? "Вход" : "Регистрация");
    ui->signupButton->setText(isLogin ? "Войти" : "Зарегистрироваться");
    connect(ui->signupButton, &QPushButton::released, this,
            isLogin ? &SignupForm::onLoginButtonClickListener : &SignupForm::onSignupButtonClickListener);

}

SignupForm::~SignupForm() {
    delete ui;
}

void SignupForm::onSignupButtonClickListener() {
    if (registration(ui->loginField->text().toStdString(), ui->pwdField->text().toStdString()))
        ((QStackedWidget *) parentWidget())->setCurrentIndex(WINDOW_MAIN);
    else QMessageBox::critical(this, "Ошибка", "Юзер с таким никнеймом уже зарегистрирован...");
}

void SignupForm::onLoginButtonClickListener() {
    auto loginResult = login(ui->loginField->text().toStdString(), ui->pwdField->text().toStdString());
    if (!loginResult.first) {
        QMessageBox::critical(this, "Ошибка", "Вход не удался...");
        return;
    }
    auto *parent = (QStackedWidget *) parentWidget();
    auto *form = parent->widget(WINDOW_ADMIN_PANEL);
    int level = loginResult.second;
    if (form == nullptr) {
        parent->addWidget(new adminPanelForm(parent, level));
    } else {
        parent->removeWidget(form);
        delete (form);
        parent->insertWidget(WINDOW_ADMIN_PANEL, new adminPanelForm(parent, level));
    }
    parent->setCurrentIndex(WINDOW_ADMIN_PANEL);
}
