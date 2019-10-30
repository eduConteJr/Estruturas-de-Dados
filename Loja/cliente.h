#ifndef CLIENTE_H
#define CLIENTE_H

#include <QDialog>
#include "lde.h"

namespace Ui {
class cliente;
}

class cliente : public QDialog
{
    Q_OBJECT

public:
    explicit cliente(QWidget *parent = nullptr);
    ~cliente();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::cliente *ui;
};

#endif // CLIENTE_H
