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

    ui->testPassed->hide();
    ui->testFailed->hide();
    ui->shockCount->hide();
    ui->shockLbl->hide();

    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
    connect(battery, &Battery::batteryChanged, this, &MainWindow::setBattery);
    connect(battery, &Battery::lowBattery, aed, &AED::handleLowBattery);
    connect(ui->replaceBatteries, &QPushButton::clicked, aed, &AED::replaceBattery);
    connect(aed, &AED::voicePrompt, this, &MainWindow::setVoicePrompt);
    connect(aed, &AED::lightNumberChanged, this, &MainWindow::turnOffPreviousLight);
    connect(aed, &AED::cprDelivered, patient, &Patient::handleCPR);
    connect(patient, &Patient::newRhythm, this, &MainWindow::setGraph);
    connect(aed, &AED::selfTestPassed, this, &MainWindow::showStatusIndicator);
    connect(aed, &AED::shockCountIncreased, this, &MainWindow::updateShockCount);

    // place electrodes connect
    connect(ui->placeElectrodes, &QPushButton::clicked, [this](){
       if (aed->getActiveLightIndex() == 2){// ensure that pads can only be attached once and during the appropriate stage
           electrodes->attachPads();

           if (electrodes->getPlacement() == true){
               QTimer::singleShot(1000, [this](){
                   setVoicePrompt("BAD PLACEMENT.\nPLEASE ATTACH ELECTRODES.");
               });
               electrodes->setBadPlacement(false);
           }
           else {
               if (patient->isAdult())
                   setVoicePrompt("ADULT PADS");
               else
                   setVoicePrompt("CHILD PADS");
               QTimer::singleShot(2000, [this](){ aed->analyzeRhythm(); });
           }
       }

    });

    connect(ui->powerBtn, &QPushButton::clicked, [this](){

        if (selectedScenario >= 0){

            this->aed->switchPower();
            this->switchPowerBtn();
        }
        else {
            ui->errorLbl->setText("Please select a scenario before turning the AED on.");
            ui->errorLbl->setStyleSheet("color:red");
        }
    });

    connect(ui->shockButton, &QPushButton::clicked, [this](){
       if (aed->getActiveLightIndex() == 4){ // only handle click if the AED is ready to shock
           aed->sendElectricShock();
       }
    });


    connect(ui->doCPR, &QPushButton::clicked, [this] (){
        if (aed->getActiveLightIndex() == 5){
            this->ui->cprSlider->setValue(3);
            aed->cprStarted();
        }

    });

    connect(ui->cprSlider, &QSlider::valueChanged, [this] (int value){
         if (aed->getActiveLightIndex() == 5 && value < 2){
             setVoicePrompt("PUSH HARDER");
         }
         else if (aed->getActiveLightIndex() == 5 && value >= 2){
             setVoicePrompt("GOOD COMPRESSIONS");
         }
    });
    connect(aed, &AED::analyzing, [this](){this->ui->cprSlider->setValue(0);});


    for (int i = 0; i < 6; i++){ // set up indicator lights
        char s[8];
        sprintf(s, "light%d", i+1);
        QLabel* lbl= ui->aedWidget->findChild<QLabel*>(s);
        indicatorLabels.push_back(lbl);
    }


    QButtonGroup* radioButtons = new QButtonGroup();
    for (int i = 0; i < ui->scenarioGroupBox->children().size(); i++){
        radioButtons->addButton( qobject_cast<QRadioButton*>(ui->scenarioGroupBox->children().at(i)), i);
    }

    connect(radioButtons, &QButtonGroup::idClicked, [this, radioButtons] (int id){
        if (!aed->isTurnedOn()){

            stringstream ss;
            ss << "Scenario: " << radioButtons->button(id)->text().toStdString();

            this->selectedScenario = id;
            this->runScenario(selectedScenario);
            ui->scenarioLbl->setText(QString::fromStdString(ss.str()));

            ui->errorLbl->hide();
        }

    });
