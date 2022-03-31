/********************************************************************************
** Form generated from reading UI file 'viewaccounts.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWACCOUNTS_H
#define UI_VIEWACCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewAccounts
{
public:
    QWidget *centralwidget;
    QLabel *label;

    void setupUi(QMainWindow *ViewAccounts)
    {
        if (ViewAccounts->objectName().isEmpty())
            ViewAccounts->setObjectName(QString::fromUtf8("ViewAccounts"));
        ViewAccounts->resize(800, 600);
        centralwidget = new QWidget(ViewAccounts);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 150, 291, 221));
        ViewAccounts->setCentralWidget(centralwidget);

        retranslateUi(ViewAccounts);

        QMetaObject::connectSlotsByName(ViewAccounts);
    } // setupUi

    void retranslateUi(QMainWindow *ViewAccounts)
    {
        ViewAccounts->setWindowTitle(QCoreApplication::translate("ViewAccounts", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ViewAccounts", "VIEW ACCOUNTS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewAccounts: public Ui_ViewAccounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWACCOUNTS_H
