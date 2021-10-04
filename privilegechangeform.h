//
// Created by gohan on 20.05.2021.
//

#ifndef PROJECT_PRIVILEGECHANGEFORM_H
#define PROJECT_PRIVILEGECHANGEFORM_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class PrivilegeChangeForm; }
QT_END_NAMESPACE

class PrivilegeChangeForm : public QDialog {
Q_OBJECT

public:
    explicit PrivilegeChangeForm(QWidget *parent = nullptr);

    ~PrivilegeChangeForm() override;

private slots:

    void onChangeButtonClick();

private:
    Ui::PrivilegeChangeForm *ui;
};


#endif //PROJECT_PRIVILEGECHANGEFORM_H
