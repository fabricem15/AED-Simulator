#include "patient.h"


Patient::Patient(){
    weight = 60;
    age = 54;
    bpm = 20;
}

Patient::Patient(int age, int weight, int bpm){
    this->age = age;
    this->weight = weight;
    this->bpm = bpm;
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

int Patient::getRhythm(){
    return bpm;
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
    if (bpm > 180){
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
    else {
        bpm += 5;
    }

    setGraph(bpm);
}

void Patient::setGraph(int rhythm){

    string url = "";

    if (rhythm == 0){
        url = ":/resources/photos/asystole.webp";
    }
    else if (rhythm > 0 && rhythm < 60){
        url = ":/resources/photos/vf.png";
    }
    else if (rhythm >= 60 && rhythm < 150){
        url = ":/resources/photos/PEA.jpg";
    }
    else {
        url = ":/resources/photos/vt.webp";
    }

    //url = ":/resources/photos/ok.png";


    if (url != rhythmGraph){
        rhythmGraph = url;
        emit newRhythm(rhythmGraph);
    }

}


