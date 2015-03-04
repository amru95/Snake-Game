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
        enum  Directions {Left, Right, Up, Down} SnakeDirection;
        void intalize(int length=3){
            Length=length;
            SnakeDirection = Right;
            Body = new Brick[1000];
            Body[0].setPosition(39,12);
            for(int i=1;i<Length;i++)
                Body[i].setPosition(Body[i-1].x -1, Body[i-1].y);
        }
        void Move(){
            for(int i=Length-1;i>0;i--)
                Body[i].setPosition(Body[i-1]);
            if(SnakeDirection == Right)
                Body[0].setPosition(Body[0].x + 1, Body[0].y);
            else if(SnakeDirection == Left)
                Body[0].setPosition(Body[0].x -1 , Body[0].y);
            else if(SnakeDirection == Up)
                Body[0].setPosition(Body[0].x , Body[0].y - 1);
            else
                Body[0].setPosition(Body[0].x , Body[0].y + 1);
        }
        void Draw(){
            for(int i=0;i<Length;i++)
                Body[i].Draw();
        }
        void keyboardControl();

friend class Food;
friend class KeyboardControl;

friend class Game;
};

#endif // SNAKE_H