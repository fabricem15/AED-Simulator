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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_2;
    QWidget *widget_3;
    QWidget *widget_7;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *elapsedTime;
    QProgressBar *progressBar_2;
    QLabel *label_14;
    QPushButton *shockButton;
    QLabel *label_3;
    QProgressBar *progressBar;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *light1;
    QLabel *light2;
    QLabel *light3;
    QLabel *light4;
    QWidget *widget_4;
    QPushButton *powerBtn;
    QWidget *widget_5;
    QLabel *testFailed;
    QLabel *label_15;
    QWidget *slider;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_6;
    QFrame *line;
    QComboBox *comboBox;
    QPushButton *pushButton_8;
    QSlider *horizontalSlider;
    QLabel *label_16;
    QLabel *compDepth;
    QFrame *line_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1360, 1147);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, -50, 841, 1021));
        widget->setStyleSheet(QString::fromUtf8("background-color:#737889;"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(50, 70, 691, 631));
        widget_2->setStyleSheet(QString::fromUtf8("border-radius:300px; background-color:#d5df8a"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(60, 40, 571, 551));
        widget_3->setStyleSheet(QString::fromUtf8("border-radius:255px; background-color:#737779\n"
""));
        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(140, 90, 271, 191));
        widget_7->setStyleSheet(QString::fromUtf8("background-color:rgb(246, 245, 244)"));
        label_2 = new QLabel(widget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 140, 211, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Quicksand"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 0, 111, 41));
        elapsedTime = new QLabel(widget_7);
        elapsedTime->setObjectName(QString::fromUtf8("elapsedTime"));
        elapsedTime->setGeometry(QRect(210, 0, 51, 31));
        progressBar_2 = new QProgressBar(widget_7);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(230, 40, 31, 101));
        progressBar_2->setMaximum(3);
        progressBar_2->setValue(2);
        progressBar_2->setTextVisible(false);
        progressBar_2->setOrientation(Qt::Vertical);
        progressBar_2->setInvertedAppearance(true);
        progressBar_2->setTextDirection(QProgressBar::BottomToTop);
        label_14 = new QLabel(widget_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(70, 10, 21, 17));
        shockButton = new QPushButton(widget_3);
        shockButton->setObjectName(QString::fromUtf8("shockButton"));
        shockButton->setGeometry(QRect(220, 300, 131, 111));
        shockButton->setStyleSheet(QString::fromUtf8("background-color:#b0abab;border-radius:55px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/photos/Heart_icon.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        shockButton->setIcon(icon);
        shockButton->setIconSize(QSize(75, 69));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 10, 241, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Quicksand Medium"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color:white"));
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(700, 10, 118, 23));
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setValue(86);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 730, 161, 131));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/ok.png")));
        label_5->setScaledContents(true);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(220, 730, 161, 131));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/911.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(440, 730, 161, 131));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/pads.png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(650, 730, 161, 131));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/don't touch.png")));
        label_9->setScaledContents(true);
        light1 = new QLabel(widget);
        light1->setObjectName(QString::fromUtf8("light1"));
        light1->setGeometry(QRect(153, 834, 16, 16));
        light1->setStyleSheet(QString::fromUtf8("background-color:orange;border-radius:8px;\n"
""));
        light2 = new QLabel(widget);
        light2->setObjectName(QString::fromUtf8("light2"));
        light2->setGeometry(QRect(251, 829, 16, 16));
        light2->setStyleSheet(QString::fromUtf8("background-color:grey;border-radius:8px;\n"
""));
        light3 = new QLabel(widget);
        light3->setObjectName(QString::fromUtf8("light3"));
        light3->setGeometry(QRect(449, 831, 16, 16));
        light3->setStyleSheet(QString::fromUtf8("background-color:grey;border-radius:8px;\n"
""));
        light4 = new QLabel(widget);
        light4->setObjectName(QString::fromUtf8("light4"));
        light4->setGeometry(QRect(745, 747, 16, 16));
        light4->setStyleSheet(QString::fromUtf8("background-color:grey;border-radius:8px;\n"
""));
        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(659, 899, 141, 81));
        widget_4->setStyleSheet(QString::fromUtf8("background-color:white;border-radius:35px"));
        powerBtn = new QPushButton(widget_4);
        powerBtn->setObjectName(QString::fromUtf8("powerBtn"));
        powerBtn->setGeometry(QRect(60, 0, 81, 81));
        powerBtn->setCursor(QCursor(Qt::PointingHandCursor));
        powerBtn->setStyleSheet(QString::fromUtf8("background-color:#737889;border-radius:20px"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/photos/power-on-black.png"), QSize(), QIcon::Normal, QIcon::Off);
        powerBtn->setIcon(icon1);
        powerBtn->setIconSize(QSize(40, 40));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(30, 890, 131, 71));
        widget_5->setStyleSheet(QString::fromUtf8("background-color:white;border-radius:35px"));
        testFailed = new QLabel(widget_5);
        testFailed->setObjectName(QString::fromUtf8("testFailed"));
        testFailed->setGeometry(QRect(70, 20, 51, 41));
        testFailed->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/test-failed.png")));
        testFailed->setScaledContents(true);
        label_15 = new QLabel(widget_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 10, 51, 51));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/resources/photos/test-passed.png")));
        label_15->setScaledContents(true);
        slider = new QWidget(centralwidget);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setGeometry(QRect(840, 0, 521, 881));
        slider->setStyleSheet(QString::fromUtf8("background-color:white"));
        label = new QLabel(slider);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 30, 201, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("System-ui"));
        font2.setPointSize(14);
        label->setFont(font2);
        label->setFrameShape(QFrame::StyledPanel);
        pushButton_3 = new QPushButton(slider);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 120, 181, 71));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/photos/attach-pads.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(60, 60));
        pushButton_3->setCheckable(false);
        pushButton_4 = new QPushButton(slider);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 120, 161, 71));
        pushButton_4->setLayoutDirection(Qt::LeftToRight);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/photos/CPR.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(40, 40));
        label_6 = new QLabel(slider);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 420, 231, 41));
        label_6->setFont(font2);
        label_6->setFrameShape(QFrame::StyledPanel);
        line = new QFrame(slider);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 380, 451, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        comboBox = new QComboBox(slider);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(170, 540, 86, 25));
        pushButton_8 = new QPushButton(slider);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(40, 230, 181, 81));
        QFont font3;
        font3.setPointSize(9);
        pushButton_8->setFont(font3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/photos/replace-battery.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon4);
        pushButton_8->setIconSize(QSize(60, 60));
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
        menubar->setGeometry(QRect(0, 0, 1360, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), compDepth, SLOT(setNum(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), progressBar_2, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CHECK RESPONSIVENESS", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "SHOCKS: ", nullptr));
        elapsedTime->setText(QCoreApplication::translate("MainWindow", "45", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        shockButton->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "AED ZOLL PLUS", nullptr));
        label_5->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        light1->setText(QString());
        light2->setText(QString());
        light3->setText(QString());
        light4->setText(QString());
        powerBtn->setText(QString());
        testFailed->setText(QString());
        label_15->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "USER ACTIONS", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Place Electrodes", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Start CPR", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "SCENARIO CONTROL", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Replace batteries", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Compression Depth", nullptr));
        compDepth->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
