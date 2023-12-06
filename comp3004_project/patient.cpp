#include "Patient.h"

Patient::Patient(){}

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

bool Patient::shockableHeartRate(){
    if (this->isChild() && bpm > 200){
        return true;
    } else if (this->isAdult() && bpm > 150){
        return true;
    }
    return false;
}
