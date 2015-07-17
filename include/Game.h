#ifndef GAME_H
#define GAME_H
#include "Snake.h"
#include "Wall.h"
#include "Food.h"
#include "KeyboardControl.h"
#include <cstdio>

class Game
{
    private:
        Snake snake;
        Food food;
        Wall wall;
        KeyboardControl kbControl;
        int PlayerLives, SnakeLength, Level;
        int score = 0;

    public:
        Game(int , int , int, int);
        void Draw();
        bool hitfood(Snake& s, Food& f);
        bool hitItself(Snake& s);
        bool hitItwall(Snake& s, Wall& w);
        void GameLogic(Snake& s, Food& f, Wall& w);
        void Update();
};

#endif // GAME_H
