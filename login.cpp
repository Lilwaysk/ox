#include "login.h"
#include "ui_login.h"
#include "login_register.h"
#include "sql.h"
#include "init_windows.h"
#include "content.h"

#include <QMessageBox>


sql s;
init_windows *in;

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    zhuce = new login_register;
}

login::~login()
{
    delete ui;
}

bool login::check_data(QString us,QString ps)
{
    if(us=="1" && ps=="1")
        return true;
    return false;
}

void login::on_loginBtn_clicked()
{
    QString us = ui->UslineEdit->text();
    QString ps = ui->PslineEdit->text();
    if (check_data(us,ps))
    {
        QMessageBox::information(this,"tips","successful!");
        this->hide();
        in->init_content();
    }
    else
    {
        QMessageBox::information(this,"tips","Login false");
    }
}

void login::on_closeBtn_clicked()
{
    this->close();
}

void login::on_registerBtn_clicked()
{
    zhuce->show();
    this->hide();
}
