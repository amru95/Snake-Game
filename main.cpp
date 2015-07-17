#include <iostream>
#include "Game.h"

int main()
{
	enum levels {Level1 = 400, Level2 = 300, Level3 = 200, Level4 = 100, Level5 = 50};
	Game game(Level5, 3, 5, 0);
	game.Update();

	return 0;
}
