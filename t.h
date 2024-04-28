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

private slots:
    void on_Play_Again2_clicked();

    void on_Return_Home2_clicked();

private:
    Ui::T *ui;
};

#endif // T_H
