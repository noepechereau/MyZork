/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *upButton;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *downButton;
    QLabel *roomLabel;
    QPushButton *roomButtton;
    QLabel *labelMap;
    QLabel *labelPic;
    QPushButton *teleportButton;
    QLabel *debog;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        upButton = new QPushButton(centralwidget);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(10, 90, 93, 29));
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 180, 93, 29));
        rightButton = new QPushButton(centralwidget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(10, 150, 93, 29));
        downButton = new QPushButton(centralwidget);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(10, 120, 93, 29));
        roomLabel = new QLabel(centralwidget);
        roomLabel->setObjectName(QString::fromUtf8("roomLabel"));
        roomLabel->setGeometry(QRect(20, 390, 91, 21));
        roomButtton = new QPushButton(centralwidget);
        roomButtton->setObjectName(QString::fromUtf8("roomButtton"));
        roomButtton->setGeometry(QRect(10, 350, 101, 29));
        labelMap = new QLabel(centralwidget);
        labelMap->setObjectName(QString::fromUtf8("labelMap"));
        labelMap->setGeometry(QRect(10, 430, 121, 111));
        labelPic = new QLabel(centralwidget);
        labelPic->setObjectName(QString::fromUtf8("labelPic"));
        labelPic->setGeometry(QRect(170, 9, 621, 561));
        teleportButton = new QPushButton(centralwidget);
        teleportButton->setObjectName(QString::fromUtf8("teleportButton"));
        teleportButton->setGeometry(QRect(10, 320, 93, 29));
        debog = new QLabel(centralwidget);
        debog->setObjectName(QString::fromUtf8("debog"));
        debog->setGeometry(QRect(10, 220, 121, 81));
        MainWindow->setCentralWidget(centralwidget);
        labelPic->raise();
        upButton->raise();
        leftButton->raise();
        rightButton->raise();
        downButton->raise();
        roomLabel->raise();
        roomButtton->raise();
        labelMap->raise();
        teleportButton->raise();
        debog->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        upButton->setText(QCoreApplication::translate("MainWindow", "up", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "left", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "right", nullptr));
        downButton->setText(QCoreApplication::translate("MainWindow", "down", nullptr));
        roomLabel->setText(QString());
        roomButtton->setText(QCoreApplication::translate("MainWindow", "room button", nullptr));
        labelMap->setText(QString());
        labelPic->setText(QString());
        teleportButton->setText(QCoreApplication::translate("MainWindow", "teleport", nullptr));
        debog->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
