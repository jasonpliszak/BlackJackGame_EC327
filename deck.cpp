#include <string>
#include <time.h>
#include <stdlib.h>
#include "card.h"
#include "deck.h"

using namespace std;

deck::deck(){
    string tempsuit = "test";
    char rank = '0';
    this->count = 52;
    this->cards = new card[52];
    int j = 0;
    int k = 1;
    for(int i = 0; i < 52; i++){
        switch(j){
        case 0:
            tempsuit = "Spades";
            break;
        case 1:
            tempsuit = "Hearts";
            break;
        case 2:
            tempsuit = "Diamonds";
            break;
        case 3:
            tempsuit = "Clubs";
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
            k = 0;
            j++;
            break;
        default:
            rank = '0' + k;
            break;
        }
        k++;
        this->cards[i] = card(tempsuit, rank, 0);
    }

}

deck::~deck(){
    delete[] this->cards;
}


card deck::draw(){
    srand (time(NULL));
    int temp = rand() % this->count;
    card tempcard = this->cards[temp];
    for(int i=temp; i<this->count-1; i++){
        this->cards[i] = this->cards[i+1];
    }
    this->count--;
    return tempcard;
}
