#ifndef BRICK_H
#define BRICK_H
#include "Coordinate2D.h"

class Brick : public Coordinate2D
{
    public:
        void Draw(){
            COORD coord;
            coord.X = this->x;
            coord.Y = this->y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord) ;
            std :: cout << char(177);
        }
        void setPosition(int x1, int y1){
            this->x = x1;
            this->y = y1;
        }
        void setPosition(Brick position){
            this->x = position.x;
            this->y = position.y;
        }
        void setPosition(Coordinate2D position){
            this->x = position.x;
            this->y = position.y;
        }

friend class Wall;
};

#endif // BRICK_H
