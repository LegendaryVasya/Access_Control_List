/********************************************************************************
** Form generated from reading UI file 'RegistrationForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONFORM_H
#define UI_REGISTRATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationForm
{
public:

    void setupUi(QWidget *RegistrationForm)
    {
        if (RegistrationForm->objectName().isEmpty())
            RegistrationForm->setObjectName(QString::fromUtf8("RegistrationForm"));
        RegistrationForm->resize(400, 300);

        retranslateUi(RegistrationForm);

        QMetaObject::connectSlotsByName(RegistrationForm);
    } // setupUi

    void retranslateUi(QWidget *RegistrationForm)
    {
        RegistrationForm->setWindowTitle(QCoreApplication::translate("RegistrationForm", "RegistrationForm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationForm: public Ui_RegistrationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONFORM_H
