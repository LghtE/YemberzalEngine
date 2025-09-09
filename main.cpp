#include "lib/header/game.h"
#include <iostream>

int main()
{
	Game *game = new Game();
	
	std::cout << "hello";
	game->running();

	delete game;
	return 0;
}