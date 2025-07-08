#include "battery.h"

Battery::Battery(){
    charge = 100;
}

void Battery::decreaseBattery(int amount){
    charge -= amount;
    
    if (charge <= 0){
        charge = 0;
    }

   if (charge <= 20){
       emit lowBattery();
   }
   emit batteryChanged(charge);
}

void Battery::replaceBattery(){

    charge = 100;
    emit batteryChanged(charge);
}

void Battery::setBattery(int charge){
    this->charge = charge;
}

int Battery::getCharge(){
    return charge;
}

bool Battery::selfTest(){
    return charge >= 20;
}
