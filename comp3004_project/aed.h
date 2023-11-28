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
    bool startSelfTest();



signals:


public slots:

private:
    int compressionDepth;
    int shockCount;

};

#endif // AED_H
