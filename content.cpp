#include "content.h"
#include "baseinfo.h"
#include "contact.h"
#include "detail.h"

#include <QFrame>
#include <QStackedWidget>
#include <QPushButton>
#include <QLabel>

Content::Content(QFrame *parent) : QFrame(parent)
{
    stack = new QStackedWidget(this);
    stack->setFrameStyle(QFrame::Panel|QFrame::Raised);

    /*Insert Three Page Windows*/

    baseInfo = new BaseInfo();
    contact = new Contact();
    detail = new Detail();

    stack->addWidget(baseInfo);
    stack->addWidget(contact);
    stack->addWidget(detail);
}
