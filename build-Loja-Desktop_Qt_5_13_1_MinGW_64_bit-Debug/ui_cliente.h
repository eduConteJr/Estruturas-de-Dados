/********************************************************************************
** Form generated from reading UI file 'cliente.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTE_H
#define UI_CLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_cliente
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QLabel *label_4;
    QPushButton *pushButton_4;

    void setupUi(QDialog *cliente)
    {
        if (cliente->objectName().isEmpty())
            cliente->setObjectName(QString::fromUtf8("cliente"));
        cliente->resize(400, 300);
        pushButton = new QPushButton(cliente);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 120, 75, 23));
        pushButton_2 = new QPushButton(cliente);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 250, 75, 23));
        pushButton_3 = new QPushButton(cliente);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 10, 121, 23));
        lineEdit = new QLineEdit(cliente);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 250, 121, 20));
        label = new QLabel(cliente);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 270, 111, 20));
        lineEdit_2 = new QLineEdit(cliente);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 30, 151, 20));
        lineEdit_3 = new QLineEdit(cliente);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 90, 151, 20));
        label_2 = new QLabel(cliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 101, 16));
        label_3 = new QLabel(cliente);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 63, 71, 20));
        textBrowser = new QTextBrowser(cliente);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(190, 40, 201, 192));
        label_4 = new QLabel(cliente);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 230, 141, 16));
        pushButton_4 = new QPushButton(cliente);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 260, 75, 23));

        retranslateUi(cliente);

        QMetaObject::connectSlotsByName(cliente);
    } // setupUi

    void retranslateUi(QDialog *cliente)
    {
        cliente->setWindowTitle(QCoreApplication::translate("cliente", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("cliente", "Adicionar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cliente", "Remover", nullptr));
        pushButton_3->setText(QCoreApplication::translate("cliente", "Lista de clientes", nullptr));
        label->setText(QCoreApplication::translate("cliente", "remover cliente", nullptr));
        label_2->setText(QCoreApplication::translate("cliente", "Nome", nullptr));
        label_3->setText(QCoreApplication::translate("cliente", "Sobrenome", nullptr));
        label_4->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("cliente", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cliente: public Ui_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTE_H
