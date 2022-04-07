#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "player.h"
//#include "object.h"
//#include "dialog.h"
#include "task.h"
#include <QPixmap>
#include <iostream>
#include <QMessageBox>
using namespace std;

player *p1 = new player();


object *meathouse = new object(0,150,265,"meathouse");
object *rock = new object(3,300,205,"rock");
object *housedinner = new object(1,465,265,"housedinner");
object *whitehouse = new object(2,450,145,"whitehouse");
object *yellowhouse = new object(10,172,126,"yellowhouse");
object *redhouse = new object(5,60,130,"redhouse");
object *well = new object(6,76,310,"well");
object *wood = new object(7,340,238,"wood");
object *purplehouse = new object(8,480,70,"purplehouse");


object objectlist[9] = {*meathouse,*rock,*housedinner,*whitehouse,*yellowhouse,*redhouse,*well,*wood,*purplehouse};


task *task0 = new task(0,"you have to buy meat this is your task 0");
task *task1 = new task(1,"Congratulation you've got meat. Now, bring this meat to the dinner house");
task *task2 = new task(2,"lets go visit our old friend to the white house !");
task *task3 = new task(3,"let's go find some stone");
task *task4 = new task(4,"now bring that stone to luigi");
task *task5 = new task(5,"let's go recup the final key to the red house");
task *task6 = new task(6,"congratulations, you won the game !");

task tasklist[7] = {*task0,*task1,*task2,*task3,*task4,*task5,*task6};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->dialogbutton, SIGNAL(click()), this, SLOT(openNewWindow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


int MainWindow::setposition()
{
    ui->labelplayer->move(getx(*p1),gety(*p1));
    ui->labelcoor->setText(QString::number(getx(*p1)) +" "+ QString::number(gety(*p1)) + " ");
    for (int i = 0 ; i < 9 ; i ++ ) {
        if (p1->interact(objectlist[i]) != -1 ){
            ui->labelcoor->setText(QString::fromStdString(objectlist[i].name));
            return p1->interact(objectlist[i]);
        }
    }
    return -1;
}

void MainWindow::setmap()
{
     QPixmap pixmap("C:/Qt/images/map.png");
     ui->labelmap->setPixmap(pixmap);
     ui->labelmap->setScaledContents(true);

     QPixmap pixplayer("C:/Qt/images/player.png");
     ui->labelplayer->setPixmap(pixplayer);
     ui->labelplayer->setScaledContents(true);

     QPixmap pixmeat("C:/Qt/images/meat.png");
     ui->meatpic->setPixmap(pixmeat);
     ui->meatpic->setScaledContents(true);

     QPixmap pixrock("C:/Qt/images/rock.png");
     ui->rockpic->setPixmap(pixrock);
     ui->rockpic->setScaledContents(true);

     QPixmap pixkey("C:/Qt/images/key.png");
     ui->keypic->setPixmap(pixkey);
     ui->keypic->setScaledContents(true);

     QPixmap pixback("C:/Qt/images/background.png");
     ui->background->setPixmap(pixback);
     ui->background->setScaledContents(true);

     ui->upButton->setStyleSheet("background-color: darkMagenta");
     ui->downButton->setStyleSheet("background-color: darkMagenta");
     ui->leftButton->setStyleSheet("background-color: darkMagenta");
     ui->rightButton->setStyleSheet("background-color: darkMagenta");

     for ( int i = 0 ; i < 7 ; i ++ ) {
         if (tasklist[i].did == false){
             ui->tasklabel->setText(QString::fromStdString(tasklist[i].text) );
             break;
         }
     }
}
void MainWindow::on_upButton_clicked()
{
    p1->moveup();
    if(p1->outofmap() == 1){
        QMessageBox::information(this,tr("WARNING"),tr("You're out of map !"));
    }
    setposition();
}


void MainWindow::on_leftButton_clicked()
{
    p1->moveleft();
    if(p1->outofmap() == 1){
        QMessageBox::information(this,tr("WARNING"),tr("You're out of map !"));
    }
    setposition();
}


void MainWindow::on_downButton_clicked()
{
    p1->movedown();
    if(p1->outofmap() == 1){
        QMessageBox::information(this,tr("WARNING"),tr("You're out of map !"));
    }
    setposition();
}


void MainWindow::on_rightButton_clicked()
{
    p1->moveright();
    if(p1->outofmap() == 1){
        QMessageBox::information(this,tr("WARNING"),tr("You're out of map !"));
    }
    setposition();
}





int MainWindow::on_interactbutton_clicked()
{
    switch (this->setposition()){
    case (0):
        if (tasklist[0].did == false){
            tasklist[0].did = true;
            ui->labelmeat->setText("5");
            setmap();
        }
        break;
    case (1):
        if (tasklist[1].did == false){
            ui->labelmeat->setText("0");
            tasklist[1].did = true;
            setmap();
        }
        break;
    case(2):
        if(tasklist[2].did == true && tasklist[3].did == true){
            ui->labelrock->setText("0");
            tasklist[4].did = true;
            setmap();
        }
        if (tasklist[2].did == false){
            tasklist[2].did = true;
            wh.setmap();
            wh.show();
            setmap();
        }
        break;
    case(3):
        if (tasklist[3].did == false){
            tasklist[3].did = true ;
            ui->labelrock->setText("5");
            setmap();
        }
        break;
    case(5):
        if (tasklist[5].did == false){
            tasklist[5].did = true ;
            //wd.setStyleSheet("background-color: darkGreen");
            wd.setmap();
            wd.show();
            ui->labelkey->setText("1");
            setmap();
        }
        break;
    default:
        return -1;
    }
    return 4;
}



