#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "deck.h"
#include "player.h"

namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    //variables are initialized here so that they are accessible through all phases of the game
    deck Deck;
    player User; //player hand
    player House; //dealer hand
    player split; //split hand
    int bet = 0;
    int hitcounter = 0;
    bool splitFlag = false;
    bool spStandFlag = false; //stand on first split hand
    bool endCallFlag = true; //check if endgame status reached for split hand

    ~Game();

private slots:
    void on_Deal_clicked();
    void on_Hit_clicked();
    void on_Stand_clicked();
    void on_Split_clicked();

    //delay functions so that you can see the state of the cards before you are sent to the game over screen
    void delayedLose();
    void delayedTie();
    void delayedWin();
    void delayedBJW();

    void on_BetSlider_valueChanged(int value);

private:
    Ui::Game *ui;
};

#endif // GAME_H
