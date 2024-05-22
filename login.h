#ifndef LOGIN_H
#define LOGIN_H

#include "login_register.h"
#include <QWidget>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_loginBtn_clicked();

    void on_closeBtn_clicked();

    void on_registerBtn_clicked();

private:
    Ui::login *ui;
    login_register *zhuce;
};

#endif // LOGIN_H
