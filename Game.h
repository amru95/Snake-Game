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
        void Draw(){
            system("CLS");
            snake.Draw();
            food.Draw();
            wall.Draw();
        }
        bool hitfood(Snake& s, Food& f){
            return (s.Body[0] == f.apple);
        }
        bool hitItself(Snake& s){
            for(int i=1;i<s.Length;i++)
                if(s.Body[0] == s.Body[i] )
                    return true;
            return false;
        }
        bool hitItwall(Snake& s, Wall& w){
            for(int i=0;i<w.Maplength;i++)
                if(s.Body[0] == w.Map[i] )
                    return true;
            return false;
        }
        void GameLogic(Snake& s, Food& f, Wall& w){
            if(hitfood(s,f)){
                s.Length++;
                int dirx,diry;
                dirx = diry = 0;
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
        void Update(){
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

};

#endif // GAME_H