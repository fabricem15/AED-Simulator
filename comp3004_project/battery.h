#ifndef BATTERY_H
#define BATTERY_H
//#include pPatient.h"
#include <QObject>
#include <iostream>

//#include "Electrode.h"
//#include "VoicePrompts.h"
#include "QtDebug"

using namespace std;

class Battery: public QObject{
    Q_OBJECT

    public:
        Battery();
        void decreaseBattery();
        int getCharge();
        bool replaceBattery();
        void resetBattery();
        bool selfTest();
    signals:

    public slots:

    private:
        int charge;
     //   Electrodes electrode;
    //    Patient p;
      //  VoicePrompts vp;
    
};

#endif // BATTERY_H
