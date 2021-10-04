/********************************************************************************
** Form generated from reading UI file 'privilegechangeform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVILEGECHANGEFORM_H
#define UI_PRIVILEGECHANGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrivilegeChangeForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *nameField;
    QComboBox *levelSelectorBox;
    QLabel *label;
    QPushButton *levelChangeButton;
    QLabel *statusLabel;

    void setupUi(QDialog *PrivilegeChangeForm)
    {
        if (PrivilegeChangeForm->objectName().isEmpty())
            PrivilegeChangeForm->setObjectName(QString::fromUtf8("PrivilegeChangeForm"));
        PrivilegeChangeForm->setWindowModality(Qt::ApplicationModal);
        PrivilegeChangeForm->resize(400, 300);
        horizontalLayoutWidget = new QWidget(PrivilegeChangeForm);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 120, 361, 52));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nameField = new QLineEdit(horizontalLayoutWidget);
        nameField->setObjectName(QString::fromUtf8("nameField"));

        horizontalLayout->addWidget(nameField);

        levelSelectorBox = new QComboBox(horizontalLayoutWidget);
        levelSelectorBox->setObjectName(QString::fromUtf8("levelSelectorBox"));
        levelSelectorBox->setEditable(false);

        horizontalLayout->addWidget(levelSelectorBox);

        label = new QLabel(PrivilegeChangeForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, 20, 411, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        levelChangeButton = new QPushButton(PrivilegeChangeForm);
        levelChangeButton->setObjectName(QString::fromUtf8("levelChangeButton"));
        levelChangeButton->setGeometry(QRect(120, 210, 151, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        levelChangeButton->setFont(font1);
        statusLabel = new QLabel(PrivilegeChangeForm);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setEnabled(true);
        statusLabel->setGeometry(QRect(0, 245, 391, 51));
        QFont font2;
        font2.setPointSize(12);
        statusLabel->setFont(font2);
        statusLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(PrivilegeChangeForm);

        QMetaObject::connectSlotsByName(PrivilegeChangeForm);
    } // setupUi

    void retranslateUi(QDialog *PrivilegeChangeForm)
    {
        PrivilegeChangeForm->setWindowTitle(QCoreApplication::translate("PrivilegeChangeForm", "PrivilegeChangeForm", nullptr));
        nameField->setPlaceholderText(QCoreApplication::translate("PrivilegeChangeForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\270\320\272\320\275\320\265\320\271\320\274...", nullptr));
        label->setText(QCoreApplication::translate("PrivilegeChangeForm", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\320\270\320\262\320\270\320\273\320\265\320\263\320\270\320\271", nullptr));
        levelChangeButton->setText(QCoreApplication::translate("PrivilegeChangeForm", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214!", nullptr));
        statusLabel->setText(QCoreApplication::translate("PrivilegeChangeForm", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214 \320\275\320\265 \320\275\320\260\320\271\320\264\320\265\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrivilegeChangeForm: public Ui_PrivilegeChangeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVILEGECHANGEFORM_H
