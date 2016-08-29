#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/qmath.h>
#include "QtCore"
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool plus;
bool minus;
bool time;
bool divide;
bool qpow;
double a, b, c ;


void MainWindow::on_pushButton_1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"1"); //zeigt 1 an wenn Button 1 betätigt wird
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
}

void MainWindow::on_pushButton_0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
}

void MainWindow::on_pushButton_DECIMAL_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+".");
}

void MainWindow::on_pushButton_C_clicked()
{
    ui->lineEdit->setText(""); //resetet die Zeile
}


void MainWindow::on_pushButton_PLUS_clicked()
{
    a = ui->lineEdit->text().toDouble();
        plus = true;
    ui->lineEdit->setText("");

}

void MainWindow::on_pushButton_potenz_clicked()
{
    a = ui->lineEdit->text().toDouble();
        qpow = true;
    ui->lineEdit->setText("");
}


void MainWindow::on_pushButton_MINUS_clicked()
{
    a = ui->lineEdit->text().toDouble();
        minus = true;
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_MULTIPLY_clicked()
{
    a = ui->lineEdit->text().toDouble();
        time = true;
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_DIVIDE_clicked()
{
    a = ui->lineEdit->text().toDouble();
        divide = true;
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_EQUALS_clicked()
{
    b = ui->lineEdit->text().toDouble();
    if(plus==true){
        c = a + b ;
        ui->lineEdit->setText(QString::number(c));
        }

    if(minus==true){
        c = a - b ;
        ui->lineEdit->setText(QString::number(c));
        }

    if(time==true){
        c = a * b ;
        ui->lineEdit->setText(QString::number(c));
        }

    if(divide==true){
        c = a / b ;
        ui->lineEdit->setText(QString::number(c));
    }


    if(qpow==true){
        c = pow(a, b);
        ui->lineEdit->setText(QString::number(c));
    }

    plus = minus = time = divide = qpow = false;

}


void MainWindow::on_pushButton_SQUARE_clicked()
{
    a = ui->lineEdit->text().toDouble();
    c = a*a;
        ui->lineEdit->setText(QString::number(c));
}


void MainWindow::on_pushButton_SQRT_clicked()
{
    a = ui->lineEdit->text().toDouble();
    c = sqrt(a);
        ui->lineEdit->setText(QString::number(c));
}


void MainWindow::on_pushButton_NEGATIVE_clicked()
{
    if(ui->lineEdit->text().contains("-")){
        ui->lineEdit->setCursorPosition(1);
        ui->lineEdit->backspace();
    }

    else {
        ui->lineEdit->setText("-" + ui->lineEdit->text() );
    }
}
