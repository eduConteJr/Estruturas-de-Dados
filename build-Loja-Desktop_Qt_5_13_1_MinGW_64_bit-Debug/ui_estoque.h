/********************************************************************************
** Form generated from reading UI file 'estoque.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTOQUE_H
#define UI_ESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_estoque
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QComboBox *comboBox;

    void setupUi(QDialog *estoque)
    {
        if (estoque->objectName().isEmpty())
            estoque->setObjectName(QString::fromUtf8("estoque"));
        estoque->resize(400, 300);
        pushButton = new QPushButton(estoque);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 250, 75, 23));
        pushButton_2 = new QPushButton(estoque);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 40, 121, 23));
        label = new QLabel(estoque);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 180, 151, 16));
        textBrowser = new QTextBrowser(estoque);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(220, 40, 161, 131));
        pushButton_3 = new QPushButton(estoque);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 10, 141, 23));
        pushButton_4 = new QPushButton(estoque);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 70, 121, 23));
        comboBox = new QComboBox(estoque);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 10, 121, 21));

        retranslateUi(estoque);

        QMetaObject::connectSlotsByName(estoque);
    } // setupUi

    void retranslateUi(QDialog *estoque)
    {
        estoque->setWindowTitle(QCoreApplication::translate("estoque", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("estoque", "Voltar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("estoque", "Remover", nullptr));
        label->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("estoque", "Produtos", nullptr));
        pushButton_4->setText(QCoreApplication::translate("estoque", "Adicionar", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("estoque", "1 - Pacote de Arroz", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("estoque", "2 - Pacote de Feij\303\243o", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("estoque", "3 - Pacote de Macarr\303\243o", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("estoque", "4 - Coca-Cola 2L", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("estoque", "5 - Guarana 2L", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("estoque", "6 - Cerveja 350ml", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("estoque", "7 - Pacote de Bolacha", nullptr));

    } // retranslateUi

};

namespace Ui {
    class estoque: public Ui_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTOQUE_H
