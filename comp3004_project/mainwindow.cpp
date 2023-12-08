#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // init all objects I think is the best way to track them or

    battery = new Battery();
    electrodes = new Electrodes();
    patient = new Patient();

    aed = new AED();
    aed->setBattery(battery);
    aed->setElectrodes(electrodes);
    aed->setPatient(patient);



    // elapsed time timer
    timer = new QTimer(this);


    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);


    connect(battery, &Battery::batteryDecreased, this, &MainWindow::setBattery);




    connect(ui->powerBtn, &QPushButton::clicked, aed, &AED::switchPower);
    connect(ui->powerBtn, &QPushButton::clicked, this, &MainWindow::switchPowerBtn);
    connect(aed, &AED::voicePrompt, this, &MainWindow::setVoicePrompt);
    connect(aed, &AED::lightNumberChanged, this, &MainWindow::turnOffPreviousLight);


    connect(electrodes, &Electrodes::attachPads, aed, &AED::analyzeRhythm);

    connect(aed, &AED::cprDelivered, patient, &Patient::handleCPR);

    connect(ui->placeElectrodes, &QPushButton::clicked, aed->getElectrodes(), &Electrodes::attachPads);


    connect(ui->shockButton, &QPushButton::clicked, aed, &AED::sendElectricShock);

    connect(patient, &Patient::newRhythm, this, &MainWindow::setGraph);
    
//    connect(electrodes, &Electrodes::shockPatient, patient, &Patient::handleShock);

    //connect(ui->cpr, &QPushButton::clicked, this, &MainWindow::startCPR);

    //connect(ui->shockButton, &QPushButton::clicked, aed, &AED::sendElectricShock);
    

    connect(ui->cprSlider, &QSlider::valueChanged, this, &MainWindow::checkCompressionDepth);

    ui->testPassed->hide();
    ui->testFailed->hide();
    ui->shockCount->hide();
    ui->shockLbl->hide();

    connect(aed, &AED::selfTestPassed, this, &MainWindow::showStatusIndicator);


    for (int i = 0; i < 6; i++){ // set up indicator lights
        char s[8];
        sprintf(s, "light%d", i+1);
        QLabel* lbl= ui->aedWidget->findChild<QLabel*>(s);
        indicatorLabels.push_back(lbl);
    }


    // shock count update
    connect(aed, &AED::shockCountIncreased, this, &MainWindow::updateShockCount);



    connect(ui->doCPR, &QPushButton::pressed, [&, this](){
       this->ui->cprSlider->setValue(3);
    });
//    ui->testFailed->hide();


}



void MainWindow::checkCompressionDepth(int depth){

//    if (cprStage == false)
//        return;

    if (depth < 2){
        setVoicePrompt("PUSH HARDER");
    }
    else {
     setVoicePrompt("CONTINUE CPR");
    }
}



void MainWindow::setGraph(string url){

    QPixmap pixmap(QString::fromStdString(url));

    cout << url << " pixmap url" << endl;

    ui->graph->setPixmap(pixmap);
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

    char s[4];
    cout << shockCount << endl;
    sprintf(s, "%02d", shockCount);

    cout << s << endl;
    cout << "did not get here" << endl;
    ui->shockCount->setText(s);
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

