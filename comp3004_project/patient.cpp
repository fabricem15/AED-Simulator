#include "Patient.h"

Patient::Patient(){}

Patient::Patient(int age){
    this->age = age;
}

bool Patient::isChild(){
    if (age < 18){
        return true;
    }
    return false;
}

bool Patient::isAdult(){
    if (age > 17){
        return true;
    }
    return false;
}
