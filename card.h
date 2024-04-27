#ifndef CARD_H
#define CARD_H

#include <string>
#include <QPixmap>

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
    QPixmap getImg() const;
    void setImg(QPixmap image);

private:
    string suit;
    char rank;
    bool up;
    QPixmap img;
};

#endif
