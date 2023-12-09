#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <QButtonGroup>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    selectedScenario = -1;

    battery = new Battery();
    electrodes = new Electrodes();
    patient = new Patient();

    aed = new AED();
    aed->setBattery(battery);
    aed->setElectrodes(electrodes);
    aed->setPatient(patient);


    timer = new QTimer(this);


    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);

    connect(battery, &Battery::batteryDecreased, this, &MainWindow::setBattery);


    connect(ui->powerBtn, &QPushButton::clicked, [this](){

        if (selectedScenario >= 0){
            this->aed->switchPower();
            this->switchPowerBtn();
        }
        else {
            cout << "Please select a scenario before turning the AED on." << endl;
        }

    });
//    connect(ui->powerBtn, &QPushButton::clicked, this, &MainWindow::switchPowerBtn);
    connect(aed, &AED::voicePrompt, this, &MainWindow::setVoicePrompt);
    connect(aed, &AED::lightNumberChanged, this, &MainWindow::turnOffPreviousLight);


    connect(electrodes, &Electrodes::attachPads, aed, &AED::analyzeRhythm);

    connect(aed, &AED::cprDelivered, patient, &Patient::handleCPR);

    connect(ui->placeElectrodes, &QPushButton::clicked, aed->getElectrodes(), &Electrodes::attachPads);
    connect(ui->shockButton, &QPushButton::clicked, aed, &AED::sendElectricShock);
    connect(patient, &Patient::newRhythm, this, &MainWindow::setGraph);
    

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



    QButtonGroup* radioButtons = new QButtonGroup();

    cout <<  ui->groupBox->children().size();
    for (int i = 0; i < ui->groupBox->children().size(); i++){
        radioButtons->addButton( qobject_cast<QRadioButton*>(ui->groupBox->children().at(i)), i);
    }


    connect(radioButtons, &QButtonGroup::idClicked, [this] (int id){
        this->selectedScenario = id;
    });
\
    // run scenario button
    connect(ui->run, &QPushButton::clicked, [this] (){

        this->runScenario(selectedScenario, patient);

    });

    // reset button
    connect(ui->reset, &QPushButton::clicked, [this] (){

    });


    connect(ui->doCPR, &QPushButton::clicked, aed, &AED::cprStarted);

    connect(aed, &AED::analyzing, [this](){
       this->ui->cprSlider->setValue(0);
    });


}

void MainWindow::runScenario(int scenario, Patient* p){


    cout << scenario  << " scenario " <<endl;
    if (scenario == 0){

        patient->setAge(55);
        patient->setWeight(75);

        patient->setBpm(30);


    }
    else if (scenario == 1){

    }
    else if(scenario == 2){

    }
    else if (scenario==3){

    }
    else {

    }

}




void MainWindow::setGraph(string url){
    QPixmap pixmap(QString::fromStdString(url));
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

