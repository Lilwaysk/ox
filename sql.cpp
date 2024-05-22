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

}

void sql::sql_connect()
{

}

void sql::sql_create()
{

}

void sql::sql_init()
{

}
