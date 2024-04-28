#ifndef L_H
#define L_H

#include <QWidget>

namespace Ui {
class L;
}

class L : public QWidget
{
    Q_OBJECT

public:
    explicit L(QWidget *parent = nullptr);
    ~L();

private slots:
    void on_Play_Again_clicked();

private:
    Ui::L *ui;
};

#endif // L_H
