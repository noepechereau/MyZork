#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rooms.h"
#include <QPixmap>
#include <iostream>


rooms* room0 = new rooms(0,{-1,-1,1,-1});
rooms* room1 = new rooms(1,{0,3,2,-1});
rooms* room2 = new rooms(2,{1,-1,-1,-1});
rooms* room3 = new rooms(3,{-1,4,-1,1});
rooms* room4 = new rooms(4,{5,-1,6,3});
rooms* room5 = new rooms(5,{-1,-1,4,-1});
rooms* room6 = new rooms(6,{4,-1,-1,-1});


rooms* allrooms[7] = {room0,room1,room2,room3,room4,room5,room6};
int currentroom = 0 ;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setroom()
{
        ui->roomLabel->setText("Room number " + QString::number(allrooms[currentroom]->_name));
}

void MainWindow::setimages()
{
    switch (currentroom)
    {
        case (0) :
            {
            QPixmap pix("C:/Qt/images/foret.jpg");
            ui->labelPic->setPixmap(pix);
            }
        break ;
        case (1) :
            {
            QPixmap pix("C:/Qt/images/ocean.jpg");
            ui->labelPic->setPixmap(pix);
            }
        break;
        case (2) :
            {
            QPixmap pix("C:/Qt/images/ciel.jpg");
            ui->labelPic->setPixmap(pix);
            }
        break ;
        case (3) :
            {
            QPixmap pix("C:/Qt/images/soussol.jpg");
            ui->labelPic->setPixmap(pix);
            }
        break ;
        case (4) :
            {
            QPixmap pix("C:/Qt/images/lave.jpg");
            ui->labelPic->setPixmap(pix);
            }
        break ;
        case (5) :
            {
            QPixmap pix("C:/Qt/images/desert.jpg");
            ui->labelPic->setPixmap(pix);
            }
        break ;
        case (6) :
            {
            QPixmap pix("C:/Qt/images/plage.jpg");
            ui->labelPic->setPixmap(pix);
            }
        break ;
    }
}


void MainWindow::on_upButton_clicked()
{
    if (allrooms[currentroom]->_neighboors[1] != -1)
    {
        currentroom = allrooms[currentroom]->_neighboors[1] ;
        setroom();
        setimages();
    }
    else ui->debog->setText("impossible to move \n in this direction !");
}


void MainWindow::on_leftButton_clicked()
{
    if (allrooms[currentroom]->_neighboors[0] != -1)
    {
        currentroom = allrooms[currentroom]->_neighboors[0] ;
        setroom();
        setimages();
    }
    else ui->debog->setText("impossible to move \n in this direction !");
}


void MainWindow::on_downButton_clicked()
{
    if (allrooms[currentroom]->_neighboors[3] != -1)
    {
        currentroom = allrooms[currentroom]->_neighboors[3] ;
        setroom();
        setimages();
    }
    else ui->debog->setText("impossible to move \n in this direction !");
}


void MainWindow::on_rightButton_clicked()
{
    if (allrooms[currentroom]->_neighboors[2] != -1)
    {
        currentroom = (allrooms[currentroom]->_neighboors[2]) ;
        setroom();
        setimages();
    }
    else ui->debog->setText("impossible to move \n in this direction !");

}


void MainWindow::on_roomButtton_clicked()
{
    ui->labelMap->setText("[5]----[4]----[6] \n            |\n          [3]\n            |\n[0]----[1]----[2]");
}


