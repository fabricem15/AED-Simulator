#include "electrode.h"

#include "QtDebug"


Electrodes::Electrodes()
{
    patientType = "adult";
    badPlacement = false;
}

Electrodes::Electrodes(string patientType)
{
    this->patientType = patientType;
    badPlacement = false;
}

void Electrodes::setPatientType(string type){
    patientType = type;
}
string Electrodes::getPatientType(){
    return patientType;
}

void Electrodes::setBadPlacement(bool placement){
    badPlacement = placement;
}

bool Electrodes::getPlacement(){
    return badPlacement;
}


