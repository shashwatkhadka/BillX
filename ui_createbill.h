/********************************************************************************
** Form generated from reading UI file 'createbill.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBILL_H
#define UI_CREATEBILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
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

class Ui_CreateBill
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *logo;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_billnumber;
    QVBoxLayout *verticalLayout;
    QLabel *Digital_clock;
    QLabel *DateTime;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_customername;
    QLabel *label_6;
    QLineEdit *lineEdit_mobilenumber;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_productcode;
    QLabel *label_8;
    QLineEdit *lineEdit_quantity;
    QPushButton *pushButton_enter;
    QColumnView *columnView;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *CreateBill)
    {
        if (CreateBill->objectName().isEmpty())
            CreateBill->setObjectName(QString::fromUtf8("CreateBill"));
        CreateBill->resize(1284, 668);
        centralwidget = new QWidget(CreateBill);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));

        horizontalLayout->addWidget(logo);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Segoe Print\";\n"
"font: 9pt \"Segoe Print\";\n"
"font: 22pt \"Segoe Script\";\n"
"text-decoration: underline;\n"
"font: 36pt \"Segoe UI\";"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_billnumber = new QLineEdit(centralwidget);
        lineEdit_billnumber->setObjectName(QString::fromUtf8("lineEdit_billnumber"));

        horizontalLayout_2->addWidget(lineEdit_billnumber);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Digital_clock = new QLabel(centralwidget);
        Digital_clock->setObjectName(QString::fromUtf8("Digital_clock"));
        Digital_clock->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Segoe UI\";\n"
"font: 14pt \"Segoe UI\";"));

        verticalLayout->addWidget(Digital_clock);

        DateTime = new QLabel(centralwidget);
        DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->setStyleSheet(QString::fromUtf8("font: 24pt \"Segoe UI\";\n"
"font: 14pt \"Segoe UI\";"));

        verticalLayout->addWidget(DateTime);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 50, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEdit_customername = new QLineEdit(centralwidget);
        lineEdit_customername->setObjectName(QString::fromUtf8("lineEdit_customername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_customername);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        lineEdit_mobilenumber = new QLineEdit(centralwidget);
        lineEdit_mobilenumber->setObjectName(QString::fromUtf8("lineEdit_mobilenumber"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_mobilenumber);


        horizontalLayout_4->addLayout(formLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEdit_productcode = new QLineEdit(centralwidget);
        lineEdit_productcode->setObjectName(QString::fromUtf8("lineEdit_productcode"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_productcode);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_quantity = new QLineEdit(centralwidget);
        lineEdit_quantity->setObjectName(QString::fromUtf8("lineEdit_quantity"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_quantity);


        horizontalLayout_4->addLayout(formLayout_2);

        pushButton_enter = new QPushButton(centralwidget);
        pushButton_enter->setObjectName(QString::fromUtf8("pushButton_enter"));
        pushButton_enter->setMinimumSize(QSize(20, 59));

        horizontalLayout_4->addWidget(pushButton_enter);


        verticalLayout_2->addLayout(horizontalLayout_4);

        columnView = new QColumnView(centralwidget);
        columnView->setObjectName(QString::fromUtf8("columnView"));

        verticalLayout_2->addWidget(columnView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        CreateBill->setCentralWidget(centralwidget);

        retranslateUi(CreateBill);

        QMetaObject::connectSlotsByName(CreateBill);
    } // setupUi

    void retranslateUi(QMainWindow *CreateBill)
    {
        CreateBill->setWindowTitle(QCoreApplication::translate("CreateBill", "MainWindow", nullptr));
        logo->setText(QString());
        label->setText(QCoreApplication::translate("CreateBill", "BillX", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateBill", "Exit", nullptr));
        label_3->setText(QCoreApplication::translate("CreateBill", "Bill Number :", nullptr));
        Digital_clock->setText(QCoreApplication::translate("CreateBill", "Clock", nullptr));
        DateTime->setText(QCoreApplication::translate("CreateBill", "Date And Time", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CreateBill", "Save", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateBill", "New", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CreateBill", "Undo", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CreateBill", "Print", nullptr));
        label_4->setText(QCoreApplication::translate("CreateBill", "Bill To :", nullptr));
        label_6->setText(QCoreApplication::translate("CreateBill", "Mobile Number :", nullptr));
        label_7->setText(QCoreApplication::translate("CreateBill", "Product Code :", nullptr));
        label_8->setText(QCoreApplication::translate("CreateBill", "Quantity : ", nullptr));
        pushButton_enter->setText(QCoreApplication::translate("CreateBill", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateBill: public Ui_CreateBill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBILL_H
