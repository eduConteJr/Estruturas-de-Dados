#include "venda.h"
#include "ui_venda.h"
#include "fila.h"
#include <qmessagebox.h>

fila fila;

venda::venda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::venda)
{
    ui->setupUi(this);
}

venda::~venda()
{
    delete ui;
}

void venda::on_pushButton_clicked()
{
    this->close();
}

void venda::on_pushButton_2_clicked()
{
    ui->textBrowser->setText("");
    int x;
    for(x = fila.getI(); x !=fila.getF(); x=((x+1) % fila.getMax())){
       QString a = QString::number(fila.getVenda(x));
       if(fila.getVenda(x) == 1){
           ui->textBrowser->append("Pacote de Arroz");
       }
       if(fila.getVenda(x) == 2){
           ui->textBrowser->append("Pacote de Feijão");
       }
       if(fila.getVenda(x) == 3){
           ui->textBrowser->append("Pacote de macarrão");
       }
       if(fila.getVenda(x) == 4){
           ui->textBrowser->append("Coca-Cola 2L");
       }
       if(fila.getVenda(x) == 5){
           ui->textBrowser->append("Guarana 2L");
       }
       if(fila.getVenda(x) == 6){
           ui->textBrowser->append("Cerveja 350ml");
       }
       if(fila.getVenda(x) == 7){
           ui->textBrowser->append("Pacote de Bolacha");
       }

    }

}

void venda::on_pushButton_3_clicked()
{

    QString cb = ui->comboBox->currentText();
    ui->textBrowser->setText("");
    int x;

    if(cb == "1 - Pacote de Arroz"){
        if(fila.enfileira(0, 1) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("R$ 11,00");
            return;
        }
    }

    if(cb == "2 - Pacote de Feijão"){
        if(fila.enfileira(0, 2) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("R$ 10,00");
            return;
        }
    }

    if(cb == "3 - Pacote de Macarrão"){
        if(fila.enfileira(0, 3) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("R$ 3,00");
            return;
        }
    }

    if(cb == "4 - Coca-Cola 2L"){
        if(fila.enfileira(0,4) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("R$ 4,00");
            return;
        }
    }

    if(cb == "5 - Guarana 2L"){
        if(fila.enfileira(0,5) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("R$ 3,40");
            return;
        }
    }

    if(cb == "6 - Cerveja 350ml"){
        if(fila.enfileira(0,6) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("R$ 3,00");
            return;
        }
    }

    if(cb == "7 - Pacote de Bolacha"){
        if(fila.enfileira(0,7) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("R$ 1,50");
            return;
        }
    }
}

void venda::on_pushButton_4_clicked()
{
    if(fila.desenfileira() == false){
        QMessageBox::warning(this,"ERRO","Sem produto comprado");
        return;
    } else {
        ui->label->setText("Produto retirado");
        return;
    }
}

void venda::on_pushButton_5_clicked()
{

}
