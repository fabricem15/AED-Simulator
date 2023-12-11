#ifndef BATTERY_H
#define BATTERY_H
#include <QObject>
#include <iostream>


using namespace std;

class Battery: public QObject{
    Q_OBJECT

    public:
        Battery();
        void decreaseBattery(int amount);
        int getCharge();
        void replaceBattery();
//        void resetBattery();
        bool selfTest();
    signals:
        void batteryDecreased(int charge);
        void lowBattery();

    private:
        int charge;

};

#endif // BATTERY_H
