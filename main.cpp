#include "mainwindow.h"
#include "login.h"
#include "sql.h"

#include <QApplication>

void test()
{
    login l;
    l.show();
    // sql s;
}

int main(int argc, char *argv[])
{

    if(QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
        QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    MainWindow w;
    login l;
    l.show();
    // test();
    // w.setWindowIcon(QIcon(":/new/prefix1/pic/pic/1.png"));
    // w.show();
    return a.exec();
}
