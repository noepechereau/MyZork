#ifndef OBJECT_H
#define OBJECT_H

//#include "mainwindow.h"
//class player;
#include <iostream>
using namespace std;

class object
{
public:
    object(int _number,int _x,int _y,string _name);
    int number;
    string name;
    int x;
    int y;
};

#endif // OBJECT_H
