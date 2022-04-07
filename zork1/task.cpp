#include "task.h"
#include "player.h"
//#include "mainwindow.h"
#include <iostream>
using namespace std;

task::task(int _number,string _text)
{
    number = _number;
    text = _text;
    did = false;
}

