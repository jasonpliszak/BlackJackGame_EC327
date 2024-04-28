#ifndef W_H
#define W_H

#include <QWidget>

namespace Ui {
class W;
}

class W : public QWidget
{
    Q_OBJECT

public:
    explicit W(QWidget *parent = nullptr);
    ~W();

private slots:
    void on_Play_Again1_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::W *ui;
};

#endif // W_H
