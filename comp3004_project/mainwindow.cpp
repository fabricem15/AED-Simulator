#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // init aed
    aed = new AED();
    batteryHealth = 100;

    // check timer here with the elapsed time

    // aed energy selection from the


    timer = new QTimer(this);

    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
    timer->start(1000);

    ui->progressBar->setValue(batteryHealth);
    connect(this, &MainWindow::updateBattery, ui->progressBar, &QProgressBar::setValue);
    connect(ui->powerBtn, &QPushButton::clicked, aed, &AED::switchPower);
    connect(aed, &AED::voicePrompt, ui->voicePrompt, &QLabel::setText);

//    connect(ui->powerBtn, &QPushButton::clicked, this, &MainWindow::changePowerBtn);


//    ui->testFailed->hide();

//    QLabel *labels[];


}


void MainWindow::changePowerBtn(){
//    QPixmap pixmap(":photos/power-on-red.png");
    QIcon icon (":/photos/power-on-red.png");

    ui->powerBtn->setIcon(icon);
    ui->powerBtn->setIconSize(QSize(40,40));

}


void MainWindow::setVoicePrompt(string text){

    ui->voicePrompt->setText(QString::fromStdString(text));

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

