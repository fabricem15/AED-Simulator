#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // init aed
//     AED* aed = new AED();
    batteryHealth = 100;

    // check timer here with the elapsed time

    // aed energy selection from the


    timer = new QTimer(this);

    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
    timer->start(1000);

    ui->progressBar->setValue(batteryHealth);
    connect(this, &MainWindow::updateBattery, ui->progressBar, &QProgressBar::setValue);


}


void MainWindow::updateTime(){
    //time++;
    timeElapsed++;

    QString text;

    int minutes = timeElapsed / 60;

    int seconds = timeElapsed % 60;

    text = minutes + ": " + seconds;

//    text.append(timeElapsed);
    text.setNum(timeElapsed);
    ui->elapsedTime->setText(text);

    batteryHealth = batteryHealth - 10;

//    emit (updateBattery(batteryHealth));

}

void MainWindow::updateShockCount(){


}



MainWindow::~MainWindow()
{
    delete ui;
}

