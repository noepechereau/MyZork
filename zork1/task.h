#ifndef TASK_H
#define TASK_H
#include <iostream>
using namespace std;
#include "player.h"

class task
{
public:
    int number;
    string text;
    task(int _number, string _text);
    bool did ;
};

#endif // TASK_H
