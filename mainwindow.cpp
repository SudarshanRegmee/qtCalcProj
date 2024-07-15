#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int num1, num2, res;

int adder (int x, int y) {
    return x+y;
}

int subber (int x, int y) {
    return x-y;
}

int muller (int x, int y) {
    return x*y;
}

int divver (int x, int y) {
    return x/y;
}



void MainWindow::on_addBtn_clicked()
{
    num1 = ui->num1->text().toInt();
    num2 = ui->num2->text().toInt();
    res = num1+num2;
    ui->res->setText(QString::number(res));
}


void MainWindow::on_subBtn_clicked()
{
    num1 = ui->num1->text().toInt();
    num2 = ui->num2->text().toInt();
    res = subber(num1, num2);
    ui->res->setText(QString::number(res));
}



void MainWindow::on_mulBtn_clicked()
{
    num1 = ui->num1->text().toInt();
    num2 = ui->num2->text().toInt();
    res = muller(num1, num2);
    ui->res->setText(QString::number(res));

}


void MainWindow::on_divBtn_clicked()
{
    num1 = ui->num1->text().toInt();
    num2 = ui->num2->text().toInt();
    res = divver(num1, num2);
    ui->res->setText(QString::number(res));
}

