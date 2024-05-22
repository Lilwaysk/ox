#include "login.h"
#include "ui_login.h"
#include "login_register.h"
#include "sql.h"

sql s;

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

void login::on_loginBtn_clicked()
{

}

void login::on_closeBtn_clicked()
{

}

void login::on_registerBtn_clicked()
{
    zhuce->show();
    this->hide();
}
