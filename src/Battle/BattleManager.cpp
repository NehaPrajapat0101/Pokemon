#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Utility/Utility.hpp"

#include<iostream>

using namespace std;

namespace N_Player
{
    class Player;
}
using namespace N_Utility;

namespace N_Battle{

void BattleManager::startBattle(N_Player::Player &player, N_Pokemon::Pokemon &wildPokemon)
{
	battleState.playerPokemon = &player.chosen_pokemon;
	battleState.wildPokemon = &wildPokemon;
	battleState.playerTurn = true; // player starts first
	battleState.battleOngoing = true;
	cout<<"A wild "<<wildPokemon.name<<" has appeared!"<<endl;
	
	battle();
}

void BattleManager::battle()
{
	// check if any pokemon fainted
	while(battleState.battleOngoing)
	{
		if(battleState.playerTurn)
		{
			// player's turn to attack
			battleState.playerPokemon -> attack(*battleState.wildPokemon); 
		}
		else
		{
			// wild pokemon's turn to attack
			battleState.wildPokemon -> attack(*battleState.playerPokemon);
		}
		
		// update battle turn after the turn
		updateBattleState();
		
		// switch turns
		battleState.playerTurn = !battleState.playerTurn;
		
		Utility::waitForEnter();  // pause to show the result of each round
		
	}
	
	// determine and display outcome of the battle
	handleBattleOutcome();
}

void BattleManager::handleBattleOutcome()
{
	if(battleState.playerPokemon -> isFainted())
	{
		cout<<"Oh no! "<<battleState.playerPokemon->name<<" has fainted! You lose the battle."<<endl;	
	}
	else
	{
		cout<<"You defeated the wild "<<battleState.wildPokemon->name<<endl;
		Utility::waitForEnter();
		cout<<"GAME OVER!!!"<<endl;
	}
}

void BattleManager::updateBattleState()
{
	if(battleState.playerPokemon -> isFainted())
	{
		battleState.battleOngoing = false;
	}
	else if(battleState.wildPokemon -> isFainted())
	{
		battleState.battleOngoing = false;
	}
}
}


