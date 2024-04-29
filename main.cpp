#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "global.h"

double money;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    money = 0;

    MainWindow w;
    w.show();
    return a.exec();

}
