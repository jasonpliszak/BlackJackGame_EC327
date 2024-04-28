#ifndef T_H
#define T_H

#include <QWidget>

namespace Ui {
class T;
}

class T : public QWidget
{
    Q_OBJECT

public:
    explicit T(QWidget *parent = nullptr);
    ~T();

private:
    Ui::T *ui;
};

#endif // T_H
