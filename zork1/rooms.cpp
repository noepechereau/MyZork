#include "rooms.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <vector>


using namespace std;

rooms::rooms(int name, vector<int> vec)
{
    this->_name = name ;
    this->_neighboors = vec ;
}




