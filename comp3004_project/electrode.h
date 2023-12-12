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
    Electrodes(bool placement);
    void setBadPlacement(bool placement);
    bool getPlacement();

signals:
    void attachPads();
    void shockPatient();
private:
    int heartrate;
    bool isConnected;
    bool badPlacement;

};
#endif // ELECTRODES_H
