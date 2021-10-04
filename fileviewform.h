//
// Created by gohan on 19.05.2021.
//

#ifndef PROJECT_FILEVIEWFORM_H
#define PROJECT_FILEVIEWFORM_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class FileViewForm; }
QT_END_NAMESPACE

class FileViewForm : public QDialog {
Q_OBJECT

public:
    explicit FileViewForm(QWidget *parent = nullptr, bool isWriteAllowed = false);

    ~FileViewForm() override;
    void reject() override;

private:
    QString fileName;
    bool isWriteAllowed;
    Ui::FileViewForm *ui;
};


#endif //PROJECT_FILEVIEWFORM_H
