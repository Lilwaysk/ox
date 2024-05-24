#include "splash_screen.h"

#include <windows.h>

Splash_sreen::Splash_sreen(QMainWindow *parent) : QMainWindow(parent)
{
    setWindowTitle("Splash Example");
    QTextEdit *edit = new QTextEdit;
    edit->setText("Splash Example!");
    setCentralWidget(edit);
    resize(600,450);
    Sleep(5000);
}
