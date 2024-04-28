#include "card.h"
#include "player.h"

using namespace std;

player::player(){
    this->cards = nullptr;
    this->count = 0;
}

player::player(card c){
    this->cards = new card[1];
    this->cards[0] = c;
    this->count = 1;
}

player::~player(){
    delete[] this->cards;
}

void player::addCard(card c){
    card* temp = new card[this->count+1];
    for(int i = 0; i < this->count; i++){
        temp[i] = this->cards[i];
    }
    temp[this->count] = c;
    delete[] this->cards;
    this->cards = temp;
    this->count = this->count + 1;
}

void player::flipCard(int index){
    this->cards[index].flip();
}

int player::getVal(){
    int sum = 0;
    int aceCount = 0;
    for (int i = 0; i < this->count; i++){
        sum += this->cards[i].getVal();
        if(this->cards[i].getVal()==11){
            aceCount++;
        }
    }
    if(sum > 21){
        while(sum>21 && aceCount != 0){
            sum -= 10;
            aceCount--;
        }
    }
    return sum;
}

card* player::getCards(){
    return this->cards;
}
