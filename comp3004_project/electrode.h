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
    string getPatientType();
    void setPatientType(string type);
    void setBadPlacement(bool placement);
    bool getPlacement();

signals:
    void attachPads();
    void shockPatient();
private:
    int heartrate;
    bool isConnected;
    bool badPlacement;
    string patientType;

};
#endif // ELECTRODES_H
