#include "object.h"
//#include "player.h"
//#include "mainwindow.h"
#include <iostream>
using namespace std;

object::object(int _number,int _x,int _y, string _name)
{
    this->number = _number;
    this->x = _x;
    this->y = _y;
    name = _name ;

}
