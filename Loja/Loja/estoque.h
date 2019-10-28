#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <QDialog>
#include "les.h"

namespace Ui {
class estoque;
}

class estoque : public QDialog
{
    Q_OBJECT

public:
    explicit estoque(QWidget *parent = nullptr);
    ~estoque();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::estoque *ui;
};

#endif // ESTOQUE_H
