#ifndef PATIENT_H
#define PATIENT_H
#include "string.h"
#include <QObject>
using namespace std;

class Patient: public QObject{

    Q_OBJECT

    public:
        Patient();
        Patient(int age, int weight, int bpm);
        bool isChild();
        bool isAdult();
        bool isShockableHeartRate();
        int getRhythm();
        void setGraph(int rhytm);

    signals:
        void newRhythm(string r);
    public slots:
        void handleShock();
        void handleCPR();
  
    private:
        int age;
        int weight;
        int bpm;
        string rhythmGraph;

};

#endif // PATIENT_H
