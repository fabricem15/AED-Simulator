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
        void setBattery(int charge);
        bool selfTest();
    signals:
        void batteryChanged(int charge);
        void lowBattery();

    private:
        int charge;

};

#endif // BATTERY_H
