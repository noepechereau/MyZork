#include "mainwindow.h"
#include "rooms.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

#include <QApplication>

#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setimages();
    w.setroom();
    std::cout << "value of rooms"  << std::endl ;
    return a.exec();
}
