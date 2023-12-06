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
    timer->start(1000);

//    ui->progressBar->setValue(batteryHealth);
//    connect(this, &MainWindow::setBattery, ui->progressBar, &QProgressBar::setValue);// connect the battery update from the aed's battery object to the above slot for the progress bar

    connect(ui->powerBtn, &QPushButton::clicked, aed, &AED::switchPower);
    connect(aed, &AED::voicePrompt, this, &MainWindow::setVoicePrompt);
    connect(aed, &AED::lightNumberChanged, this, &MainWindow::turnOffPreviousLight);





    for (int i = 0; i < 5; i++){
        char s[8];
        sprintf(s, "light%d", i+1);

//        cout << s << endl;

        QLabel* lbl= ui->aedWidget->findChild<QLabel*>(s);

        cout << lbl->objectName().toStdString() << endl;
        indicatorLabels.push_back(lbl);
    }

//    connect(ui->powerBtn, &QPushButton::clicked, this, &MainWindow::changePowerBtn);


//    ui->testFailed->hide();



}


void MainWindow::changePowerBtn(){
//    QPixmap pixmap(":photos/power-on-red.png");
    QIcon icon (":/photos/power-on-red.png");

    ui->powerBtn->setIcon(icon);
    ui->powerBtn->setIconSize(QSize(40,40));

}

void MainWindow::setBattery(int charge){
    ui->battery->setValue(charge);
}

void MainWindow::setVoicePrompt(string text){
    ui->voicePrompt->setText(QString::fromStdString(text));
    //indicatorLabels[0]->setStyleSheet("background-color:grey;border-radius:8px;");
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

void MainWindow::updateShockCount(){
    ui->shockCount->setText("00");
}

void MainWindow::turnOffPreviousLight(int index){
    indicatorLabels[index]->setStyleSheet("background-color:grey;border-radius:8px;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

