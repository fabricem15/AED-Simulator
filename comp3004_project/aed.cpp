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


void AED::checkResponsiveness(){
    emit voicePrompt("CHECK RESPONSIVENESS");
    // make it 5000 after
    QTimer::singleShot(2000, this, &AED::callHelp);
}
void AED::callHelp(){
    emit lightNumberChanged(lightNumber);
    lightNumber++;
    emit voicePrompt("CALL FOR HELP");
    QTimer::singleShot(2000, this, &AED::attachPads);
}
void AED::attachPads(){
    emit lightNumberChanged(lightNumber);
    lightNumber++;

    emit voicePrompt("ATTACH PADS");

}
void AED::analyzeRhythm(){
    emit lightNumberChanged(lightNumber);


    cout << lightNumber << " as light number" << endl;

    if (shockCount == 0)
    lightNumber++;
    else
        lightNumber = 3;


    emit voicePrompt("DON'T TOUCH PATIENT, ANALYZING");

    emit analyzing();
    // process rhythm and decide if appropriate to shock, regardless go to do cpr

    if (patient->isShockableHeartRate())
    {

        cout << "shockable rhythm: " << patient->getRhythm() << endl;

        QTimer::singleShot(2000, [this](){

            emit this->voicePrompt("SHOCK ADVISED");
            patient->setGraph(patient->getRhythm());
        });

        QTimer::singleShot(4000, this, &AED::readyToShock);
    }
    else {

        QTimer::singleShot(1000, [this](){ emit this->voicePrompt("NO SHOCK ADVISED,\n DO CPR");});
        emit lightNumberChanged(lightNumber);
        lightNumber=5;

        // end the simulation here
        cout << "NONshockable rhythm: " << patient->getRhythm() << endl;
    }

}


void AED::doCPR(){
    emit lightNumberChanged(lightNumber);
    lightNumber=5;

    emit voicePrompt("START CPR");
//    QTimer::singleShot(3000, this, &AED::analyzeRhythm);

}

void AED::cprStarted(){

    emit voicePrompt("GOOD COMPRESSIONS");
    patient->handleCPR();

    QTimer::singleShot(10000, this, &AED::analyzeRhythm);
}


void AED::readyToShock(){
    emit lightNumberChanged(lightNumber);
    lightNumber++;
    emit voicePrompt("PRESS BUTTON TO DELIVER SHOCK");
}


void AED::sendElectricShock(){

    // handle accidental shocks when the patient is healthy
    if (!patient->isShockableHeartRate())
        return;

    // emit a signal to the electrodes
     electrodes->shockPatient();

     // improve patient condition
     patient->handleShock();

     shockCount++;
     shockCountIncreased(shockCount);

    // decrease battery
    if (electrodes->getPatientType() == "adult"){
        battery->decreaseBattery(batteryDecreaseAmount);
    }
    else {
        battery->decreaseBattery(5);
    }


    // check battery
    if (battery->getCharge() <= 20){
        handleLowBattery();
        return;
    }





    emit this->voicePrompt("SHOCK DELIVERED");
    QTimer::singleShot(3000, [this](){
        doCPR();
//            QTimer::singleShot(2000, this, &AED::doCPR);
    });
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

        // prompt to replace batteries
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
    }

}


void AED::handleLowBattery(){
    cout << "battery critically low!!!" << endl;
    emit voicePrompt("BATTERY CRITICALLY LOW");

    QTimer::singleShot(2000, [this](){
        emit voicePrompt("REPLACE BATTERIES");
    });

    emit lightNumberChanged(lightNumber);
    charged = false;
    //lightNumber = -1;

}


void AED::replaceBattery(){
    if (charged)
        return;



    battery->replaceBattery();
    charged = true;
    if (lightNumber == 0){
        // start sequence

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

