#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    aed = new AED();


    // elapsed time timer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);


//    ui->progressBar->setValue(batteryHealth);
//    connect(this, &MainWindow::setBattery, ui->progressBar, &QProgressBar::setValue);// connect the battery update from the aed's battery object to the above slot for the progress bar

    connect(ui->powerBtn, &QPushButton::clicked, aed, &AED::switchPower);
    connect(ui->powerBtn, &QPushButton::clicked, this, &MainWindow::switchPowerBtn);
    connect(aed, &AED::voicePrompt, this, &MainWindow::setVoicePrompt);
    connect(aed, &AED::lightNumberChanged, this, &MainWindow::turnOffPreviousLight);


    connect(ui->placeElectrodes, &QPushButton::clicked, aed->getElectrodes(), &Electrodes::attachPads);


     ui->testPassed->hide();
     ui->testFailed->hide();
     ui->shockCount->hide();
     ui->shockLbl->hide();

     connect(aed, &AED::selfTestPassed, this, &MainWindow::showStatusIndicator);


    for (int i = 0; i < 5; i++){ // set up indicator lights
        char s[8];
        sprintf(s, "light%d", i+1);
        QLabel* lbl= ui->aedWidget->findChild<QLabel*>(s);
        indicatorLabels.push_back(lbl);
    }


    // shock count update
    connect(aed, &AED::shockCountIncreased, this, &MainWindow::updateShockCount);

//    ui->testFailed->hide();



}



void MainWindow::setBattery(int charge){
    ui->battery->setValue(charge);
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

    if (timeElapsed %2 == 0)
        indicatorLabels[aed->getActiveLightIndex()]->setStyleSheet("background-color:grey;border-radius:8px;");
    else
        indicatorLabels[aed->getActiveLightIndex()]->setStyleSheet("background-color:orange;border-radius:8px;");

}

void MainWindow::updateShockCount(int shockCount){

    char s[3];
    sprintf(s, "%02d", shockCount);
    ui->shockCount->setText(s); // change this to the actual shockCount
}

void MainWindow::turnOffPreviousLight(int index){
    indicatorLabels[index]->setStyleSheet("background-color:grey;border-radius:8px;");
}

void MainWindow::showStatusIndicator(bool passedTest){
    if (passedTest){
        ui->testPassed->show();
    }
    else {
        ui->testFailed->show();
    }
}

void MainWindow::switchPowerBtn(){
    ui->powerBtn->setStyleSheet("background-color:green;border-radius:20px");
    timer->start(1000);
    ui->shockCount->show();
    ui->shockLbl->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

