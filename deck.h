#ifndef DECK_H
#define DECK_H

#include "card.h"

using namespace std;

class card;

class deck
{
public:
    deck();
    ~deck();
    card draw();
private:
    card* cards;
    int count;
};

#endif // DECK_H
