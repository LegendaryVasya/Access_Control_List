/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *page;
    QPushButton *loginButton;
    QPushButton *signupButton;
    QPushButton *exitButton;
    QLabel *label;

    void setupUi(QStackedWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        loginButton = new QPushButton(page);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(40, 80, 91, 41));
        signupButton = new QPushButton(page);
        signupButton->setObjectName(QString::fromUtf8("signupButton"));
        signupButton->setGeometry(QRect(270, 80, 91, 41));
        exitButton = new QPushButton(page);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(270, 210, 91, 41));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 191, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        MainWindow->addWidget(page);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QStackedWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signupButton->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\321\203\320\275\320\272\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
