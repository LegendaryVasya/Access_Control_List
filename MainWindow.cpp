#include "MainWindow.h"
#include "ui_mainwindow.h"
#include "SignupForm.h"
#include "constants.h"

MainWindow::MainWindow(QWidget *parent) :
        QStackedWidget(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->addWidget(new SignupForm(this,false));
    this->addWidget(new SignupForm(this,true));
    connect(ui->loginButton, &QPushButton::released, this, &MainWindow::onLoginButtonClickListener);
    connect(ui->signupButton, &QPushButton::released, this, &MainWindow::onSignupButtonClickListener);
    connect(ui->exitButton, &QPushButton::released, this, &MainWindow::onExitButtonClickListener);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onLoginButtonClickListener() {
    this->setCurrentIndex(WINDOW_LOGIN);
}

void MainWindow::onSignupButtonClickListener() {
    this->setCurrentIndex(WINDOW_SIGNUP);
}

void MainWindow::onExitButtonClickListener() {
    exit(0);
}