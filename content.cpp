#include "content.h"
#include "baseinfo.h"
#include "contact.h"
#include "detail.h"

#include <QFrame>
#include <QStackedWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

Content::Content(QFrame *parent) : QFrame(parent)
{
    stack = new QStackedWidget(this);
    stack->setFrameStyle(QFrame::Panel|QFrame::Raised);

    /*Insert Three Page Windows*/

    baseInfo = new BaseInfo();
    contact = new Contact();
    detail = new Detail();
    userlist = new UserList();

    stack->addWidget(baseInfo);
    stack->addWidget(contact);
    stack->addWidget(detail);
    stack->addWidget(userlist);

    /*Init two Btn*/
    AmendBtn = new QPushButton("修改");
    CloseBtn = new QPushButton("关闭");
    QHBoxLayout *BtnLayout = new QHBoxLayout;
    BtnLayout->addStretch(1);
    BtnLayout->addWidget(AmendBtn);
    BtnLayout->addWidget(CloseBtn);

    /*整体布局*/
    QVBoxLayout *RightLayout = new QVBoxLayout(this);
    RightLayout->setMargin(0);
    RightLayout->setSpacing(6);
    RightLayout->addWidget(stack);
    RightLayout->addLayout(BtnLayout);

    connect(this->CloseBtn,&QPushButton::clicked,this,&Content::closeBtn_click);
}

void Content::closeBtn_click()
{
    this->close();
}
