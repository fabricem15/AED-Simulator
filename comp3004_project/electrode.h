#ifndef ELECTRODES_H
#define ELECTRODES_H
#include "string.h"
#include <QObject>
#include <iostream>

using namespace std;


class Electrodes: public QObject
{
    Q_OBJECT

public:
    Electrodes();
    Electrodes(string patientType);
    void cprDisplacement();
    void checkPlacement();
    bool heartAnalysis();
    string getPatientType();
    void setPatientType(string type);

signals:
    void attachPads();
    void removePads();// could merge with the above function and add a parameter instead
    void shockPatient();// this will emit a signal that the patient class will handle, i.e., send the shock level to the patient and improve the patient condition by some percentage, then update battery as well
public slots:

private:
    int heartrate;
    int compressions;
    int expirationDate = 20241130;
    bool isConnected;
    int today = 20231130;
    string patientType;

};
#endif // ELECTRODES_H
