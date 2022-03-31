/********************************************************************************
** Form generated from reading UI file 'createbill.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBILL_H
#define UI_CREATEBILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateBill
{
public:
    QWidget *centralwidget;
    QLabel *label;

    void setupUi(QMainWindow *CreateBill)
    {
        if (CreateBill->objectName().isEmpty())
            CreateBill->setObjectName(QString::fromUtf8("CreateBill"));
        CreateBill->resize(800, 600);
        centralwidget = new QWidget(CreateBill);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 230, 191, 141));
        CreateBill->setCentralWidget(centralwidget);

        retranslateUi(CreateBill);

        QMetaObject::connectSlotsByName(CreateBill);
    } // setupUi

    void retranslateUi(QMainWindow *CreateBill)
    {
        CreateBill->setWindowTitle(QCoreApplication::translate("CreateBill", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("CreateBill", "CREATE BILL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateBill: public Ui_CreateBill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBILL_H
