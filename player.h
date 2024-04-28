#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"

using namespace std;

class player{
public:
    player();
    player(card c);
    ~player();
    void addCard(card c);
    int getVal();
    card* getCards();
private:
    card* cards;
    int count;
};
#endif
