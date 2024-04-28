#include "card.h"
#include "player.h"

using namespace std;

player::player(){
    this->cards = nullptr; //no arguments constructor has initial cards set to nothing
    this->count = 0; //0 cards in hand
}

player::~player(){
    delete[] this->cards;
}

void player::addCard(card c){
    card* temp = new card[this->count+1]; //sets cards to be an array of one more card than before
    for(int i = 0; i < this->count; i++){
        temp[i] = this->cards[i]; //copies old cards
    }
    temp[this->count] = c; //adds new card to the new slot
    delete[] this->cards; //deletes old cards
    this->cards = temp; //replaces the old cards with the copied cards + new card
    this->count = this->count + 1; //increments the amount of cards in the hand
}

int player::getVal(){
    int sum = 0;
    int aceCount = 0; //number of aces in hand
    for (int i = 0; i < this->count; i++){
        sum += this->cards[i].getVal(); //adds card values for every card in hand
        if(this->cards[i].getVal()==11){
            aceCount++; //counts amount of aces in hand (default ace value is 11)
        }
    }
    if(sum > 21){
        while(sum>21 && aceCount != 0){
            sum -= 10; //sets ace values to 1 where appropriate
            aceCount--; //accounts for multiple aces in hand
        }
    }
    return sum;
}

card* player::getCards(){
    return this->cards;
}
