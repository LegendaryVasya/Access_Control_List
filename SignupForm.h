#ifndef PROJECT_SIGNUPFORM_H
#define PROJECT_SIGNUPFORM_H

#include <QWidget>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SignupForm; }
QT_END_NAMESPACE

class SignupForm : public QWidget {
Q_OBJECT

public:
    explicit SignupForm(QWidget *parent = nullptr, bool isLogin = false);

    ~SignupForm() override;

private slots:

    void onSignupButtonClickListener();

    void onLoginButtonClickListener();

private:
    Ui::SignupForm *ui;
};


#endif //PROJECT_SIGNUPFORM_H
