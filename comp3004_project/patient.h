#ifndef PATIENT_H
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
