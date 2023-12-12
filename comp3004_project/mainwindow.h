#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QLabel>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include "aed.h"
#include "patient.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void updateTime();
    void updateShockCount(int shockCount);
    void setVoicePrompt(string text);
    void setBattery(int charge);
    void turnOffPreviousLight(int index);
    void showStatusIndicator(bool passedTest);
    void switchPowerBtn();
    void setGraph(string url);
    void runScenario(int scenarioNum);

private:
    Ui::MainWindow *ui;
    AED* aed;
    Battery* battery;
    Electrodes* electrodes;
    Patient* patient;
    QTimer* timer;
    int timeElapsed;
    int selectedScenario;
    QVector<QLabel*> indicatorLabels;

};
#endif // MAINWINDOW_H
