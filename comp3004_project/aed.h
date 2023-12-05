#ifndef AED_H
#define AED_H
#include <QObject>
#include <iostream>

using namespace std;

class AED: public QObject{

    Q_OBJECT

public:
    AED();
    void analyzeRhythm();
    void sendElectricShock();
    bool selfTest();
    int getElapsedTime();
    int getShockCount();
    bool isShockableRhythm(int rhythm);
    bool isTurnedOn();
    void checkCompressionDepth();
    void switchPower();

signals:


public slots:

private:
    int compressionDepth;
    int shockCount;
    int elapsedTime;
    bool on;
//    int energyLevels[];
    // must check the electrode pads connection at all times

};

#endif // AED_H
