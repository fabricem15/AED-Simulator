#ifndef BATTERY_H
#define BATTERY_H
#include <iostream>
#include <QObject>


using namespace std;

class battery: public QObject{

    Q_OBJECT

public:
       battery();
       void decreaseBattery();
       int getCharge();
       bool replaceBattery();
       void resetBattery();
       //void selfTest();

   private:
       int charge;
};

#endif // BATTERY_H
