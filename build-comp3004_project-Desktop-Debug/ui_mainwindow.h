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
    QPushButton *pushButton_7;
    QLabel *label_3;
    QProgressBar *progressBar;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *slider;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QLabel *label_6;
    QFrame *line;
    QComboBox *comboBox;
    QPushButton *pushButton_8;
    QSlider *horizontalSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1345, 926);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 831, 881));
        widget->setStyleSheet(QString::fromUtf8("background-color:#737889;"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(40, 50, 691, 631));
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
        elapsedTime->setGeometry(QRect(220, 0, 51, 41));
        pushButton_7 = new QPushButton(widget_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(220, 300, 131, 111));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color:#b0abab;border-radius:55px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("photos/Heart_icon.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(75, 69));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 0, 241, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Quicksand Medium"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(680, 10, 118, 23));
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setValue(86);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 730, 161, 131));
        label_5->setPixmap(QPixmap(QString::fromUtf8("photos/ok.png")));
        label_5->setScaledContents(true);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(220, 730, 161, 131));
        label_7->setPixmap(QPixmap(QString::fromUtf8("photos/911.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(440, 730, 161, 131));
        label_8->setPixmap(QPixmap(QString::fromUtf8("photos/pads.png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(650, 730, 161, 131));
        label_9->setPixmap(QPixmap(QString::fromUtf8("photos/don't touch.png")));
        label_9->setScaledContents(true);
        slider = new QWidget(centralwidget);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setGeometry(QRect(840, 0, 501, 881));
        slider->setStyleSheet(QString::fromUtf8("background-color:white"));
        label = new QLabel(slider);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 30, 171, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("System-ui"));
        font2.setPointSize(14);
        label->setFont(font2);
        label->setFrameShape(QFrame::StyledPanel);
        pushButton_3 = new QPushButton(slider);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 120, 131, 51));
        pushButton_4 = new QPushButton(slider);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(280, 120, 131, 51));
        pushButton_6 = new QPushButton(slider);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(80, 190, 131, 51));
        label_6 = new QLabel(slider);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 380, 231, 41));
        label_6->setFont(font2);
        label_6->setFrameShape(QFrame::StyledPanel);
        line = new QFrame(slider);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 340, 451, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        comboBox = new QComboBox(slider);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(180, 470, 86, 25));
        pushButton_8 = new QPushButton(slider);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(280, 190, 131, 51));
        horizontalSlider = new QSlider(slider);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(290, 280, 160, 16));
        horizontalSlider->setPageStep(10);
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);
        horizontalSlider->setTickInterval(0);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1345, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CHECK RESPONSIVENESS", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "SHOCKS: ", nullptr));
        elapsedTime->setText(QCoreApplication::translate("MainWindow", "0:45", nullptr));
        pushButton_7->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "AED ZOLL PLUS", nullptr));
        label_5->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "USER ACTIONS", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Place Electrodes", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Start CPR", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Push harder", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "SCENARIO CONTROL", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Replace batteries", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
