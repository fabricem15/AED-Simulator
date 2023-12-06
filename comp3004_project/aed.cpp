#include "aed.h"

AED::AED()
{
    isOn = false;
    lightNumber =0;
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
    //if (0)// check if the pads are actually attached, check if the button has been clicked

    emit voicePrompt("ATTACH PADS");
    QTimer::singleShot(5000, this, &AED::analyzeRhythm);
}
void AED::analyzeRhythm(){
    emit lightNumberChanged(lightNumber);
    lightNumber++;
    // if shockable
    emit voicePrompt("ANALYZING");
   // QTimer::singleShot(2000, this, &AED::sendElectricShock);
}



void AED::sendElectricShock(){

    // if AED is on and shockable rhythm is detected

    // get rhythm from the electrodes
    if (isTurnedOn() && isShockableRhythm(218)) // also check if the electrode pads are attached {
    {
        // emit signal to electrode to deliver shock to the victim,
        // the patient class should then receive the shock and improve the condition by a factor of the energy level
        // decrease battery here by 20% or something
    }

//    energyLevel += 0;

    // pass the energy level to the electrode class
    shockCount++;


}


bool AED::selfTest(){

    // check the batteries

    // emit a success signal as well that will turn activate the proper icon
    // if it fails display unit failed and do not proceed with the other voice prompts

//    if (0){
//        voicePrompt("UNIT OK");
//    }

    emit voicePrompt("Power ON");
    checkResponsiveness();


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

