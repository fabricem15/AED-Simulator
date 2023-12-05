#include "Battery.h"

Battery::Battery(){
    charge = 100;
    
}

void Battery::decreaseBattery(){
    if (electrode.heartAnalysis() && p.isChild()){
        charge -= 5;
    } else if (electrode.heartAnalysis() && p.isAdult()){
        charge -= 10;
    }
    
    if (charge <= 0){
        charge = 0;
    }
}

bool Battery::replaceBattery(){
    if (charge < 20){
        vp.resetBattery();
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

/*void Battery::selfTest(){
    
}*/
