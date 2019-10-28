#ifndef GERENCIAMENTO_H
#define GERENCIAMENTO_H

#include <QDialog>

namespace Ui {
class gerenciamento;
}

class Gerenciamento : public QDialog
{
    Q_OBJECT

public:
    explicit Gerenciamento(QWidget*parent = nullptr);
    ~Gerenciamento();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::gerenciamento*ui;
};

#endif // GERENCIAMENTO_H
