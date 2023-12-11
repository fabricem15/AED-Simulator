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

private:
    AED* aed;
    Patient* patient;
    Battery* battery;

};

#endif // SCENARIO_H
