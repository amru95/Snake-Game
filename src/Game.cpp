#include "Game.h"
#include "Snake.h"
#include "Wall.h"
#include "Food.h"
#include "KeyboardControl.h"
#include <windows.h>
#include <conio.h>

Game :: Game(int _Level, int _PlayerLives=3, int _SnakeLength = 3, int _score = 0)
{
    SnakeLength = _SnakeLength;
    snake.intalize(SnakeLength);
    food.Intalize(snake);
    PlayerLives = _PlayerLives;
    Level = _Level;
    score = _score;
}

void Game :: Draw(){
    system("CLS");
    snake.Draw();
    food.Draw();
    wall.Draw();
}

bool Game :: hitfood(Snake& s, Food& f){
    return (s.Body[0] == f.apple);
}

bool Game :: hitItself(Snake& s){
    for(int i=1;i<s.Length;i++)
        if(s.Body[0] == s.Body[i] )
            return true;
    return false;
}

bool Game :: hitItwall(Snake& s, Wall& w){
    for(int i=0;i<w.Maplength;i++)
        if(s.Body[0] == w.Map[i] )
            return true;
    return false;
}

void Game :: GameLogic(Snake& s, Food& f, Wall& w){
    if(hitfood(s,f)){
        s.Length++;
        s.Move();
        s.Draw();
        f.Intalize(s);
        score += 1;
    }
    else if ( hitItself(s) || hitItwall(s,w) ){
        Game game(Level, --PlayerLives,SnakeLength, score);
        game.Update();
    }
}

void Game :: Update(){
    while(PlayerLives > 0){
        if(kbhit())
            kbControl.update(snake);
        snake.Move();
        GameLogic(snake, food, wall);
        Draw();
        printf("\nScore: %d",score);
        Sleep(Level);
    }
    exit(0);
}
