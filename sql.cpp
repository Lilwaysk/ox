#include "sql.h"
#include <QCoreApplication>
#include <QTextCodec>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTime>
#include <QSqlError>
#include <QtDebug>
#include <QSqlDriver>
#include <QSqlRecord>

QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
QSqlQuery query(db);

sql::sql()
{
    sql_connect();
    sql_create();
}

void sql::sql_connect()
{
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("1234");
    db.setDatabaseName("Qdb");
    if(!db.open())
        qDebug() << "未成功链接到数据库";
    else
        qDebug() << "成功链接到数据库";
}

void sql::sql_create()
{
    bool suc = query.exec("create table user(id int primary key auto_increment,username varchar(255),password varchar(20))");
    if (suc)
        qDebug() << "创建成功" << endl;
    else
        qDebug() << "创建失败" << endl;
}

void sql::sql_init()
{

}
