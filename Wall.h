#ifndef WALL_H
#define WALL_H

class Wall
{
    public:
        Wall();
        void Draw();

    private:
        #define verticalWallLenght 23
        #define horizontalWallLenght 76
        #define _Maplength 198
        int Maplength;
        Brick* Map;

friend class Game;
};

#endif // WALL_H
