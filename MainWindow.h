
#ifndef PROJECT_MAIN_WINDOW_H
#define PROJECT_MAIN_WINDOW_H

#include <QStackedWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QStackedWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private slots:
    void onLoginButtonClickListener();
    void onSignupButtonClickListener();
    static void onExitButtonClickListener();

private:
    Ui::MainWindow *ui;
};


#endif //PROJECT_MAIN_WINDOW_H
