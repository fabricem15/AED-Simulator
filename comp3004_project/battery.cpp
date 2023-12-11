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
//       emit lowBattery();

   }

   emit batteryDecreased(charge);
}

//bool Battery::replaceBattery(){
//    if (charge < 20){

//        return true;
//    }
//    return false;
//}

void Battery::replaceBattery(){

    charge = 100;

//    if (this->replaceBattery()){
//        charge = 100;
//        qInfo("batteries replaced and charge is at 100%");
//    }
}

int Battery::getCharge(){
    return charge;
}


bool Battery::selfTest(){
    return charge >= 20;
}
