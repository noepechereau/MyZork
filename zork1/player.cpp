#include "player.h"
//#include "object.h"
//#include "mainwindow.h"
#include <iostream>
using namespace std;

player::player()
{
    x = 540 ;
    y = 310 ;
}

void player::moveup(){
    int& _y = this->y ;
    _y -= 15;
}
void player::movedown(){
    int& _y = this->y ;
    _y += 15;
}
void player::moveleft(){
    int& _x = this->x;
    _x -= 15;
}
void player::moveright(){
    int& _x = this->x;
    _x += 15;
}

int player::outofmap(){
    if (this->x > 564 ){
        this->x = 564;
        return 1;
    }
    if( this->x < 4 ){
        this->x = 4;
        return 1;
    }
    if( this->y > 342){
        this->y = 342;
        return 1;
    }
    if (this->y < 4){
        this->y = 4;
        return 1;
    }
    return 0;
}

int player::interact(object obj){
    if(this->x == obj.x && this->y == obj.y){
          return obj.number;
    }
    return -1 ;
}

int getx(player p){
    return p.x;
}

int gety(player p){
    return p.y;
}


