#ifndef PATIENT_H
#define PATIENT_H
#include "string.h"
#include <QObject>
#include <iostream>
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
        void setAge(int age);
        void setWeight(int weight);
        void setBpm(int bpm);

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
