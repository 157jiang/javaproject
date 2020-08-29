#include "mainwindow.h"

#include <QApplication>
#include<QtGui>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


//    w.setAutoFillBackground(true);
//    QPalette pal;
//    QPixmap pixmap=QPixmap(":/backgroud.png");
//    pal.setBrush(QPalette::Window,QBrush(pixmap);

//    pal.setBrush(QPalette::Window,Qt::white);
//    w.setPalette(pal);
    w.show();
    return a.exec();
}
