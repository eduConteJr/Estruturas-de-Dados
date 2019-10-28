/********************************************************************************
** Form generated from reading UI file 'gerenciamento.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERENCIAMENTO_H
#define UI_GERENCIAMENTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gerenciamento
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *gerenciamento)
    {
        if (gerenciamento->objectName().isEmpty())
            gerenciamento->setObjectName(QString::fromUtf8("gerenciamento"));
        gerenciamento->resize(400, 300);
        pushButton = new QPushButton(gerenciamento);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 130, 141, 23));
        pushButton_2 = new QPushButton(gerenciamento);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 160, 141, 23));
        pushButton_3 = new QPushButton(gerenciamento);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 190, 141, 31));
        pushButton_4 = new QPushButton(gerenciamento);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 230, 141, 31));

        retranslateUi(gerenciamento);

        QMetaObject::connectSlotsByName(gerenciamento);
    } // setupUi

    void retranslateUi(QDialog *gerenciamento)
    {
        gerenciamento->setWindowTitle(QCoreApplication::translate("gerenciamento", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("gerenciamento", "Venda", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gerenciamento", "Estoque", nullptr));
        pushButton_3->setText(QCoreApplication::translate("gerenciamento", "Produtos", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gerenciamento", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gerenciamento: public Ui_gerenciamento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERENCIAMENTO_H
