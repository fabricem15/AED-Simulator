#include "patient.h"


//Patient::Patient(){
//    weight = 0;
//    age = 0;
//    bpm = 0;
//}

Patient::Patient(int age, int weight){
    this->age = age;
    this->weight = weight;
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
