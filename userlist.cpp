#include "userlist.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QWidget>

QToolButton* UserList::toolBtn_set(QString name,QString pic)
{
    QToolButton *btn = new QToolButton;
    btn->setText(name);
    btn->setIcon(QPixmap(pic));
    btn->setIconSize(QPixmap(pic).size());
    btn->setAutoRaise(true);
    btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    return btn;
}

UserList::UserList(QWidget *parent,Qt::WindowFlags f) : QToolBox(parent)
{
    setWindowTitle("User_list");
    toolBtn1_1 = toolBtn_set("五条老师",":/new/prefix1/pic/laoda.png");
    toolBtn1_2 = toolBtn_set("六条老师",":/new/prefix1/pic/laoda.png");
    toolBtn1_3 = toolBtn_set("七条老师",":/new/prefix1/pic/laoda.png");
    toolBtn1_4 = toolBtn_set("八条老师",":/new/prefix1/pic/laoda.png");
    toolBtn1_5 = toolBtn_set("九条老师",":/new/prefix1/pic/laoda.png");
    QGroupBox *groupBox1 = new QGroupBox;
    QVBoxLayout *layout1 = new QVBoxLayout(groupBox1);
    layout1->setMargin(10);
    layout1->setAlignment(Qt::AlignHCenter);
    layout1->addWidget(toolBtn1_1);
    layout1->addWidget(toolBtn1_2);
    layout1->addWidget(toolBtn1_3);
    layout1->addWidget(toolBtn1_4);
    layout1->addWidget(toolBtn1_5);
    layout1->addStretch();
    toolBtn2_1 = toolBtn_set("2.5条老师",":/new/prefix1/pic/laoda.png");
    toolBtn2_2 = toolBtn_set("1.25条老师",":/new/prefix1/pic/laoda.png");
    QGroupBox *groupBox2 = new QGroupBox;
    QVBoxLayout *layout2 = new QVBoxLayout(groupBox2);
    layout2->setMargin(10);
    layout2->setAlignment(Qt::AlignHCenter);
    layout2->addWidget(toolBtn2_1);
    layout2->addWidget(toolBtn2_2);

    toolBtn3_1 = toolBtn_set("0.875条老师",":/new/prefix1/pic/laoda.png");
    toolBtn3_2 = toolBtn_set("0.43725条老师",":/new/prefix1/pic/laoda.png");
    QGroupBox *groupBox3 = new QGroupBox;
    QVBoxLayout *layout3 = new QVBoxLayout(groupBox3);
    layout3->setMargin(10);
    layout3->setAlignment(Qt::AlignHCenter);
    layout3->addWidget(toolBtn3_1);
    layout3->addWidget(toolBtn3_2);

    this->addItem((QWidget*)groupBox1,"我的好友");
    this->addItem((QWidget*)groupBox2,"我的坏友");
    this->addItem((QWidget*)groupBox3,"我的没友");
}

