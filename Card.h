#ifndef CARD_H
#define CARD_H

#include <QGraphicsItem>

class Card: public QGraphicsItem{
public:
    //key press event for Hit
    void keypressEvent(QKeyEvent * event);

};


#endif
