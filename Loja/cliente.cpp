#include "cliente.h"
#include "ui_cliente.h"
#include <QMessageBox>

lde obj, *atual;

cliente::cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cliente)
{
    ui->setupUi(this);
    }


cliente::~cliente()
{
    delete ui;
}


void cliente::on_pushButton_clicked() //
{
    std::string nome = ui->lineEdit_2->text().toStdString();
    int idade = ui->lineEdit_3->text().toInt();
    if(nome == ""){
        QMessageBox::warning(this, "ERRO", "Insira o nome");
        return;
    }
    if(idade == 0){ // caso nenhum preço seja escolhido
        QMessageBox::warning(this, "ERRO", "Insira um valor válido");
        return;
    }
    obj.insere(idade, nome);
}

void cliente::on_pushButton_2_clicked()
{
    std::string nome = ui->lineEdit->text().toStdString();
    if(obj.remove(nome) == false){
        QMessageBox::warning(this,"ERRO","nome nao cadastrado ou inserido errado o nome");
        return;
    }

}
void cliente::on_pushButton_3_clicked()
{
    ui->textBrowser->setText("");
    atual = obj.primeiro;
    while(atual){
        QString nome = QString::fromStdString(atual->nome);
        QString idade = QString::number(atual->val);
        ui->textBrowser->append(nome + " | " + idade + " anos");
        atual = atual->proximo;
    }
}

void cliente::on_pushButton_4_clicked()
{
    this->close();
}
