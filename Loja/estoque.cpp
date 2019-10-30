#include "estoque.h"
#include "ui_estoque.h"
#include "gerenciamento.h"
#include <qmessagebox.h>

Les<5> sc, cc, sdc;
Les<10> sm, cm, sdm;
Les<7> p;

estoque::estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::estoque)
{
    ui->setupUi(this);
}

estoque::~estoque()
{
    delete ui;
}

void estoque::on_pushButton_clicked()
{
    this->close();
}

//Função para inserir na LES (Check-In)
void estoque::on_pushButton_2_clicked()
{
    //Pega o valor do cb
    QString cb = ui->comboBox->currentText();

    if(cb == "1 - Pacote de Arroz"){
        if(sc.insert(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque vazio");
            return;
        }
        else{
            ui->label->setText("Produto removido");
            return;
        }
    }

    if(cb == "2 - Pacote de Feijão"){
        if(cc.insert(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque vazio");
            return;
        }
        else{
            ui->label->setText("Produto removido");
            return;
        }
    }

    if(cb == "3 - Pacote de Macarrão"){
        if(sdc.insert(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque vazio");
            return;
        }
        else{
            ui->label->setText("Produto removido");
            return;
        }
    }

    if(cb == "4 - Coca-Cola 2L"){
        if(sm.insert(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque vazio");
            return;
        }
        else{
            ui->label->setText("Produto removido");
            return;
        }
    }

    if(cb == "5 - Guarana 2L"){
        if(cm.insert(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque vazio");
            return;
        }
        else{
            ui->label->setText("Produto removido");
            return;
        }
    }

    if(cb == "6 - Cerveja 350ml"){
        if(sdm.insert(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque vazio");
            return;
        }
        else{
            ui->label->setText("Produto removido");
            return;
        }
    }

    if(cb == "7 - Pacote de Bolacha"){
        if(p.insert(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque vazio");
            return;
        }
        else{
            ui->label->setText("Produto removido");
            return;
        }
    }
}

void estoque::on_pushButton_3_clicked()
{
    ui->textBrowser->setText("");
    int b =sc.getMax() - sc.getN();
    QString c = QString::number(b);
    ui->textBrowser->append("Pacote de Arroz: " + c);

    int d =cc.getMax() - cc.getN();
    QString f = QString::number(d);
    ui->textBrowser->append("Pacote de Feijão: " + f);

    int g =sdc.getMax() - sdc.getN();
    QString h = QString::number(g);
    ui->textBrowser->append("Pacote de Macarrão: " + h);

    int i =sm.getMax() - sm.getN();
    QString j = QString::number(i);
    ui->textBrowser->append("Coca-Cola 2L: " + j);

    int k =cm.getMax() - cm.getN();
    QString l = QString::number(k);
    ui->textBrowser->append("Guarana 2L: " + l);

    int m =sdm.getMax() - sdm.getN();
    QString n = QString::number(m);
    ui->textBrowser->append("Cerveja 350ml: " + n);

    int o =p.getMax() - p.getN();
    QString q = QString::number(o);
    ui->textBrowser->append("Pacote de Bolacha: " + q);

}


void estoque::on_pushButton_4_clicked()
{
    //Pega o valor de cb
    QString cb = ui->comboBox->currentText();

    if(cb == "1 - Pacote de Arroz"){
        if(sc.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque Cheio");
            return;
        }
        else{
            ui->label->setText("Produto adicionado");
            return;
        }
    }

    if(cb == "2 - Pacote de Feijão"){
        if(cc.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque Cheio");
            return;
        }
        else{
            ui->label->setText("Produto adicionado");
            return;
        }
    }

    if(cb == "3 - Pacote de Macarrão"){
        if(sdc.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque Cheio");
            return;
        }
        else{
            ui->label->setText("Produto adicionado");
            return;
        }
    }

    if(cb == "4 - Coca-Cola 2L"){
        if(sm.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque Cheio");
            return;
        }
        else{
            ui->label->setText("Produto adicionado");
            return;
        }
    }

    if(cb == "5 - Guarana 2L"){
        if(cm.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque Cheio");
            return;
        }
        else{
            ui->label->setText("Produto adicionado");
            return;
        }
    }

    if(cb == "6 - Cerveja 250ml"){
        if(sdm.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque Cheio");
            return;
        }
        else{
            ui->label->setText("Produto adicionado");
            return;
        }
    }

    if(cb == "7 - Pacote de Bolacha"){
        if(p.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Estoque Cheio");
            return;
        }
        else{
            ui->label->setText("Produto adicionado");
            return;
        }
    }

}
