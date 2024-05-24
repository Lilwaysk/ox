#include "mainwindow.h"
#include "login.h"
#include "sql.h"
#include "init_windows.h"

#include <QApplication>

init_windows King;

int main(int argc, char *argv[])
{

    if(QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
        QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    MainWindow w;
    a.setWindowIcon(QIcon(":/new/prefix1/pic/logo.jpg"));
    King.init_splash();
    King.init_login();
    return a.exec();
}
