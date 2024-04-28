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

private:
    Ui::L *ui;
};

#endif // L_H
