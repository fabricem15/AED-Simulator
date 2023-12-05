#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // init aed
     AED* aed = new AED();
    batteryHealth = 100;

    // check timer here with the elapsed time

    // aed energy selection from the


    timer = new QTimer(this);

    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
    timer->start(1000);

    ui->progressBar->setValue(batteryHealth);
    connect(this, &MainWindow::updateBattery, ui->progressBar, &QProgressBar::setValue);
    connect(ui->powerBtn, &QPushButton::clicked, aed, &AED::switchPower);


    ui->testFailed->hide();

//    QLabel *labels[];


}




void MainWindow::updateTime(){
    timeElapsed++;


    int minutes = timeElapsed / 60;
    int seconds = timeElapsed % 60;

    char s[8];

    sprintf(s, "%02d: %02d", minutes, seconds);

    ui->elapsedTime->setText(s);

    batteryHealth = batteryHealth - 10;

//    emit (updateBattery(batteryHealth));

}

void MainWindow::updateShockCount(){


}



MainWindow::~MainWindow()
{
    delete ui;
}

