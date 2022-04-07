#ifndef PLAYER_H
#define PLAYER_H

//#include "mainwindow.h"
#include "object.h"
#include <QMessageBox>
#include "mainwindow.h"


#include <iostream>
using namespace std;


class player
{
private:
    int x;
    int y;
public:
    player();
    //void setplayer();
    void moveup();
    void movedown();
    void moveright();
    void moveleft();
    int outofmap();
    int interact(object);
    friend int getx(player p);
    friend int gety(player p);
};


#endif // PLAYER_H
