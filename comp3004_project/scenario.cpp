#include "scenario.h"

Scenario::Scenario()
{


}

Scenario::Scenario(AED* aed, Patient* p, Battery* b){
    this->aed = aed;
    patient = p;
    battery = b;
}

