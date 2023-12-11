#ifndef AED_H
#define AED_H
#include <QObject>
#include <iostream>
#include <QTimer>
#include "battery.h"
#include "electrode.h"
#include "patient.h"

using namespace std;

class AED: public QObject{

    Q_OBJECT

public:
    AED();
    AED(Battery* b, Electrodes* e, Patient* p);
    bool selfTest();
    int getShockCount();
    int getActiveButton();
    int getActiveLightIndex();
    bool isTurnedOn();
    void checkCompressionDepth();
    void switchPower();
    void checkResponsiveness();
    void callHelp();
    void attachPads();

    void sendElectricShock();
    void doCPR();
    void readyToShock();

    void setElectrodes(Electrodes* e);
    void setBattery(Battery* b);
    void setPatient(Patient* p);
    Battery* getBattery();
    Electrodes* getElectrodes();
    Patient* getPatient();

signals:
    void voicePrompt(string text);
    void lightNumberChanged(int lightNumber);
    void selfTestPassed(bool passed);
    void shockCountIncreased(int shockCount);
    void cprDelivered();
    void analyzing();

public slots:
    void analyzeRhythm();
    void cprStarted();

private:
    int shockCount;
    int batteryDecreaseAmount;
    bool isOn;
    int lightNumber;
    QTimer* timer;
    Battery* battery;
    Electrodes* electrodes;
    Patient* patient;

};

#endif // AED_H
