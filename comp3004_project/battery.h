#ifndef BATTERY_H
#define BATTERY_H
//#include pPatient.h"
#include <QObject>
#include <iostream>


using namespace std;

class Battery: public QObject{
    Q_OBJECT

    public:
        Battery();
        void decreaseBattery(int amount);
        int getCharge();
        bool replaceBattery();
        void resetBattery();
        bool selfTest();
    signals:
        void batteryDecreased(int charge);
    public slots:

    private:
        int charge;

};

#endif // BATTERY_H
