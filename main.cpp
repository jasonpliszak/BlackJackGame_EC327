#include "mainwindow.h"


#include <QApplication>
#include <QGraphicsScene>
#include "Card.h"
#include <QGraphicsView>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //create scene
    QGraphicsScene * scene = new QGraphicsScene();

    //create a card item to put into the scene
    Card *rect = new QGraphicsRectItem();
    rect->setRect(0,0,100,100);

    //add the rect to the scene
    scene->addItem(rect);

    //add a background
    QGraphicsView * view  = new QGraphicsView(scene);

    view->show();

    MainWindow w;
    w.show();
    return a.exec();

}
