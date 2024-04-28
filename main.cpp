#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    static int money = 0;


    MainWindow w;
    w.show();
    return a.exec();

}
