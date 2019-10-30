#ifndef VENDA_H
#define VENDA_H

#include <QDialog>
#include "lde.h"

namespace Ui {
class venda;
}

class venda : public QDialog
{
    Q_OBJECT

public:
    explicit venda(QWidget *parent = nullptr);
    ~venda();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::venda *ui;
};

#endif // VENDA_H
