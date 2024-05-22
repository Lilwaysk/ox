#include "login_register.h"
#include "ui_login_register.h"
#include "sql.h"
#include "login.h"

#include <QMessageBox>
#include <QCoreApplication>
#include <QTextCodec>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTime>
#include <QSqlError>
#include <QtDebug>
#include <QSqlDriver>
#include <QSqlRecord>

login_register::login_register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login_register)
{
    ui->setupUi(this);
}

login_register::~login_register()
{
    delete ui;
}

void login_register::on_reBtn_clicked()
{
    sql sq;
    sq.sql_connect();
    QString username = ui->uslineEdit->text();
    QString password = ui->pslineEdit->text();

    QString sql=QString("insert into user(username,password) values('%1','%2');")
            .arg(username).arg(password);
    QSqlQuery query;
    if(!query.exec(sql))
    {
        qDebug()<<"insert into error";
        QMessageBox::information(this,"注册认证","插入失败！");
    }
    else
    {
        qDebug()<<"insert into success";
        QMessageBox::information(this,"注册认证","插入成功！");
        login *w = new login;
        w->show();
        this->close();
    }

}
