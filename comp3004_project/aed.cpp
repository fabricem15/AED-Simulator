#include "aed.h"

AED::AED()
{
    on = false;
}


// might have to check the state everytime

void AED::analyzeRhythm(){

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

    // pass the energy level to the electrode class
    shockCount++;



}
bool AED::selfTest(){

    // check the batteries

    // emit a success signal as well that will turn activate that icon
    return true;
}

void AED::switchPower(){
    on = !on;
    if (on){
        selfTest();
    }
    else {
        shockCount = 0;
        elapsedTime = 0;
    }

}

int AED::getElapsedTime(){
    return elapsedTime;
}
int AED::getShockCount(){
    return shockCount;
}
bool AED::isShockableRhythm(int rhythm){
    return rhythm < 70 || rhythm > 150;
}

bool AED::isTurnedOn(){
    return on;
}

