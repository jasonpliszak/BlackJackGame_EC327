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

private:
    Ui::W *ui;
};

#endif // W_H
