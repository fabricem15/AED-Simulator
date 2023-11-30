#include "voiceprompts.h"

VoicePrompts::VoicePrompts(){}

void VoicePrompts::unitOK(){
    qInfo("UNIT OK");
}
void VoicePrompts::unitFailed(){
    qInfo("UNIT FAILED");
}
void VoicePrompts::changeBatteries(){
    qInfo("CHANGE BATTERIES");
}
void VoicePrompts::stayCalm(){
    qInfo("STAY CALM");
}
void VoicePrompts::checkResponse(){
    qInfo("CHECK RESPONSIVENESS");
}
void VoicePrompts::callHelp(){
    qInfo("CALL FOR HELP");
}
void VoicePrompts::openAir(){
    qInfo("OPEN AIRWAY");
}
void VoicePrompts::checkBreathing(){
    qInfo("CHECK BREATHING");
}
void VoicePrompts::twoBreaths(){
    qInfo("GIVE TWO BREATHS");
}
void VoicePrompts::plugCable(){
    qInfo("PLUG IN CABEL");
}
void VoicePrompts::attachPads(){
    qInfo("ATTACH DEFIB PADS TO PATIENT'S BARE CHEST");
}
void VoicePrompts::checkPads(){
    qInfo("CHECK ELECTRODE PADS");
}
void VoicePrompts::adultPads(){
    qInfo("ADULT PADS");
}
void VoicePrompts::childPads(){
    qInfo("PEDIATRIC PADS");
}
void VoicePrompts::dontTouch(){
    qInfo("DON'T TOUCH PATIENT, ANALYZING");
}
void VoicePrompts::shockAdvised(){
    qInfo("SHOCK ADVISED");
}
void VoicePrompts::noShock(){
    qInfo("NO SHOCK ADVISED");
}
void VoicePrompts::haltAnaysis(){
    qInfo("ANALYSIS HALTED. KEEP PATIENT STILL");
}
void VoicePrompts::shockWillDeliver(){
    qInfo("SHOCK WILL BE DELIVERED IN THREE, TWO, ONE");
}
void VoicePrompts::shockDelivered(){
    qInfo("SHOCK DELIVERED");
}
void VoicePrompts::noShockDelivered(){
    qInfo("NO SHOCK DELIVERED");
}
void VoicePrompts::numShocks(){
    //shock count from AED class
    qInfo("N SHOCKS DELIVERED");
}
void VoicePrompts::startCPR(){
    qInfo("START CPR");
}
void VoicePrompts::contCPR(){
    qInfo("CONTINUE CPR");
}
void VoicePrompts::pushHarder(){
    qInfo("PUSH HARDER");
}
void VoicePrompts::goodComp(){
    qInfo("GOOD COMPRESSIONS");
}
void VoicePrompts::stopCPR(){
    qInfo("STOP CPR");
}
//BATTERY
void VoicePrompts::resetBattery(){
    qInfo("IF NEW BATTEIRES, PRESS BUTTON");
}
void VoicePrompts::noRescue(){
    qInfo("NON-RESCUE MODE");
}
void VoicePrompts::communications(){
    qInfo("COMMUNICATIONS ESTABLISHED");
}

