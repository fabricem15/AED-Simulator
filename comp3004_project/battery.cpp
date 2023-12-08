#include "battery.h"

Battery::Battery(){
    charge = 100;
}


void Battery::decreaseBattery(int amount){
//    if (electrode.heartAnalysis() && p.isChild()){
//        charge -= 5;
//    } else if (electrode.heartAnalysis() && p.isAdult()){
//        charge -= 10;
//    }
    charge -= amount;
    
    if (charge <= 0){
        charge = 0;
    }
   emit batteryDecreased(charge);
}

bool Battery::replaceBattery(){
    if (charge < 20){
        //vp.resetBattery();
        return true;
    }
    return false;
}

void Battery::resetBattery(){
    if (this->replaceBattery()){
        charge = 100;
        qInfo("batteries replaced and charge is at 100%");
    }
}

int Battery::getCharge(){
    return charge;
}

//if the batteries have enough charge inside initially
bool Battery::selfTest(){
    return charge >= 50;
}
