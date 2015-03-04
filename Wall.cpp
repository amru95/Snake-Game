#include "Wall.h"

Wall::Wall()
{
    Maplength = _Maplength;
    Map = new Brick[Maplength];
    for(int i=0;i<verticalWallLenght;i++){
        Map[i].setPosition(1,i+1);
        Map[i+verticalWallLenght].setPosition(78,i+1);
    }
    for(int i=0;i<horizontalWallLenght;i++){
        Map[2*verticalWallLenght + i].setPosition(i+2,1);
        Map[2*verticalWallLenght + horizontalWallLenght + i].setPosition(i+2,23);
    }
}