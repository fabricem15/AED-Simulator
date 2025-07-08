#include "electrode.h"
#include "QtDebug"

Electrodes::Electrodes()
{ 
    badPlacement = false;
}

Electrodes::Electrodes(bool placement)
{
    badPlacement = placement;
}

void Electrodes::setBadPlacement(bool placement){
    badPlacement = placement;
}

bool Electrodes::getPlacement(){
    return badPlacement;
}
