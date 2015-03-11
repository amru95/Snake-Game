#ifndef COORDINATE2D_H
#define COORDINATE2D_H

class Coordinate2D
{
    protected:
        int x,y;

    public:
        void set(int x1, int y1);
        bool operator == (const Coordinate2D& v2);

friend class Brick;
friend class Snake;
friend class Food;
friend class Game;
};

#endif // COORDINATE2D_H
