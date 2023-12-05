#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <stdio.h>
#include "aed.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void updateBattery(int value); // ?? why not use a slot

public slots:
    void updateTime();
    void updateShockCount();
    void changePowerBtn();
    void setVoicePrompt(string text);
//    void updateBattery();

private:
    Ui::MainWindow *ui;
    AED* aed;
    QTimer* timer;
    int timeElapsed;
    int batteryHealth;

};
#endif // MAINWINDOW_H
