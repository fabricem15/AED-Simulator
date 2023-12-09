#include "electrode.h"

#include "QThread"
#include "QtDebug"


Electrodes::Electrodes()
{
    compressions = 0;
    heartrate = 180; //adult scenario
    patientType = "adult";
}

Electrodes::Electrodes(string patientType)
{
    compressions = 0;
    this->patientType = patientType;
    heartrate = 180; //adult scenario
}


//void Electrodes::cprDisplacement(){


//    //user pushes 2 inches
//    compressions += 2;
//}


//check if electrodes are placed correctly
void Electrodes::checkPlacement(){
//check if pads are expired
        if(today > expirationDate){
            qInfo("Pads expired, replace them");
            //new pad's expiry date
            expirationDate = 20251130;
        }

}

void Electrodes::setPatientType(string type){
    patientType = type;
}
string Electrodes::getPatientType(){
    return patientType;
}


bool Electrodes::heartAnalysis(){
    return true;
}

