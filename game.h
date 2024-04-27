#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "deck.h"

namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
     deck Deck;
    ~Game();

private slots:
    void on_Deal_clicked();


private:
    Ui::Game *ui;
};

#endif // GAME_H
