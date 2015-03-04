#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include "Snake.cpp"
#include "Wall.cpp"
#include "Game.cpp"

int main()
{
	enum levels {Level1 = 400, Level2 = 300, Level3 = 200, Level4 = 100, Level5 = 50};
	Game game(Level5, 3, 5);
	game.Update();

	return 0;
}