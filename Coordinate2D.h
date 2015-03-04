#ifndef COORDINATE2D_H
#define COORDINATE2D_H

class Coordinate2D
{
    protected:
        int x,y;

    public:
        void set(int x1, int y1) { x=x1; y=y1;}
        bool operator == (const Coordinate2D& v2){
                return(x == v2.x && y == v2.y);
        }

friend class Brick;
friend class Snake;
friend class Food;
friend class Game;
};

#endif // COORDINATE2D_H