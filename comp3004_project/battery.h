/*#ifndef BATTERY_H
#define BATTERY_H
#include <iostream>
#include <QObject>


using namespace std;

class battery
{
public:
    battery();


private:
    int remainingCapacity;
    string batteryType;
    string expirationDate;
};

#endif // BATTERY_H
*/

#ifndef BATTERY_H
#define BATTERY_H
#include "Patient.h"
#include "Electrodes.h"
#include "VoicePrompts.h"
#include "QtDebug"

class Battery{

    public:
        Battery();
        void decreaseBattery();
        int getCharge();
        bool replaceBattery();
        void resetBattery();
        //void selfTest();

    private:
        int charge;
        Electrodes electrode;
        Patient p;
        VoicePrompts vp;
    
};

#endif // BATTERY_H
