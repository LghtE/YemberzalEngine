#include "lib/header/Game/game.h"
#include <iostream>
#include <string>

#include "lib/Singletons/GameState.h"
#include "lib/header/Cameras/basecamera.h"
#include "lib/header/LevelEditor/EditorMouse.h"

#include "lib/header/Tiles/tileMapper.h"

int main()
{


	auto& game_state = GameState::get();

	Game *game = new Game();
	
	TileMapper *tm = new TileMapper();
	BaseCamera cam(game->returnWindowSize().x, game->returnWindowSize().y);
	EditorMouse ed_mouse;

	std::string s = "Misc/TestSprites/tech_bg.png";
	tm->loadTilesheet(s);
	tm->loadTileArray();


	game->running(tm, cam, ed_mouse);

	delete game;
	return 0;
}