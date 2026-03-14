#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlTableModel>
#include <QMessageBox>
#include <QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model = new QSqlTableModel(this);
    model->setTable("contacts");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();

    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::addContact);
    connect(ui->deleteButton, &QPushButton::clicked, this, &MainWindow::deleteContact);
    connect(ui->saveButton, &QPushButton::clicked, this, &MainWindow::saveContact);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addContact()
{
    if(!validateInputs())
        return;

    QString name = ui->nameEdit->text();
    QString mobile = ui->mobileEdit->text();
    QString email = ui->emailEdit->text();
    QString birthday = ui->birthdayEdit->date().toString("yyyy-MM-dd");

    int row = model->rowCount();
    model->insertRow(row);

    model->setData(model->index(row,1), name);
    model->setData(model->index(row,2), mobile);
    model->setData(model->index(row,3), email);
    model->setData(model->index(row,4), birthday);

    ui->nameEdit->clear();
    ui->mobileEdit->clear();
    ui->emailEdit->clear();
}

void MainWindow::deleteContact()
{
    QModelIndex index = ui->tableView->currentIndex();

    if(!index.isValid())
    {
        QMessageBox::warning(this,"Error","Please select a contact to delete");
        return;
    }

    model->removeRow(index.row());
}

void MainWindow::saveContact()
{
    if(!model->submitAll())
    {
        QMessageBox::warning(this,"Error","Failed to save changes");
        return;
    }

    model->select();

    QMessageBox::information(this,"Success","Contact saved successfully");
}

bool MainWindow::validateInputs()
{
    QString email = ui->emailEdit->text();
    QString mobile = ui->mobileEdit->text();

    QRegularExpression emailRegex(
        "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$"
    );

    QRegularExpression mobileRegex("^[0-9]{10}$");

    if(!mobileRegex.match(mobile).hasMatch())
    {
        QMessageBox::warning(this,"Error","Enter valid 10 digit mobile number");
        return false;
    }

    if(!emailRegex.match(email).hasMatch())
    {
        QMessageBox::warning(this,"Error","Enter valid email address");
        return false;
    }

    return true;
}