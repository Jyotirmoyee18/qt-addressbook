/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QTableView *tableView;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label1;
    QLineEdit *mobileEdit;
    QLabel *label2;
    QLineEdit *emailEdit;
    QLabel *label3;
    QDateEdit *birthdayEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *saveButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        vboxLayout->addWidget(tableView);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameEdit = new QLineEdit(centralwidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label1);

        mobileEdit = new QLineEdit(centralwidget);
        mobileEdit->setObjectName(QString::fromUtf8("mobileEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mobileEdit);

        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label2);

        emailEdit = new QLineEdit(centralwidget);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, emailEdit);

        label3 = new QLabel(centralwidget);
        label3->setObjectName(QString::fromUtf8("label3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label3);

        birthdayEdit = new QDateEdit(centralwidget);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));
        birthdayEdit->setCalendarPopup(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, birthdayEdit);


        vboxLayout->addLayout(formLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        hboxLayout->addWidget(addButton);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        hboxLayout->addWidget(deleteButton);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        hboxLayout->addWidget(saveButton);


        vboxLayout->addLayout(hboxLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Address Book", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Mobile", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "Birthday", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
