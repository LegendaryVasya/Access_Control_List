/********************************************************************************
** Form generated from reading UI file 'adminpanelform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANELFORM_H
#define UI_ADMINPANELFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminPanelForm
{
public:
    QLabel *label_levelDisplay;
    QPushButton *rightChangeButton;
    QPushButton *fileEditButton;
    QPushButton *fileCreateButton;
    QPushButton *logoutButton;
    QPushButton *readFileButton;

    void setupUi(QWidget *adminPanelForm)
    {
        if (adminPanelForm->objectName().isEmpty())
            adminPanelForm->setObjectName(QString::fromUtf8("adminPanelForm"));
        adminPanelForm->resize(400, 300);
        label_levelDisplay = new QLabel(adminPanelForm);
        label_levelDisplay->setObjectName(QString::fromUtf8("label_levelDisplay"));
        label_levelDisplay->setGeometry(QRect(0, 10, 401, 111));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_levelDisplay->setFont(font);
        label_levelDisplay->setAlignment(Qt::AlignCenter);
        rightChangeButton = new QPushButton(adminPanelForm);
        rightChangeButton->setObjectName(QString::fromUtf8("rightChangeButton"));
        rightChangeButton->setGeometry(QRect(140, 130, 111, 51));
        fileEditButton = new QPushButton(adminPanelForm);
        fileEditButton->setObjectName(QString::fromUtf8("fileEditButton"));
        fileEditButton->setGeometry(QRect(270, 130, 111, 51));
        fileCreateButton = new QPushButton(adminPanelForm);
        fileCreateButton->setObjectName(QString::fromUtf8("fileCreateButton"));
        fileCreateButton->setGeometry(QRect(10, 130, 111, 51));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        fileCreateButton->setFont(font1);
        fileCreateButton->setAcceptDrops(false);
        fileCreateButton->setAutoFillBackground(true);
        fileCreateButton->setAutoRepeat(true);
        fileCreateButton->setAutoExclusive(true);
        logoutButton = new QPushButton(adminPanelForm);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(270, 190, 111, 51));
        readFileButton = new QPushButton(adminPanelForm);
        readFileButton->setObjectName(QString::fromUtf8("readFileButton"));
        readFileButton->setGeometry(QRect(140, 190, 111, 51));

        retranslateUi(adminPanelForm);

        QMetaObject::connectSlotsByName(adminPanelForm);
    } // setupUi

    void retranslateUi(QWidget *adminPanelForm)
    {
        adminPanelForm->setWindowTitle(QCoreApplication::translate("adminPanelForm", "adminPanelForm", nullptr));
        label_levelDisplay->setText(QCoreApplication::translate("adminPanelForm", "TextLabel", nullptr));
        rightChangeButton->setText(QCoreApplication::translate("adminPanelForm", "\320\237\320\276\320\274\320\265\320\275\321\217\321\202\321\214\n"
"\320\277\321\200\320\270\320\262\320\270\320\273\320\265\320\263\320\270\321\216", nullptr));
        fileEditButton->setText(QCoreApplication::translate("adminPanelForm", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        fileCreateButton->setText(QCoreApplication::translate("adminPanelForm", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271\n"
"\321\204\320\260\320\271\320\273", nullptr));
        logoutButton->setText(QCoreApplication::translate("adminPanelForm", "\320\240\320\260\320\267\320\273\320\276\320\263\320\270\320\275\320\270\321\202\321\214\321\201\321\217", nullptr));
        readFileButton->setText(QCoreApplication::translate("adminPanelForm", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminPanelForm: public Ui_adminPanelForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANELFORM_H
