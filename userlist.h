#ifndef USERLIST_H
#define USERLIST_H

#include <QObject>
#include <QToolBox>
#include <QToolButton>

class UserList :public QToolBox
{
    Q_OBJECT
public:
    explicit UserList(QWidget *parent = nullptr,Qt::WindowFlags f=0);
    QToolButton* toolBtn_set(QString,QString);
signals:

private:
    QToolButton *toolBtn1_1;
    QToolButton *toolBtn1_2;
    QToolButton *toolBtn1_3;
    QToolButton *toolBtn1_4;
    QToolButton *toolBtn1_5;
    QToolButton *toolBtn2_1;
    QToolButton *toolBtn2_2;
    QToolButton *toolBtn3_1;
    QToolButton *toolBtn3_2;
};

#endif // USERLIST_H
