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
    deck Deck;
    player User;
    player House;
    int hitcounter = 0;
    ~Game();

private slots:
    void on_Deal_clicked();
    void on_Hit_clicked();
    void delayedLose();


private:
    Ui::Game *ui;
};

#endif // GAME_H
