#include "wordle.h"
#include "ui_wordle.h"

wordle::wordle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::wordle)
{
    ui->setupUi(this);
}

wordle::~wordle()
{
    delete ui;
}



void wordle::on_pushButton_clicked()
{
    if(isgood() == false){
        ui->one->setText("");
        ui->two->setText("");
        ui->three->setText("");
        ui->label->setText("that's wrong !");
    }
    else {
        ui->label->setText("congratulation you solve the problem !");
        finish = true;
    }
}

bool wordle::isgood(){
    if((ui->one->toPlainText() == "S" && ui->two->toPlainText() == "U" && ui->three->toPlainText() == "N") ||
            (ui->one->toPlainText() == "s" && ui->two->toPlainText() == "u" && ui->three->toPlainText() == "n")){
        return true;
    }
    else{
        return false;
    }
}

void wordle::setmap(){
    ui->one->setStyleSheet("backgroud-color:green");
    ui->two->setStyleSheet("backgroud-color:green");
    ui->three->setStyleSheet("backgroud-color:green");
}
