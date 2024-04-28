#include <QPixmap>
#include <string>
#include "card.h"

using namespace std;

//no arguments constructor
card::card(){
    this->suit = "test";
    this->rank = '0'; //ensures value of the card will be 0 in case of attempts to getValue() with a test card
}

//card constructor
card::card(string suit, char rank){
    this->suit = suit;
    this->rank = rank;
    //initializes a temporary card image (the actual image is assigned later)
    QPixmap cardtemp(":/images/blank.gif");
    this->img = cardtemp;
}

// copy constructor
card::card(const card &c){
    this->suit = c.suit;
    this->rank = c.rank;
    this->img = c.img;
}

//returns the suit of the card
string card::getSuit() const{
    return this->suit;
}

//returns the rank of the card
char card::getRank() const{
    return this->rank;
}

//returns the value of the card in the context of blackjack
int card::getVal() const{
    if (rank == 'J' || rank == 'Q' || rank == 'K' || rank == 'T') {
        return 10;
    }
    else if (rank == 'A') {
        return 11;
    }
    else {
        return rank - '0'; //this setup allows the chars 2~9 to return an int of that value
    }
}

//returns image for use in UI
QPixmap card::getImg() const{
    return this->img;
}

//allows image to be set externally
void card::setImg(QPixmap image){
    this->img = image;
    return;
}
