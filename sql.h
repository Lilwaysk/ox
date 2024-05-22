#ifndef SQL_H
#define SQL_H
#include <QString>

class sql
{
public:
    sql();
    void sql_connect();
    void sql_create();
    bool sql_insert(QString,QString);
};

#endif // SQL_H
