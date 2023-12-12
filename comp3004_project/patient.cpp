#include "patient.h"


Patient::Patient(){
    weight = 60;
    age = 54;
    bpm = 20;
    willSurvive = true;
}

Patient::Patient(int age, int weight, int bpm, bool survive){
    this->age = age;
    this->weight = weight;
    this->bpm = bpm;
    willSurvive = survive;
}

bool Patient::isChild(){
    if (age < 9 || weight < 25){
        return true;
    }
    return false;
}

bool Patient::isAdult(){
    if (age > 8 || weight > 25){
        return true;
    }
    return false;
}


bool Patient::isShockableHeartRate(){
    if (bpm == 0){
        return false;
    }
    if (isAdult()){
        return bpm < 60 || bpm > 150;
    }
    else {
        return bpm < 70 || bpm > 200;
    }
}

void Patient::handleShock(){

    if (!willSurvive){
        bpm = 0;
    }
    else if (bpm > 180){
        bpm -= 10;
    } 
    else {
        bpm += 10;
    }



    setGraph(bpm);
}

void Patient::handleCPR(){

    if (bpm > 180){
        bpm -= 5;
    } 
    else if (bpm > 0 && bpm <= 180){
        bpm += 5;
    }
    else {
        bpm = 0;
    }

    setGraph(bpm);
}

void Patient::setGraph(int rhythm){

    string url = "";

    if (rhythm == 0){
        url = ":/resources/photos/asystole.png";
    }
    else if (rhythm > 0 && rhythm < 60){
        url = ":/resources/photos/vf.png";
    }
    else if (rhythm >= 60 && rhythm < 150){
        url = ":/resources/photos/PEA.jpg";
    }
    else {

        url = ":/resources/photos/vt.png";
    }

    if (url != rhythmGraph){
        rhythmGraph = url;
        emit newRhythm(rhythmGraph);
    }

}

void Patient::setSurvive(bool survive){
    willSurvive = survive;
}
bool Patient::getSurvive(){
    return willSurvive;
}

int Patient::getRhythm(){
    return bpm;
}

void Patient::setAge(int age){
    this->age = age;
}
void Patient::setWeight(int weight){
    this->weight = weight;
}

void Patient::setBpm(int bpm)
{
    this->bpm = bpm;
}



