#include "Game.h"

Game::Game(int _Level, int _PlayerLives=3, int _SnakeLength = 3, int _score = 0)
{
    SnakeLength = _SnakeLength;
    snake.intalize(SnakeLength);
    food.Intalize(snake);
    PlayerLives = _PlayerLives;
    Level = _Level;
    score = _score;
}