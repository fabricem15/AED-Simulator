#include "aed.h"

AED::AED()
{
    isOn = false;
    lightNumber =0;
    shockCount = 0;
    batteryDecreaseAmount = 0;
    charged = true;
}

AED::AED(Battery* battery, Electrodes* el, Patient* p){
    this->battery = battery;
    electrodes = el;
    patient = p;
}

void AED::nextStep(){

    if (!isOn){
        return;
    }

    if (lightNumber == 0){
        callHelp();
    }
    else if (lightNumber == 1){
        attachPads();
    }
    else if (lightNumber == 3){
        readyToShock();
    }
    else if (lightNumber == 5){
        analyzeRhythm();
    }


}

void AED::checkResponsiveness(){
    emit voicePrompt("CHECK RESPONSIVENESS");

    QTimer::singleShot(4000, this, &AED::nextStep);
}

void AED::callHelp(){

    emit lightNumberChanged(lightNumber);
    lightNumber++;
    emit voicePrompt("CALL FOR HELP");
    QTimer::singleShot(4000, this, &AED::nextStep);
}

void AED::attachPads(){

    emit lightNumberChanged(lightNumber);
    lightNumber++;

    emit voicePrompt("ATTACH PADS");
}

void AED::analyzeRhythm(){
    emit lightNumberChanged(lightNumber);


    lightNumber = 3;


    emit voicePrompt("DON'T TOUCH PATIENT, ANALYZING");
    emit analyzing();

    if (patient->isShockableHeartRate())
    {
        QTimer::singleShot(2000, [this](){

            emit this->voicePrompt("SHOCK ADVISED");
            patient->setGraph(patient->getRhythm());
        });

        QTimer::singleShot(4000, this, &AED::nextStep);
    }
    else {

        QTimer::singleShot(1000, [this](){ emit this->voicePrompt("NO SHOCK ADVISED,\n DO CPR");});
        emit lightNumberChanged(lightNumber);
        lightNumber=5;


    }
}


void AED::cprStarted(){

    emit voicePrompt("GOOD COMPRESSIONS");
    patient->handleCPR();

    QTimer::singleShot(10000, this, &AED::nextStep); // test last here
}


void AED::readyToShock(){
    emit lightNumberChanged(lightNumber);
    lightNumber++;
    emit voicePrompt("PRESS BUTTON TO DELIVER SHOCK");
}


void AED::sendElectricShock(){

    if (!patient->isShockableHeartRate())
        return;

     electrodes->shockPatient();

     patient->handleShock();

     shockCount++;
     shockCountIncreased(shockCount);

     battery->decreaseBattery(batteryDecreaseAmount);
    if (battery->getCharge() <= 20){
        handleLowBattery();
        return;
    }


    emit this->voicePrompt("SHOCK DELIVERED");
    QTimer::singleShot(3000, [this](){
        doCPR();
    });
}


void AED::doCPR(){
    emit lightNumberChanged(lightNumber);
    lightNumber=5;

    emit voicePrompt("START CPR");

}


bool AED::selfTest(){
    if (battery->selfTest()){

        emit voicePrompt("UNIT OK");
        emit selfTestPassed(true);
        QTimer::singleShot(2000, this, &AED::checkResponsiveness);
        return true;
    }
    else {
        emit selfTestPassed(false);
        emit voicePrompt("UNIT FAILED");
        charged = false;

        handleLowBattery();

        return false;
    }

}

void AED::switchPower(){
    isOn = !isOn;


    if (isOn){
        QTimer::singleShot(1000, this, &AED::selfTest);

    }
    else { // reset variables on power off
        shockCount = 0;
        emit lightNumberChanged(lightNumber);
        lightNumber = 0;
        batteryDecreaseAmount = 0;
        charged = true;
    }

}


void AED::handleLowBattery(){
    emit voicePrompt("BATTERY CRITICALLY LOW");

    QTimer::singleShot(2000, [this](){
        emit voicePrompt("REPLACE BATTERIES");
    });

    emit lightNumberChanged(lightNumber);
    charged = false;

}


void AED::replaceBattery(){

    if (charged)
        return;


    battery->replaceBattery();
    charged = true;

    if (lightNumber == 0){ // redo the self test after replacing the battery
        selfTest();

    }
    else {
        emit voicePrompt("BATTERIES REPLACED");
        QTimer::singleShot(2000, this, &AED::doCPR);
    }
}


bool AED::isCharged(){
    return charged;
}

void AED::setBatteryDecreaseAmount(int amount){
   batteryDecreaseAmount = amount;
}

void AED::setPatient(Patient *p){
    patient = p;
}

void AED::setElectrodes(Electrodes* e){
    electrodes = e;
}

void AED::setBattery(Battery* b){
    battery = b;
}

Electrodes* AED::getElectrodes(){
    return electrodes;
}
Battery* AED::getBattery(){
    return battery;
}
int AED::getActiveLightIndex(){
    return lightNumber;
}
int AED::getShockCount(){
    return shockCount;
}

bool AED::isTurnedOn(){
    return isOn;
}
