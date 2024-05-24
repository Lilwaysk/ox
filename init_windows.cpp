#include "init_windows.h"
#include "login.h"

#include <QSplitter>
#include <QApplication>
#include <QWidget>
#include <QListWidget>
#include <QPixmap>
#include <QSplashScreen>

init_windows::init_windows()
{

}

bool init_windows::init_login()
{
    login *lg = new login;
    lg->show();
}

bool init_windows::init_splash()
{
    QPixmap pixmap(":/new/prefix1/pic/4.png");
    QSplashScreen splash(pixmap);
    QMainWindow w;
    splash.show();
    _sleep(3000);
    splash.finish(&w);
}

bool init_windows::init_content()
{
    QWidget w;
    QFont font("AR PL KaitiM GB",12);
    w.setFont(font);

    QSplitter *splitterMain = new QSplitter(Qt::Horizontal,0);
    splitterMain->setOpaqueResize(true);
    // splitterMain->setSizes({100,100});
    QListWidget *list = new QListWidget(splitterMain);
    list->insertItem(0,QObject::tr("基本信息"));
    list->insertItem(1,QObject::tr("联系方式"));
    list->insertItem(2,QObject::tr("详细资料"));
    // list->setStyleSheet("QListWidget::indicator{height:20px;width:20px;}");
    Content *content = new Content(splitterMain);
    QObject::connect(list,SIGNAL(currentRowChanged(int)),content->stack,SLOT(setCurrentIndex(int)));

    splitterMain->setWindowTitle("Change informations");
    splitterMain->setMinimumSize(splitterMain->minimumSize());
    splitterMain->setMaximumSize(splitterMain->maximumSize());
    splitterMain->show();
}
