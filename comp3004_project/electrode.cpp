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


void Electrodes::setPatientType(string type){
    patientType = type;
}
string Electrodes::getPatientType(){
    return patientType;
}


//bool Electrodes::heartAnalysis(){
//    return true;
//}

