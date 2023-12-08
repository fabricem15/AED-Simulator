#include "aed.h"

AED::AED()
{
    isOn = false;
    lightNumber =0;
//    battery = new Battery();
//    electrodes = new Electrodes();

    shockCount = 0;

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

    // call a function to display the graph and show the proper voice prompt


    // process rhythm and decide if appropriate to shock, regardless go to do cpr

    if (patient->isShockableHeartRate())
    {

        cout << "shockable rhythm: " << patient->getRhythm() << endl;
        //check if the electrode pads are attached
        // emit signal to electrode to deliver shock to the victim,
        // the patient class should then receive the shock and improve the condition by a factor of the energy level
        // decrease battery here
        //battery->decreaseBattery();

        QTimer::singleShot(2000, [this](){

            emit this->voicePrompt("SHOCK ADVISED");
            patient->setGraph(patient->getRhythm());
        });

        QTimer::singleShot(4000, this, &AED::readyToShock);
    }
    else {

        QTimer::singleShot(1000, [this](){ emit this->voicePrompt("NO SHOCK ADVISED, DO CPR");});
        emit lightNumberChanged(lightNumber);
        lightNumber=5;

        // end the simulation here
        cout << "NONshockable rhythm: " << patient->getRhythm() << endl;


        //QTimer::singleShot(4000, this, &AED::doCPR);
    }


}


void AED::doCPR(){
    emit lightNumberChanged(lightNumber);
    lightNumber=5;

    emit voicePrompt("START CPR");

    patient->handleCPR();
   // cout << "patient rhythm: " << patient->getRhythm() << endl;


    QTimer::singleShot(3000, this, &AED::analyzeRhythm);


}




void AED::readyToShock(){
    emit lightNumberChanged(lightNumber);
    lightNumber++;
    emit voicePrompt("PRESS BUTTON TO DELIVER SHOCK");
}


void AED::sendElectricShock(){

    // emit a signal to the electrodes

     electrodes->shockPatient();

    // improve patient condition

     patient->handleShock();


    // decrease battery

    if (electrodes->getPatientType() == "adult"){
        battery->decreaseBattery(10);
    }
    else {
        battery->decreaseBattery(5);
    }


    shockCount++;
    shockCountIncreased(shockCount);


    cout << "got here!!" << endl;


    QTimer::singleShot(1000, [this](){
            emit this->voicePrompt("SHOCK DELIVERED");
            QTimer::singleShot(3000, this, &AED::doCPR);

    });
}



bool AED::selfTest(){

    // check the batteries

    if (battery->selfTest()){

        emit voicePrompt("UNIT OK");
        emit selfTestPassed(true);
         QTimer::singleShot(2000, this, &AED::checkResponsiveness);
//       checkResponsiveness();
    }
    else {
        emit selfTestPassed(false);
        emit voicePrompt("UNIT FAILED");
    }

    return true;
}

void AED::switchPower(){
    isOn = !isOn;
    if (isOn){
        // we can use a single shot timer to delay execution and allow time to show indicator light flashing and changing of steps and
        QTimer::singleShot(1000, this, &AED::selfTest);

    }
    else { // reset variables on power off
        shockCount = 0;

    }

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
bool AED::isShockableRhythm(int rhythm){
    return rhythm < 70 || rhythm > 150; // change this later
}

bool AED::isTurnedOn(){
    return isOn;
}

