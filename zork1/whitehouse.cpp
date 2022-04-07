#include "whitehouse.h"
#include "ui_whitehouse.h"
#include <QPixmap>

whitehouse::whitehouse(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::whitehouse)
{
    ui->setupUi(this);
}

whitehouse::~whitehouse()
{
    delete ui;
}

void whitehouse::setmap(){
    QPixmap pixluigi("C:/Qt/images/luigi.png");
    ui->luigipic->setPixmap(pixluigi);
    ui->luigipic->setScaledContents(true);
}

