/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *aedWidget;
    QWidget *widget_2;
    QWidget *widget_3;
    QWidget *widget_7;
    QLabel *voicePrompt;
    QLabel *shockLbl;
    QLabel *elapsedTime;
    QProgressBar *compression;
    QLabel *shockCount;
    QPushButton *shockButton;
    QLabel *light5;
    QLabel *label_3;
    QProgressBar *battery;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *light2;
    QLabel *light4;
    QLabel *light3;
    QWidget *widget_4;
    QPushButton *powerBtn;
    QWidget *widget_5;
    QLabel *testFailed;
    QLabel *testPassed;
    QLabel *label_5;
    QLabel *light1;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *light6;
    QWidget *slider;
    QLabel *label;
    QPushButton *placeElectrodes;
    QPushButton *doCPR;
    QLabel *label_6;
    QFrame *line;
    QPushButton *replaceBatteries;
    QSlider *horizontalSlider;
    QLabel *label_16;
    QLabel *compDepth;
    QWidget *widget;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QPushButton *pushButton;
    QFrame *line_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1435, 1194);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        aedWidget = new QWidget(centralwidget);
        aedWidget->setObjectName(QString::fromUtf8("aedWidget"));
        aedWidget->setGeometry(QRect(-10, 0, 871, 1181));
        aedWidget->setStyleSheet(QString::fromUtf8("background-color:#737889;"));
        widget_2 = new QWidget(aedWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(120, 200, 611, 561));
        widget_2->setStyleSheet(QString::fromUtf8("border-radius:250px; background-color:#d5df8a"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(60, 50, 491, 471));
        widget_3->setStyleSheet(QString::fromUtf8("border-radius:225px; background-color:#737779\n"
""));
        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(100, 60, 271, 191));
        widget_7->setStyleSheet(QString::fromUtf8("background-color:rgb(246, 245, 244)"));
        voicePrompt = new QLabel(widget_7);
        voicePrompt->setObjectName(QString::fromUtf8("voicePrompt"));
        voicePrompt->setGeometry(QRect(30, 140, 211, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Quicksand"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        voicePrompt->setFont(font);
        voicePrompt->setAlignment(Qt::AlignCenter);
        shockLbl = new QLabel(widget_7);
        shockLbl->setObjectName(QString::fromUtf8("shockLbl"));
        shockLbl->setGeometry(QRect(10, 0, 111, 41));
        elapsedTime = new QLabel(widget_7);
        elapsedTime->setObjectName(QString::fromUtf8("elapsedTime"));
        elapsedTime->setGeometry(QRect(210, 4, 51, 31));
        compression = new QProgressBar(widget_7);
        compression->setObjectName(QString::fromUtf8("compression"));
        compression->setGeometry(QRect(230, 40, 31, 101));
        compression->setMaximum(3);
        compression->setValue(0);
        compression->setTextVisible(false);
        compression->setOrientation(Qt::Vertical);
        compression->setInvertedAppearance(true);
        compression->setTextDirection(QProgressBar::BottomToTop);
        shockCount = new QLabel(widget_7);
        shockCount->setObjectName(QString::fromUtf8("shockCount"));
        shockCount->setGeometry(QRect(70, 12, 21, 17));
        shockButton = new QPushButton(widget_3);
        shockButton->setObjectName(QString::fromUtf8("shockButton"));
        shockButton->setGeometry(QRect(180, 270, 121, 111));
        shockButton->setStyleSheet(QString::fromUtf8("background-color:#b0abab;border-radius:55px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/photos/Heart_icon.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        shockButton->setIcon(icon);
        shockButton->setIconSize(QSize(75, 69));
        light5 = new QLabel(widget_3);
        light5->setObjectName(QString::fromUtf8("light5"));
        light5->setGeometry(QRect(232, 314, 16, 16));
        light5->setStyleSheet(QString::fromUtf8("background-color:grey;border-radius:8px;\n"
""));
        label_3 = new QLabel(aedWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 10, 241, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Quicksand Medium"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color:#d5df8a"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setAlignment(Qt::AlignCenter);
        battery = new QProgressBar(aedWidget);
        battery->setObjectName(QString::fromUtf8("battery"));
        battery->setGeometry(QRect(700, 10, 118, 23));
        battery->setLayoutDirection(Qt::LeftToRight);
        battery->setValue(100);
        battery->setTextVisible(true);
        battery->setOrientation(Qt::Horizontal);
        battery->setInvertedAppearance(false);
        battery->setTextDirection(QProgressBar::TopToBottom);
        label_7 = new QLabel(aedWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(410, 70, 111, 91));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/911.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(aedWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(730, 300, 121, 91));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/pads.png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(aedWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(640, 720, 121, 101));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/don't touch.png")));
        label_9->setScaledContents(true);
        light2 = new QLabel(aedWidget);
        light2->setObjectName(QString::fromUtf8("light2"));
        light2->setGeometry(QRect(429, 138, 16, 16));
        light2->setStyleSheet(QString::fromUtf8("background-color:grey;border-radius:8px;\n"
""));
        light4 = new QLabel(aedWidget);
        light4->setObjectName(QString::fromUtf8("light4"));
        light4->setGeometry(QRect(710, 730, 16, 16));
        light4->setStyleSheet(QString::fromUtf8("background-color:grey;border-radius:8px;\n"
""));
        light3 = new QLabel(aedWidget);
        light3->setObjectName(QString::fromUtf8("light3"));
        light3->setGeometry(QRect(733, 370, 16, 16));
        light3->setStyleSheet(QString::fromUtf8("background-color:grey;border-radius:8px;\n"
""));
        widget_4 = new QWidget(aedWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(680, 830, 141, 81));
        widget_4->setStyleSheet(QString::fromUtf8("background-color:white;border-radius:35px"));
        powerBtn = new QPushButton(widget_4);
        powerBtn->setObjectName(QString::fromUtf8("powerBtn"));
        powerBtn->setGeometry(QRect(60, 0, 81, 81));
        powerBtn->setCursor(QCursor(Qt::PointingHandCursor));
        powerBtn->setStyleSheet(QString::fromUtf8("background-color:red;border-radius:20px"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/photos/power-on-black.png"), QSize(), QIcon::Normal, QIcon::Off);
        powerBtn->setIcon(icon1);
        powerBtn->setIconSize(QSize(40, 40));
        widget_5 = new QWidget(aedWidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(40, 840, 131, 71));
        widget_5->setStyleSheet(QString::fromUtf8("background-color:white;border-radius:35px"));
        testFailed = new QLabel(widget_5);
        testFailed->setObjectName(QString::fromUtf8("testFailed"));
        testFailed->setGeometry(QRect(70, 20, 51, 41));
        testFailed->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/test-failed.png")));
        testFailed->setScaledContents(true);
        testPassed = new QLabel(widget_5);
        testPassed->setObjectName(QString::fromUtf8("testPassed"));
        testPassed->setGeometry(QRect(10, 10, 51, 51));
        testPassed->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/test-passed.png")));
        testPassed->setScaledContents(true);
        label_5 = new QLabel(aedWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 150, 131, 101));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/ok.png")));
        label_5->setScaledContents(true);
        light1 = new QLabel(aedWidget);
        light1->setObjectName(QString::fromUtf8("light1"));
        light1->setGeometry(QRect(140, 230, 16, 16));
        light1->setStyleSheet(QString::fromUtf8("background-color:grey;border-radius:8px;\n"
""));
        label_10 = new QLabel(aedWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 370, 61, 41));
        label_10->setLayoutDirection(Qt::RightToLeft);
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/arrow.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(aedWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 250, 91, 81));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/up-arrow.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(aedWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 710, 121, 101));
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/CPR-icon.png")));
        label_12->setScaledContents(true);
        light6 = new QLabel(aedWidget);
        light6->setObjectName(QString::fromUtf8("light6"));
        light6->setGeometry(QRect(58, 718, 16, 16));
        light6->setStyleSheet(QString::fromUtf8("background-color:grey;border-radius:8px;\n"
""));
        label_7->raise();
        widget_2->raise();
        label_3->raise();
        battery->raise();
        label_8->raise();
        label_9->raise();
        light2->raise();
        light4->raise();
        light3->raise();
        widget_4->raise();
        widget_5->raise();
        label_5->raise();
        light1->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        light6->raise();
        slider = new QWidget(centralwidget);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setGeometry(QRect(860, 0, 581, 1181));
        slider->setStyleSheet(QString::fromUtf8("background-color:white"));
        label = new QLabel(slider);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 30, 201, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("System-ui"));
        font2.setPointSize(14);
        label->setFont(font2);
        label->setFrameShape(QFrame::StyledPanel);
        label->setAlignment(Qt::AlignCenter);
        placeElectrodes = new QPushButton(slider);
        placeElectrodes->setObjectName(QString::fromUtf8("placeElectrodes"));
        placeElectrodes->setGeometry(QRect(40, 120, 181, 71));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/photos/attach-pads.png"), QSize(), QIcon::Normal, QIcon::Off);
        placeElectrodes->setIcon(icon2);
        placeElectrodes->setIconSize(QSize(60, 60));
        placeElectrodes->setCheckable(false);
        doCPR = new QPushButton(slider);
        doCPR->setObjectName(QString::fromUtf8("doCPR"));
        doCPR->setGeometry(QRect(260, 120, 161, 71));
        doCPR->setLayoutDirection(Qt::LeftToRight);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/photos/CPR.png"), QSize(), QIcon::Normal, QIcon::Off);
        doCPR->setIcon(icon3);
        doCPR->setIconSize(QSize(40, 40));
        label_6 = new QLabel(slider);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 420, 231, 41));
        label_6->setFont(font2);
        label_6->setFrameShape(QFrame::StyledPanel);
        label_6->setAlignment(Qt::AlignCenter);
        line = new QFrame(slider);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 380, 451, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        replaceBatteries = new QPushButton(slider);
        replaceBatteries->setObjectName(QString::fromUtf8("replaceBatteries"));
        replaceBatteries->setGeometry(QRect(40, 230, 181, 81));
        QFont font3;
        font3.setPointSize(9);
        replaceBatteries->setFont(font3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/photos/replace-battery.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        replaceBatteries->setIcon(icon4);
        replaceBatteries->setIconSize(QSize(60, 60));
        horizontalSlider = new QSlider(slider);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(260, 280, 160, 16));
        QFont font4;
        font4.setPointSize(12);
        horizontalSlider->setFont(font4);
        horizontalSlider->setLayoutDirection(Qt::LeftToRight);
        horizontalSlider->setMaximum(3);
        horizontalSlider->setSingleStep(1);
        horizontalSlider->setValue(0);
        horizontalSlider->setSliderPosition(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);
        label_16 = new QLabel(slider);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(280, 230, 131, 21));
        compDepth = new QLabel(slider);
        compDepth->setObjectName(QString::fromUtf8("compDepth"));
        compDepth->setGeometry(QRect(450, 280, 51, 21));
        widget = new QWidget(slider);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(160, 510, 211, 251));
        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 40, 161, 23));
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 10, 151, 23));
        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 70, 181, 23));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 220, 83, 25));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(220, 1020, 16, 71));
        line_2->setStyleSheet(QString::fromUtf8("\\"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setLineWidth(0);
        line_2->setFrameShape(QFrame::VLine);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1435, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), compDepth, SLOT(setNum(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), compression, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        voicePrompt->setText(QString());
        shockLbl->setText(QCoreApplication::translate("MainWindow", "SHOCKS: ", nullptr));
        elapsedTime->setText(QString());
        shockCount->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        shockButton->setText(QString());
        light5->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "AED ZOLL PLUS", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        light2->setText(QString());
        light4->setText(QString());
        light3->setText(QString());
        powerBtn->setText(QString());
        testFailed->setText(QString());
        testPassed->setText(QString());
        label_5->setText(QString());
        light1->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        light6->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "USER ACTIONS", nullptr));
        placeElectrodes->setText(QCoreApplication::translate("MainWindow", "Place Electrodes", nullptr));
        doCPR->setText(QCoreApplication::translate("MainWindow", "Start CPR", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "SCENARIO CONTROL", nullptr));
        replaceBatteries->setText(QCoreApplication::translate("MainWindow", "Replace batteries", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Compression Depth", nullptr));
        compDepth->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Adult with high BPM", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Adult with low BPM", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Child with irregular BPM", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
