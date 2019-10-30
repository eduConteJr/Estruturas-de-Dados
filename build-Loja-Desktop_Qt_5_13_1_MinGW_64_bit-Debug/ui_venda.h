/********************************************************************************
** Form generated from reading UI file 'venda.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENDA_H
#define UI_VENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_venda
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QComboBox *comboBox;
    QPushButton *pushButton_5;
    QLabel *label;

    void setupUi(QDialog *venda)
    {
        if (venda->objectName().isEmpty())
            venda->setObjectName(QString::fromUtf8("venda"));
        venda->resize(400, 300);
        pushButton = new QPushButton(venda);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 250, 75, 23));
        textBrowser = new QTextBrowser(venda);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 70, 371, 181));
        pushButton_2 = new QPushButton(venda);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 40, 91, 32));
        pushButton_3 = new QPushButton(venda);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 40, 81, 32));
        pushButton_4 = new QPushButton(venda);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 40, 81, 32));
        comboBox = new QComboBox(venda);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 10, 121, 21));
        pushButton_5 = new QPushButton(venda);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(290, 40, 81, 31));
        label = new QLabel(venda);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(166, 10, 151, 20));

        retranslateUi(venda);

        QMetaObject::connectSlotsByName(venda);
    } // setupUi

    void retranslateUi(QDialog *venda)
    {
        venda->setWindowTitle(QCoreApplication::translate("venda", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("venda", "Voltar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("venda", "Total", nullptr));
        pushButton_3->setText(QCoreApplication::translate("venda", "Adicionar", nullptr));
        pushButton_4->setText(QCoreApplication::translate("venda", "Remover", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("venda", "1 - Pacote de Arroz", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("venda", "2 - Pacote de Feij\303\243o", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("venda", "3 - Pacote de Macarr\303\243o", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("venda", "4 - Coca-Cola 2L", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("venda", "5 - Guarana 2L", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("venda", "6 - Cerveja 350ml", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("venda", "7 - Pacote de Bolacha", nullptr));

        pushButton_5->setText(QCoreApplication::translate("venda", "Total a Pagar", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class venda: public Ui_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENDA_H
