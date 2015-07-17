#ifndef SNAKE_H
#define SNAKE_H
#include "Brick.h"

class Snake
{
    private:
        int Length;
        Brick* Body;

    public:
        Snake();
        enum  Directions { Left, Right, Up, Down} SnakeDirection;
        void intalize(int);
        void Move();
        void Draw();
        void keyboardControl();

friend class Food;
friend class KeyboardControl;
friend class Game;
};

#endif // SNAKE_H