\
}

void MainWindow::runScenario(int scenario){

    if (scenario == 0){ // adult with VF
        aed->setBatteryDecreaseAmount(10);
        battery->setBattery(100);
        patient->setAge(55);
        patient->setWeight(75);
        patient->setBpm(30);
        patient->setSurvive(true);
        electrodes->setBadPlacement(false);
    }
    else if (scenario == 1){ // child with VT

        aed->setBatteryDecreaseAmount(5);
        battery->setBattery(100);
        patient->setAge(3);
        patient->setWeight(15);
        patient->setBpm(230);
        patient->setSurvive(true);
        electrodes->setBadPlacement(false);
    }
    else if(scenario == 2){ // asystole patient not improving

        aed->setBatteryDecreaseAmount(10);
        battery->setBattery(100);
        patient->setAge(40);
        patient->setWeight(75);
        patient->setBpm(210);
        patient->setSurvive(false);
        electrodes->setBadPlacement(false);

    }
    else if (scenario==3){ // battery replacement
        battery->setBattery(100);
        aed->setBatteryDecreaseAmount(70);
        patient->setAge(89);
        patient->setWeight(110);
        patient->setBpm(20);
        patient->setSurvive(true);
        electrodes->setBadPlacement(false);

    }
    else if (scenario == 4){ // electrode misplaced

        battery->setBattery(100);

        aed->setBatteryDecreaseAmount(10);
        patient->setAge(89);
        patient->setWeight(130);
        patient->setBpm(210);
        patient->setSurvive(true);
        electrodes->setBadPlacement(true);
    }
    else if (scenario == 5){ // unit failed

        battery->setBattery(15);
        aed->setBatteryDecreaseAmount(10);
        patient->setAge(89);
        patient->setWeight(110);
        patient->setBpm(20);
        patient->setSurvive(true);
        electrodes->setBadPlacement(false);
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

    if (aed->isCharged() && aed->isTurnedOn()){
        if (timeElapsed %2 == 0)
            indicatorLabels[aed->getActiveLightIndex()]->setStyleSheet("background-color:grey;border-radius:8px;");
        else
            indicatorLabels[aed->getActiveLightIndex()]->setStyleSheet("background-color:orange;border-radius:8px;");
    }

}

void MainWindow::updateShockCount(int shockCount){
    char s[4];
    sprintf(s, "%02d", shockCount);
    ui->shockCount->setText(s);
}

void MainWindow::turnOffPreviousLight(int index){
    indicatorLabels[index]->setStyleSheet("background-color:grey;border-radius:8px;");
}

void MainWindow::showStatusIndicator(bool passedTest){

    if (passedTest){
        ui->testPassed->show();
        ui->testFailed->hide();
        timer->start(1000);
        ui->shockCount->show();
        ui->shockLbl->show();
        ui->elapsedTime->show();
        setBattery(battery->getCharge());
    }
    else {
        ui->testFailed->show();
    }
}

void MainWindow::switchPowerBtn(){
    if (aed->isTurnedOn())
    {
         ui->powerBtn->setStyleSheet("background-color:green;border-radius:20px");
         aed->blockSignals(false);
         ui->voicePrompt->show();

    }

    else {
         timer->stop();
         ui->powerBtn->setStyleSheet("background-color:red;border-radius:20px");
         ui->shockCount->setText("00");
         ui->shockCount->hide();
         ui->shockLbl->hide();
         ui->testFailed->hide();
         ui->testPassed->hide();


         ui->elapsedTime->hide();
         ui->elapsedTime->setText(QString::fromStdString("00: 00"));

         ui->graph->clear();


         turnOffPreviousLight(aed->getActiveLightIndex());

         ui->voicePrompt->setText("");
         ui->voicePrompt->hide();
         timeElapsed = 0;
         setBattery(0);

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
