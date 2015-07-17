#ifndef BRICK_H
#define BRICK_H
#include <iostream>
#include "Coordinate2D.h"
using namespace std;

class Brick : public Coordinate2D
{
    public:
        void Draw();
        void setPosition(int, int);
        void setPosition(Brick);
        void setPosition(Coordinate2D);

friend class Wall;
};

#endif // BRICK_H
