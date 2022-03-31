/********************************************************************************
** Form generated from reading UI file 'inventory.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORY_H
#define UI_INVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inventory
{
public:
    QWidget *centralwidget;
    QLabel *label;

    void setupUi(QMainWindow *Inventory)
    {
        if (Inventory->objectName().isEmpty())
            Inventory->setObjectName(QString::fromUtf8("Inventory"));
        Inventory->resize(800, 600);
        centralwidget = new QWidget(Inventory);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 170, 221, 131));
        Inventory->setCentralWidget(centralwidget);

        retranslateUi(Inventory);

        QMetaObject::connectSlotsByName(Inventory);
    } // setupUi

    void retranslateUi(QMainWindow *Inventory)
    {
        Inventory->setWindowTitle(QCoreApplication::translate("Inventory", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Inventory", "INVENTORY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inventory: public Ui_Inventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORY_H
