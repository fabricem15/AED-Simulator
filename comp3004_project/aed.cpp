#include "aed.h"

AED::AED()
{
    isOn = false;
    lightNumber =0;
    battery = new Battery();
    electrodes = new Electrodes();

    connect(electrodes, &Electrodes::attachPads, this, &AED::electrodesON);

}


void AED::checkResponsiveness(){
    emit voicePrompt("CHECK RESPONSIVENESS");
    QTimer::singleShot(5000, this, &AED::callHelp);
}
void AED::callHelp(){
    emit lightNumberChanged(lightNumber);
    lightNumber++;
    emit voicePrompt("CALL FOR HELP");
    QTimer::singleShot(5000, this, &AED::attachPads);
}
void AED::attachPads(){
    emit lightNumberChanged(lightNumber);
    lightNumber++;

    emit voicePrompt("ATTACH PADS");

    // call this when the electrodes have been placed

    //QTimer::singleShot(5000, this, &AED::analyzeRhythm);
}
void AED::analyzeRhythm(){
    emit lightNumberChanged(lightNumber);
    lightNumber++;
    // if shockable
    emit voicePrompt("ANALYZING");
   QTimer::singleShot(2000, this, &AED::sendElectricShock);
}






void AED::sendElectricShock(){

    // if AED is on and shockable rhythm is detected
    // in the function to handle button click, make sure that it only activates after the machine has been turned on
    if (!isTurnedOn())
        return;


    emit lightNumberChanged(lightNumber);
    lightNumber++;
    emit voicePrompt("STAND CLEAR");
    // get rhythm from the electrodes
    if (isTurnedOn() && isShockableRhythm(218))

    {
        //check if the electrode pads are attached
        // emit signal to electrode to deliver shock to the victim,
        // the patient class should then receive the shock and improve the condition by a factor of the energy level
        // decrease battery here
        //battery->decreaseBattery();
    }

//    energyLevel += 0;

    // pass the energy level to the electrode class

    // change this when the user actually presses the shock button
    shockCount++;
    shockCountIncreased(shockCount);

}


bool AED::selfTest(){

    // check the batteries
    bool unitOk = true;

    unitOk = battery->selfTest();

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
    // emit a success signal as well that will turn activate the proper icon
    // if it fails display unit failed and do not proceed with the other voice prompts

//    if (0){
//        voicePrompt("UNIT OK");
//    }



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

void AED::electrodesON(){

    analyzeRhythm();
    //QTimer::singleShot(5000, this, &AED::analyzeRhythm);
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

