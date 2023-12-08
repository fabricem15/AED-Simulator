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



void Electrodes::cprDisplacement(){




    //user pushes 2 inches
    compressions += 2;
}
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


//detects heart rhythm, its irregular if it beats more than 150 bpm for adults and 200 for kids
//if aed is off for > 5 secs, then shock count resets
bool Electrodes::heartAnalysis(){
    //dontTouch() voice prompt

    //dontTouch();


    if(patientType == "child"){
         if(heartrate > 200){
            qInfo("[CHILD] Irregular heartrate, initiate SHOCK");
            //illuminate
            //shockAdvisedVoice();

            //shockAdvised();
            return true;
         }
         else {
            qInfo("[CHILD]");

            //noShock();
            return false;
         }
    }
    else if(patientType == "adult"){

        if(heartrate > 150){
            qInfo("[ADULT]");

            //shockAdvised();

            //shock will deliver? or in aed
            //illuminate
            return true;
        }
        else {
            qInfo("[ADULT]");

            //noShock();

            return false;
        }

    }

    //noShockDelivered();

    return false;

}

