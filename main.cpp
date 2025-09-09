#include "lib/header/game.h"
#include <iostream>

int main()
{
	Game *game = new Game();
	
	
	game->running();

	delete game;
	return 0;
}