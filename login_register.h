#ifndef LOGIN_REGISTER_H
#define LOGIN_REGISTER_H

#include <QWidget>

namespace Ui {
class login_register;
}

class login_register : public QWidget
{
    Q_OBJECT

public:
    explicit login_register(QWidget *parent = nullptr);
    ~login_register();

private slots:
    void on_reBtn_clicked();

private:
    Ui::login_register *ui;
};

#endif // LOGIN_REGISTER_H
