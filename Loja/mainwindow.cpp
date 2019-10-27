#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registro.h"
#include "gerenciamento.h"
#include <QFile>
#include <QMessageBox>
#include <fstream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->senha->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_logIn_clicked()
{
    std::ifstream usuario("login.txt");
    std::string linebuffer;
    std::string user[100];
    int i = 0;
    while (usuario && getline(usuario, linebuffer)){//lê o arquivo de usuario e armazena em user
        if (linebuffer.length() == 0)continue;
            user[i] = linebuffer;
            i++;
    }
    std::ifstream senha("senha.txt");
    std::string linha;
    std::string conteudoSenha[100];
    int p = 0;
    while (senha && getline(senha, linha)){ //lê o arquivo de senha e armazena em conteudoSenha
        if (linha.length() == 0)continue;
            conteudoSenha[p] = linha;
            p++;
        }
    int l = 0;
    std::string busca = ui->usuario->text().toStdString(); //pega o usuario entrados pelo usuario
    std::string buscaS = ui->senha->text().toStdString();  //pega a senha entrada pelo usuario

    for(l; busca != user[l] && l < user->size(); l++);//encontra a posição dos dados na array

    if(user[l] == "" && conteudoSenha[l] == "" || busca != user[l] ||
            buscaS != conteudoSenha[l]){ //caso o usuário e a senha não serem encontrados
        QMessageBox::warning(this,"ERRO","Usuário ou senha incorretos");
        return;
    }
    if(busca == user[l] && buscaS == conteudoSenha[l]){ //caso o usuario e a senha forem corretos abre a proxima página
        Gerenciamento janela;
        janela.setModal(true);
        janela.exec();
        return;
    }
}

void MainWindow::on_registrar_clicked()
{
    Registro registro;
    registro.setModal(true);
    registro.exec();
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}
