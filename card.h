#ifndef CARD_H
#define CARD_H

#include <string>

using namespace std;

class card
{
public:
    card();
    card(string suit, char rank, bool up);
    card(const card &c);
    void flip();
    string getSuit() const;
    char getRank() const;
    bool isUp() const;
    int getVal() const;

private:
    string suit;
    char rank;
    bool up;
};

#endif
