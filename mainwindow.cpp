#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include <string>
#include "serial.h"
#include "main.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serial = new Serial("/dev/ttyACM1",1);
    serial2 = new Serial("/dev/ttyACM1",2);
    ui->Lamp1_aan->setVisible(true);
    ui->Lamp1_uit->setVisible(false);
    ui->lamp2_aan->setVisible(true);
    ui->lamp2_uit->setVisible(false);
    ui->label1_aan->setVisible(false);
    ui->label1_uit->setVisible(true);
    ui->label2_aan->setVisible(false);
    ui->label2_uit->setVisible(true);
}

void MainWindow::lichtenUit()
{
    serial->turnOffLight();
    ui->Lamp1_aan->setVisible(true);
    ui->Lamp1_uit->setVisible(false);
    ui->label1_aan->setVisible(false);
    ui->label1_uit->setVisible(true);
    serial2->turnOffLight();
    ui->lamp2_aan->setVisible(true);
    ui->lamp2_uit->setVisible(false);
    ui->label2_aan->setVisible(false);
    ui->label2_uit->setVisible(true);
}

void MainWindow::lichtAan()
{
    serial->turnOnLight();
    ui->Lamp1_aan->setVisible(false);
    ui->Lamp1_uit->setVisible(true);
    ui->label1_aan->setVisible(true);
    ui->label1_uit->setVisible(false);
    serial2->turnOnLight();
    ui->lamp2_aan->setVisible(false);
    ui->lamp2_uit->setVisible(true);
    ui->label2_aan->setVisible(true);
    ui->label2_uit->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Lamp1_aan_clicked()
{
    serial->turnOnLight();
    ui->Lamp1_aan->setVisible(false);
    ui->Lamp1_uit->setVisible(true);
    ui->label1_aan->setVisible(true);
    ui->label1_uit->setVisible(false);
}

void MainWindow::on_Lamp1_uit_clicked()
{
    serial->turnOffLight();
    ui->Lamp1_aan->setVisible(true);
    ui->Lamp1_uit->setVisible(false);
    ui->label1_aan->setVisible(false);
    ui->label1_uit->setVisible(true);
}

void MainWindow::on_lamp2_aan_clicked()
{
    serial2->turnOnLight();
    ui->lamp2_aan->setVisible(false);
    ui->lamp2_uit->setVisible(true);
    ui->label2_aan->setVisible(true);
    ui->label2_uit->setVisible(false);
}

void MainWindow::on_lamp2_uit_clicked()
{
    serial2->turnOffLight();
    ui->lamp2_aan->setVisible(true);
    ui->lamp2_uit->setVisible(false);
    ui->label2_aan->setVisible(false);
    ui->label2_uit->setVisible(true);
}

void MainWindow::on_pushButton_clicked()
{
    QFont f( "Sans serif", 9, true);
    f.setItalic(true);
    f.setBold(true);

    string lamp_aan = ui->textEdit->toPlainText().toLocal8Bit().constData();
    ui->textEdit->setFont(f);
    lampAan = atoi(lamp_aan.c_str());
    string Minuten1 = ui->textEdit_3->toPlainText().toLocal8Bit().constData();
    ui->textEdit_3->setFont(f);
    minuten1 = atoi(Minuten1.c_str());
    string lamp_uit = ui->textEdit_2->toPlainText().toLocal8Bit().constData();
    ui->textEdit_2->setFont(f);
    lampUit = atoi(lamp_uit.c_str());
    string Minuten2 = ui->textEdit_4->toPlainText().toLocal8Bit().constData();
    ui->textEdit_4->setFont(f);
    minuten2 = atoi(Minuten2.c_str());
    donderdag = true;


}
