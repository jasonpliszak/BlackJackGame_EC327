#include <QPixmap>
#include <string>
#include "card.h"

using namespace std;

card::card(){
    this->suit = "test";
    this->rank = 't';
    this->up = 0;
}

card::card(string suit, char rank, bool up){
    this->suit = suit;
    this->rank = rank;
    this->up = up;
}

// copy constructor
card::card(const card &c){
    this->suit = c.suit;
    this->rank = c.rank;
    this->up = c.up;
}

void card::flip(){
    this->up = !this->up;
}

string card::getSuit() const{
    return this->suit;
}

char card::getRank() const{
    return this->rank;
}

bool card::isUp() const{
    return this->up;
}

int card::getVal() const{
    if (rank == 'J' || rank == 'Q' || rank == 'K' || rank == 'T') {
        return 10;
    }
    else if (rank == 'A') {
        return 11;
    }
    else {
        return rank - '0';
    }
}

QPixmap card::getImg() const{
    return this->img;
}

void card::setImg(QPixmap image){
    this->img = image;
    return;
}
