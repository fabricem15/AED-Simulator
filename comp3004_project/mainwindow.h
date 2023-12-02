#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
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
    void updateBattery(int value);

public slots:
    void updateTime();
    void updateShockCount();
//    void updateBattery();

private:
    Ui::MainWindow *ui;
    AED aed;
    QTimer* timer;
    int timeElapsed;
    int batteryHealth;

};
#endif // MAINWINDOW_H
