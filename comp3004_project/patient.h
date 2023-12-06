/*#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>

#include <QObject>

using namespace std;
class patient
{
public:
    patient();

private:
    string rhythm;
    double weight;
    string patientType;

};

#endif // PATIENT_H
*/

#ifndef PATIENT_H
#define PATIENT_H
#include "string.h"
class Patient{
    
    public:
        Patient();
        Patient(int age, int weight);
        bool isChild();
        bool isAdult();
        bool shockableHeartRate();
   
  
    private:
        int age;
        int weight;
        int bpm;
        string patientType;
};

#endif // PATIENT_H
