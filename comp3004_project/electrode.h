#ifndef ELECTRODES_H
#define ELECTRODES_H
#include "patient.h"
#include "voiceprompts.h"

#include <QObject>
#include <iostream>

using namespace std;


class Electrodes: public Patient, public VoicePrompts
{
public:
    Electrodes();
    void cprDisplacement();
    void checkPlacement();
    bool heartAnalysis();

    int heartrate;
    int compressions;
    int shockCount;
    int expirationDate = 20241130;
    int electrodeType;
    bool isConnected;
    int today = 20231130;
    string patientType; // adding this just so that the code runs, delete later

};
#endif // ELECTRODES_H
