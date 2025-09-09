#include "lib/header/Game/game.h"
#include <iostream>
#include "lib/Singletons/GameState.h"

int main()
{


	auto& game_state = GameState::get();


	std::cout << game_state.returnCurrentGameState();

	game_state.changeGameState(game_states::GAME);

	std::cout << game_state.returnCurrentGameState();

	
	Game *game = new Game();
	
	std::cout << "hello";
	game->running();

	delete game;
	return 0;
}