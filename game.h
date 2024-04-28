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
    int hitcounter = 0;

    ~Game();

private slots:
    void on_Deal_clicked();
    void on_Hit_clicked();
    void on_Stand_clicked();

    //delay functions so that you can see the state of the cards before you are sent to a game over screen
    void delayedLose();
    void delayedTie();
    void delayedWin();

private:
    Ui::Game *ui;
};

#endif // GAME_H
