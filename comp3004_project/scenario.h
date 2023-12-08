#ifndef SCENARIO_H
#define SCENARIO_H

#include <QObject>
#include <aed.h>
#include <patient.h>
#include <battery.h>
#include <electrode.h>


class Scenario: public QObject
{
    Q_OBJECT


public:
    Scenario(AED* aed, Patient* p, Battery* b);
    Scenario();
    void initScenario(int scenarioNumber);
    void irregularRhythm();
    void regularRhythm();

    // perhaps a function for each scenario?



private:
    AED* aed;
    Patient* p;
    Battery* b;

};

#endif // SCENARIO_H
