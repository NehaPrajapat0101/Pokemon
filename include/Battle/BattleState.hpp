#pragma once
#include "../Pokemon/Pokemon.hpp"

using namespace N_Pokemon;

namespace N_Battle{

struct BattleState
{
	Pokemon *playerPokemon;  // pointer to player's pokemon
	Pokemon *wildPokemon;  // pointer for wild pokemon
	
	bool playerTurn;  // true if it's player's turn
	bool battleOngoing;  // true if battle is still ongoing
	
};
}

