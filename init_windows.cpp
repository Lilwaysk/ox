#include "init_windows.h"
#include "login.h"

#include <QSplitter>
#include <QApplication>
#include <QWidget>
#include <QListWidget>
#include <QPixmap>
#include <QSplashScreen>
#include <QTime>
#include <QMovie>
#include <QThread>
#include <windows.h>

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
   /* QPixmap pixmap(":/new/prefix1/pic/4.png");
    QSplashScreen splash(pixmap);
    QMainWindow w;
    splash.show();
    _sleep(3000);
    splash.finish(&w);
   */

    QPixmap pix(":/new/prefix1/pic/dynamic.gif");        //这行代码加载了一个本地的GIF图片资源，它被用作Splash的背景
    QSplashScreen splash(pix);                           //使用QPixMap创建了一个QSplashScreen对象，这个对象通常用于显示一个临时的Splash窗口，通常在程序启动或进行某些耗时操作时显示
    QLabel splashlabel(&splash);                         //创建一个QLabel对象，他的父窗口是之前创建的QSplashScreen对象，这个标签将显示在Splash窗口上
    QMovie splashgif(":/new/prefix1/pic/dynamic.gif");   //加载本地GIF动画资源
    splashlabel.setMovie(&splashgif);                    //将QLabel的movie设置为刚刚加载的GIF动画
    splashgif.start();                                   //开始播放GIF
    splash.show();                                       //显示Splash
    splash.setCursor(Qt::BlankCursor);                   //设置Splash窗口的鼠标光标样式为空白，也就是不显示鼠标外观
    for(int i=0;i<15000;i+=splashgif.speed()){           //循环，使得程序等待Splash动画播放完毕
        QCoreApplication::processEvents();               //循环每一次都调用QCoreApplication::processEvents()来处理Qt的事件队列
        Sleep(splashgif.speed()/5);                      //然后暂停一段时间
    }                                                    //循环持续到动画播放结束
    QMainWindow w;
    w.show();
    splash.finish(&w);//程序启动画面结束
    return true;
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
    list->insertItem(3,QObject::tr("咒术师列表"));
    // list->setStyleSheet("QListWidget::indicator{height:20px;width:20px;}");
    Content *content = new Content(splitterMain);
    QObject::connect(list,SIGNAL(currentRowChanged(int)),content->stack,SLOT(setCurrentIndex(int)));

    splitterMain->setWindowTitle("Change informations");
    splitterMain->setMinimumSize(splitterMain->minimumSize());
    splitterMain->setMaximumSize(splitterMain->maximumSize());
    splitterMain->show();
}
