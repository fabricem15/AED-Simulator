#ifndef VOICEPROMPTS_H
#define VOICEPROMPTS_H
#include "QtDebug"


class VoicePrompts
{
public:
    VoicePrompts();
    void unitOK();
    void unitFailed();
    void changeBatteries();
    void stayCalm();
    void checkResponse();
    void callHelp();
    void openAir();
    void checkBreathing();
    void twoBreaths();
    void plugCable();
    void attachPads();
    void checkPads();
    void adultPads();
    void childPads();
    void dontTouch();
    void shockAdvised();
    void noShock();
    void haltAnaysis();
    void shockWillDeliver();
    void shockDelivered();
    void noShockDelivered();
    void numShocks();
    void startCPR();
    void contCPR();
    void pushHarder();
    void goodComp();
    void stopCPR();

    void resetBattery();
    void noRescue();
    void communications();
};
//27

#endif // VOICEPROMPTS_H

