#include "gerenciamento.h"
#include "ui_gerenciamento.h"
#include "mainwindow.h"
#include "estoque.h"


Gerenciamento::Gerenciamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gerenciamento)
{
    ui->setupUi(this);
}

Gerenciamento::~Gerenciamento()
{
    delete ui;
}

void Gerenciamento::on_pushButton_clicked()
{

}

void Gerenciamento::on_pushButton_2_clicked()
{
    estoque estoque;
    estoque.setModal(true);
    estoque.exec();
}

void Gerenciamento::on_pushButton_3_clicked()
{

}

void Gerenciamento::on_pushButton_4_clicked()
{
     this->close();
}
