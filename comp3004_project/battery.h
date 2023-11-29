#ifndef BATTERY_H
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
