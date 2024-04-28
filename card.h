#ifndef CARD_H
#define CARD_H

#include <string>
#include <QPixmap>

using namespace std;

class card
{
public:
    card();
    card(string suit, char rank);
    card(const card &c);
    string getSuit() const;
    char getRank() const;
    int getVal() const;
    QPixmap getImg() const;
    void setImg(QPixmap image);

private:
    string suit;
    char rank;
    QPixmap img;
};

#endif
