#ifndef CONTENT_H
#define CONTENT_H

#include "baseinfo.h"
#include "contact.h"
#include "detail.h"

#include <QFrame>
#include <QStackedWidget>
#include <QPushButton>
#include <QLabel>

class Content : public QFrame
{
public:
    explicit Content(QFrame *parent = nullptr);
    QStackedWidget *stack;
    QPushButton *AmendBtn;
    QPushButton *CloseBtn;
    BaseInfo *baseInfo;
    Contact *contact;
    Detail *detail;
signals:

private slots:
    void closeBtn_click();
};

#endif // CONTENT_H
