#include "lib/header/Game/game.h"
#include <iostream>
#include <string>

#include "lib/Singletons/GameState.h"

#include "lib/header/Tiles/tileMapper.h"

int main()
{


	auto& game_state = GameState::get();

	Game *game = new Game();
	
	TileMapper *tm = new TileMapper();

	std::string s = "Misc/TestSprites/tech_bg.png";
	tm->loadTilesheet(s);
	tm->loadTileArray();
	tm->mapTiles();



	game->running(tm);

	delete game;
	return 0;
}