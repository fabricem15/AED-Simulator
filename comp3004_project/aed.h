#ifndef AED_H
#define AED_H
#include <QObject>
#include <iostream>
#include <QTimer>
#include "battery.h"
#include "electrode.h"

using namespace std;

class AED: public QObject{

    Q_OBJECT

public:
    AED();
    bool selfTest();
    int getShockCount();
    int getActiveButton();
    int getActiveLightIndex();
    bool isShockableRhythm(int rhythm);
    bool isTurnedOn();
    void checkCompressionDepth();
    void switchPower();
    void checkResponsiveness();
    void callHelp();
    void attachPads();
    void analyzeRhythm();
    void sendElectricShock();


    Battery* getBattery();
    Electrodes* getElectrodes();

signals:
    void voicePrompt(string text); // only the AED should send the voice prompt, it may read from battery or electrode but they may not communicate directly with the display
    void lightNumberChanged(int lightNumber); // signal to the mainwindow to stop flashing previous light indicator
    void selfTestPassed(bool passed);
    void shockCountIncreased(int shockCount);

public slots:
    void electrodesON();

private:
    int compressionDepth;
    int shockCount;
    bool isOn;
    int lightNumber;
    QTimer* timer;
    Battery* battery;
    Electrodes* electrodes;
//    int energyLevels[];

};

#endif // AED_H
