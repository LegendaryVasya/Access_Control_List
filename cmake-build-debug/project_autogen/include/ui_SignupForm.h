/********************************************************************************
** Form generated from reading UI file 'SignupForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPFORM_H
#define UI_SIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignupForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *loginField;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *pwdField;
    QPushButton *signupButton;
    QLabel *signup_label;

    void setupUi(QWidget *SignupForm)
    {
        if (SignupForm->objectName().isEmpty())
            SignupForm->setObjectName(QString::fromUtf8("SignupForm"));
        SignupForm->resize(400, 299);
        horizontalLayoutWidget = new QWidget(SignupForm);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 40, 361, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(34);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        loginField = new QLineEdit(horizontalLayoutWidget);
        loginField->setObjectName(QString::fromUtf8("loginField"));

        horizontalLayout->addWidget(loginField);

        horizontalLayoutWidget_2 = new QWidget(SignupForm);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 140, 361, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        pwdField = new QLineEdit(horizontalLayoutWidget_2);
        pwdField->setObjectName(QString::fromUtf8("pwdField"));

        horizontalLayout_2->addWidget(pwdField);

        signupButton = new QPushButton(SignupForm);
        signupButton->setObjectName(QString::fromUtf8("signupButton"));
        signupButton->setGeometry(QRect(120, 240, 151, 41));
        signup_label = new QLabel(SignupForm);
        signup_label->setObjectName(QString::fromUtf8("signup_label"));
        signup_label->setGeometry(QRect(110, 0, 161, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        signup_label->setFont(font);
        signup_label->setAlignment(Qt::AlignCenter);

        retranslateUi(SignupForm);

        QMetaObject::connectSlotsByName(SignupForm);
    } // setupUi

    void retranslateUi(QWidget *SignupForm)
    {
        SignupForm->setWindowTitle(QCoreApplication::translate("SignupForm", "SignupForm", nullptr));
        label_2->setText(QCoreApplication::translate("SignupForm", "Login:", nullptr));
        label_3->setText(QCoreApplication::translate("SignupForm", "Password:", nullptr));
        signupButton->setText(QCoreApplication::translate("SignupForm", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        signup_label->setText(QCoreApplication::translate("SignupForm", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignupForm: public Ui_SignupForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H
