#include <string>
#include <time.h>
#include <stdlib.h>
#include "card.h"
#include "deck.h"
#include <list>

using namespace std;

//generate a full standard deck
deck::deck(){
    string tempsuit = "test"; //initialize a temporary suit assigner
    char rank = '0'; //initialize a temporary rank
    this->count = 52; //52 cards in a deck
    this->cards = new card[52];
    int j = 0; //suit incrementer
    int k = 1; //rank incrementer

    // Load in spades images

    QPixmap card1(":/images/spadesA.gif");
    QPixmap card2(":/images/spades2.gif");
    QPixmap card3(":/images/spades3.gif");
    QPixmap card4(":/images/spades4.gif");
    QPixmap card5(":/images/spades5.gif");
    QPixmap card6(":/images/spades6.gif");
    QPixmap card7(":/images/spades7.gif");
    QPixmap card8(":/images/spades8.gif");
    QPixmap card9(":/images/spades9.gif");
    QPixmap card10(":/images/spadesT.gif");
    QPixmap card11(":/images/spadesJ.gif");
    QPixmap card12(":/images/spadesQ.gif");
    QPixmap card13(":/images/spadesK.gif");

    // Load in hearts images

    QPixmap card14(":/images/heartsA.gif");
    QPixmap card15(":/images/hearts2.gif");
    QPixmap card16(":/images/hearts3.gif");
    QPixmap card17(":/images/hearts4.gif");
    QPixmap card18(":/images/hearts5.gif");
    QPixmap card19(":/images/hearts6.gif");
    QPixmap card20(":/images/hearts7.gif");
    QPixmap card21(":/images/hearts8.gif");
    QPixmap card22(":/images/hearts9.gif");
    QPixmap card23(":/images/heartsT.gif");
    QPixmap card24(":/images/heartsJ.gif");
    QPixmap card25(":/images/heartsQ.gif");
    QPixmap card26(":/images/heartsK.gif");

    // Load in diamonds images

    QPixmap card27(":/images/diamondsA.gif");
    QPixmap card28(":/images/diamonds2.gif");
    QPixmap card29(":/images/diamonds3.gif");
    QPixmap card30(":/images/diamonds4.gif");
    QPixmap card31(":/images/diamonds5.gif");
    QPixmap card32(":/images/diamonds6.gif");
    QPixmap card33(":/images/diamonds7.gif");
    QPixmap card34(":/images/diamonds8.gif");
    QPixmap card35(":/images/diamonds9.gif");
    QPixmap card36(":/images/diamondsT.gif");
    QPixmap card37(":/images/diamondsJ.gif");
    QPixmap card38(":/images/diamondsQ.gif");
    QPixmap card39(":/images/diamondsK.gif");

    // Load in clubs images

    QPixmap card40(":/images/clubsA.gif");
    QPixmap card41(":/images/clubs2.gif");
    QPixmap card42(":/images/clubs3.gif");
    QPixmap card43(":/images/clubs4.gif");
    QPixmap card44(":/images/clubs5.gif");
    QPixmap card45(":/images/clubs6.gif");
    QPixmap card46(":/images/clubs7.gif");
    QPixmap card47(":/images/clubs8.gif");
    QPixmap card48(":/images/clubs9.gif");
    QPixmap card49(":/images/clubsT.gif");
    QPixmap card50(":/images/clubsJ.gif");
    QPixmap card51(":/images/clubsQ.gif");
    QPixmap card52(":/images/clubsK.gif");

    //create a list of images to assign to the cards as they are initialized
    list<QPixmap> cardlist;

    //spades images
    cardlist.push_back(card1);
    cardlist.push_back(card2);
    cardlist.push_back(card3);
    cardlist.push_back(card4);
    cardlist.push_back(card5);
    cardlist.push_back(card6);
    cardlist.push_back(card7);
    cardlist.push_back(card8);
    cardlist.push_back(card9);
    cardlist.push_back(card10);
    cardlist.push_back(card11);
    cardlist.push_back(card12);
    cardlist.push_back(card13);

    //hearts images
    cardlist.push_back(card14);
    cardlist.push_back(card15);
    cardlist.push_back(card16);
    cardlist.push_back(card17);
    cardlist.push_back(card18);
    cardlist.push_back(card19);
    cardlist.push_back(card20);
    cardlist.push_back(card21);
    cardlist.push_back(card22);
    cardlist.push_back(card23);
    cardlist.push_back(card24);
    cardlist.push_back(card25);
    cardlist.push_back(card26);

    //diamonds images
    cardlist.push_back(card27);
    cardlist.push_back(card28);
    cardlist.push_back(card29);
    cardlist.push_back(card30);
    cardlist.push_back(card31);
    cardlist.push_back(card32);
    cardlist.push_back(card33);
    cardlist.push_back(card34);
    cardlist.push_back(card35);
    cardlist.push_back(card36);
    cardlist.push_back(card37);
    cardlist.push_back(card38);
    cardlist.push_back(card39);

    //clubs images
    cardlist.push_back(card40);
    cardlist.push_back(card41);
    cardlist.push_back(card42);
    cardlist.push_back(card43);
    cardlist.push_back(card44);
    cardlist.push_back(card45);
    cardlist.push_back(card46);
    cardlist.push_back(card47);
    cardlist.push_back(card48);
    cardlist.push_back(card49);
    cardlist.push_back(card50);
    cardlist.push_back(card51);
    cardlist.push_back(card52);

    //generates cards to populate the deck one by one
    for(int i = 0; i < 52; i++){
        switch(j){
        case 0:
            tempsuit = "spades";
            break;
        case 1:
            tempsuit = "hearts";
            break;
        case 2:
            tempsuit = "diamonds";
            break;
        case 3:
            tempsuit = "clubs";
            break;
        }
        switch(k){
        case 1:
            rank = 'A';
            break;
        case 10:
            rank = 'T';
            break;
        case 11:
            rank = 'J';
            break;
        case 12:
            rank = 'Q';
            break ;
        case 13:
            rank = 'K';
            k = 0; //reset rank incrementor upon reaching King
            j++; //once the rank incrementor reaches King, move onto the next suit
            break;
        default:
            rank = '0' + k; //sets rank to the char of its numeric value for 2~9
            break;
        }
        k++; //increment rank incrementor
        this->cards[i] = card(tempsuit, rank); //creates card at slot i
        this->cards[i].setImg(cardlist.front()); //sets the image from the list by using the first image in the list
        cardlist.pop_front(); //discards the first image from the list so that the next card has the correct image
    }

}

deck::~deck(){
    delete[] this->cards;
}


card deck::draw(){
    srand (time(NULL));
    int temp = rand() % this->count; //generate a random number from 0 to total number of cards-1
    card tempcard = this->cards[temp]; //chooses a card based on the random index from rand()
    for(int i=temp; i<this->count-1; i++){
        this->cards[i] = this->cards[i+1]; //changes the location of all the cards so that there are no empty indicies
    }
    this->count--; //decrement amount of cards in the deck so that draw() works on next call
    return tempcard;
}
