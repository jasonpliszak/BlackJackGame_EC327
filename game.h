#ifndef GAME_H
#define GAME_H

#include <QWidget>

namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

public slots:
    void loadDeck();

private slots:
    void on_Hit_clicked();

    void on_Stand_clicked();

    void on_Deal_clicked();


private:
    Ui::Game *ui;
};

#endif // GAME_H
