/********************************************************************************
** Form generated from reading UI file 'fileviewform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEVIEWFORM_H
#define UI_FILEVIEWFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileViewForm
{
public:
    QTextEdit *fileView;
    QLabel *label;

    void setupUi(QWidget *FileViewForm)
    {
        if (FileViewForm->objectName().isEmpty())
            FileViewForm->setObjectName(QString::fromUtf8("FileViewForm"));
        FileViewForm->setWindowModality(Qt::ApplicationModal);
        FileViewForm->resize(400, 300);
        fileView = new QTextEdit(FileViewForm);
        fileView->setObjectName(QString::fromUtf8("fileView"));
        fileView->setGeometry(QRect(10, 30, 381, 241));
        label = new QLabel(FileViewForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 31));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(FileViewForm);

        QMetaObject::connectSlotsByName(FileViewForm);
    } // setupUi

    void retranslateUi(QWidget *FileViewForm)
    {
        FileViewForm->setWindowTitle(QCoreApplication::translate("FileViewForm", "FileViewForm", nullptr));
        label->setText(QCoreApplication::translate("FileViewForm", "\320\224\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217, \320\277\321\200\320\276\321\201\321\202\320\276 \320\267\320\260\320\272\321\200\320\276\320\271\321\202\320\265 \321\215\321\202\320\276 \320\276\320\272\320\275\320\276.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileViewForm: public Ui_FileViewForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEVIEWFORM_H
