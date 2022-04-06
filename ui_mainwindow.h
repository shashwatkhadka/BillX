/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QFormLayout *formLayout_2;
    QLabel *label_user;
    QLineEdit *lineEdit_phonenumber;
    QLabel *label_pass;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *loginbutton;
    QSpacerItem *verticalSpacer_5;
    QLabel *loginstatus;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(799, 600);
        MainWindow->setMinimumSize(QSize(266, 25));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(6, 155, 116, 255), stop:0.727273 rgba(0, 0, 0, 255));\n"
"}"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 10);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 20, -1, 20);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(225, 225));
        label->setMaximumSize(QSize(225, 225));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/img/logo.png);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 20, -1, 0);
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_user = new QLabel(centralwidget);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setMinimumSize(QSize(80, 0));
        label_user->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";\n"
"text-decoration: underline;"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_user);

        lineEdit_phonenumber = new QLineEdit(centralwidget);
        lineEdit_phonenumber->setObjectName(QString::fromUtf8("lineEdit_phonenumber"));
        lineEdit_phonenumber->setMinimumSize(QSize(180, 25));
        lineEdit_phonenumber->setMaximumSize(QSize(180, 25));
        lineEdit_phonenumber->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 98));\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_phonenumber);

        label_pass = new QLabel(centralwidget);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setMinimumSize(QSize(80, 0));
        label_pass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";\n"
"text-decoration: underline;"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_pass);

        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_password->sizePolicy().hasHeightForWidth());
        lineEdit_password->setSizePolicy(sizePolicy);
        lineEdit_password->setMinimumSize(QSize(180, 25));
        lineEdit_password->setMaximumSize(QSize(180, 25));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 98));\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_password);


        verticalLayout_3->addLayout(formLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        loginbutton = new QPushButton(centralwidget);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        loginbutton->setMinimumSize(QSize(266, 25));
        loginbutton->setMaximumSize(QSize(266, 25));
        loginbutton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.232955 rgba(0, 148, 116, 255), stop:0.568182 rgba(44, 204, 149, 255), stop:0.875 rgba(0, 168, 132, 251));\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        verticalLayout_4->addWidget(loginbutton);


        verticalLayout_3->addLayout(verticalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        loginstatus = new QLabel(centralwidget);
        loginstatus->setObjectName(QString::fromUtf8("loginstatus"));
        loginstatus->setMinimumSize(QSize(266, 25));
        loginstatus->setMaximumSize(QSize(247, 25));
        loginstatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        loginstatus->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(loginstatus);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_user->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        label_pass->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginbutton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        loginstatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
