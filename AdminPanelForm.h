
#ifndef PROJECT_ADMINPANELFORM_H
#define PROJECT_ADMINPANELFORM_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class adminPanelForm; }
QT_END_NAMESPACE

class adminPanelForm : public QWidget {
Q_OBJECT

public:
    explicit adminPanelForm(QWidget *parent = nullptr, int level = 0);

    ~adminPanelForm() override;
private slots:
    void onLogoutButtonClickListener();
    void onFileViewButtonClickListener();
    void onFileCreateButtonClickListener();
    void onFileEditButtonClickListener();
    void onPrivilegeEditButtonClickListener();

private:
    Ui::adminPanelForm *ui;
};


#endif //PROJECT_ADMINPANELFORM_H
