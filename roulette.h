#ifndef ROULETTE_H
#define ROULETTE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Roulette;
}
QT_END_NAMESPACE

class Roulette : public QMainWindow
{
    Q_OBJECT

public:
    Roulette(QWidget *parent = nullptr);
    ~Roulette();
    // Variables that are modified in multiple parts of Roulette
    int bet;            // allocated a seperate variable for straight up bets
    int* bets;          // array storing all numbers that bets are placed on
    int* numbers;       // wheel numbers (0-36)
    int randomNumber;   // random number picked from numbers to determine roulette spin
    int check;          // checking what type of bet is placed
    int balance;
    int betAmount;
    int winnings;       // payout based on odds of placed bet
    // Pixmap for images of roulette wheel
    QList<QPixmap> wheel;
    QString PlacedBet;
    // Function to update text labels as game progresses
    void textUpdate();


private:
    Ui::Roulette *ui;

public slots:
    void loadlist();    // loading all images for wheel outcomes

private slots:
    // Slider adjusting betAmount
    void on_BetSlider_valueChanged(int value);

    // Buttons for other functions
    void on_Spin_clicked();
    void on_Reset_clicked();        // Reset money to 1000
    void on_Home_clicked();
    void on_BlackJack_clicked();    // Open BlackJack with same balance as roulette

    // Buttons for placing bets
    void on_Bet00_clicked();
    void on_Bet01_clicked();
    void on_Bet02_clicked();
    void on_Bet03_clicked();
    void on_Bet04_clicked();
    void on_Bet05_clicked();
    void on_Bet06_clicked();
    void on_Bet07_clicked();
    void on_Bet08_clicked();
    void on_Bet09_clicked();
    void on_Bet10_clicked();
    void on_Bet11_clicked();
    void on_Bet12_clicked();
    void on_Bet13_clicked();
    void on_Bet14_clicked();
    void on_Bet15_clicked();
    void on_Bet16_clicked();
    void on_Bet17_clicked();
    void on_Bet18_clicked();
    void on_Bet19_clicked();
    void on_Bet20_clicked();
    void on_Bet21_clicked();
    void on_Bet22_clicked();
    void on_Bet23_clicked();
    void on_Bet24_clicked();
    void on_Bet25_clicked();
    void on_Bet26_clicked();
    void on_Bet27_clicked();
    void on_Bet28_clicked();
    void on_Bet29_clicked();
    void on_Bet30_clicked();
    void on_Bet31_clicked();
    void on_Bet32_clicked();
    void on_Bet33_clicked();
    void on_Bet34_clicked();
    void on_Bet35_clicked();
    void on_Bet36_clicked();

    void on_Quad0_clicked();
    void on_Quad1_clicked();
    void on_Quad2_clicked();
    void on_Quad3_clicked();
    void on_Quad4_clicked();
    void on_Quad5_clicked();
    void on_Quad6_clicked();
    void on_Quad7_clicked();
    void on_Quad8_clicked();
    void on_Quad9_clicked();
    void on_Quad10_clicked();
    void on_Quad11_clicked();
    void on_Quad12_clicked();
    void on_Quad13_clicked();
    void on_Quad14_clicked();
    void on_Quad15_clicked();
    void on_Quad16_clicked();
    void on_Quad17_clicked();
    void on_Quad18_clicked();
    void on_Quad19_clicked();
    void on_Quad20_clicked();
    void on_Quad21_clicked();
    void on_Quad22_clicked();

    void on_Street1_clicked();
    void on_Street2_clicked();
    void on_Street3_clicked();
    void on_Street4_clicked();
    void on_Street5_clicked();
    void on_Street6_clicked();
    void on_Street7_clicked();
    void on_Street8_clicked();
    void on_Street9_clicked();
    void on_Street10_clicked();
    void on_Street11_clicked();
    void on_Street12_clicked();
    void on_Basket1_clicked();
    void on_Basket2_clicked();

    void on_Six1_clicked();
    void on_Six2_clicked();
    void on_Six3_clicked();
    void on_Six4_clicked();
    void on_Six5_clicked();
    void on_Six6_clicked();
    void on_Six7_clicked();
    void on_Six8_clicked();
    void on_Six9_clicked();
    void on_Six10_clicked();
    void on_Six11_clicked();

    void on_Row1_clicked();
    void on_Row2_clicked();
    void on_Row3_clicked();
    void on_Dozen1_clicked();
    void on_Dozen2_clicked();
    void on_Dozen3_clicked();

    void on_Odd_clicked();
    void on_Even_clicked();
    void on_Red_clicked();
    void on_Black_clicked();
    void on_Low_clicked();
    void on_High_clicked();

    void on_Split01_clicked();
    void on_Split02_clicked();
    void on_Split03_clicked();
    void on_Split1011_clicked();
    void on_Split1013_clicked();
    void on_Split1112_clicked();
    void on_Split1114_clicked();
    void on_Split12_clicked();
    void on_Split1215_clicked();
    void on_Split1314_clicked();
    void on_Split1316_clicked();
    void on_Split14_clicked();
    void on_Split1415_clicked();
    void on_Split1417_clicked();
    void on_Split1518_clicked();
    void on_Split1617_clicked();
    void on_Split1619_clicked();
    void on_Split1718_clicked();
    void on_Split1720_clicked();
    void on_Split1821_clicked();
    void on_Split1920_clicked();
    void on_Split1922_clicked();
    void on_Split2021_clicked();
    void on_Split2023_clicked();
    void on_Split2124_clicked();
    void on_Split2223_clicked();
    void on_Split2225_clicked();
    void on_Split23_clicked();
    void on_Split2324_clicked();
    void on_Split2326_clicked();
    void on_Split2427_clicked();
    void on_Split25_clicked();
    void on_Split2526_clicked();
    void on_Split2528_clicked();
    void on_Split2627_clicked();
    void on_Split2629_clicked();
    void on_Split2730_clicked();
    void on_Split2829_clicked();
    void on_Split2831_clicked();
    void on_Split2930_clicked();
    void on_Split2932_clicked();
    void on_Split3033_clicked();
    void on_Split3132_clicked();
    void on_Split3134_clicked();
    void on_Split3233_clicked();
    void on_Split3235_clicked();
    void on_Split3336_clicked();
    void on_Split3435_clicked();
    void on_Split3536_clicked();
    void on_Split36_clicked();
    void on_Split45_clicked();
    void on_Split47_clicked();
    void on_Split56_clicked();
    void on_Split58_clicked();
    void on_Split69_clicked();
    void on_Split710_clicked();
    void on_Split78_clicked();
    void on_Split811_clicked();
    void on_Split89_clicked();
    void on_Split912_clicked();

};
#endif // ROULETTE_H
