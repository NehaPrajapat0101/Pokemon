#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Utility/Utility.hpp"

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

namespace N_Player
{
    class Player;
}
using namespace N_Utility;

namespace N_Battle{

void BattleManager::startBattle(N_Player::Player &player, N_Pokemon::Pokemon &wildPokemon)
{
	battleState.playerPokemon = player.getChosenPokemon();
	battleState.wildPokemon = &wildPokemon;
	battleState.playerTurn = true; // player starts first
	battleState.battleOngoing = true;
	cout<<"A wild "<<wildPokemon.getName()<<" has appeared!\n"<<endl;
	cout<<battleState.playerPokemon->getName()<<"'s HP: "<<battleState.playerPokemon->getHealth()<<endl;
	cout<<battleState.wildPokemon->getName()<<"'s HP: "<<battleState.wildPokemon->getHealth()<<endl<<endl;
	
	battle();
}

void BattleManager::battle()
{
	updateBattleState();
	
	// check if any pokemon fainted
	while(battleState.battleOngoing)
	{
		// update battle turn after the turn
		updateBattleState();
		
		if(battleState.playerTurn  &&  battleState.playerPokemon->canAttack())
		{
			// player must select his/her move to attack
			battleState.playerPokemon -> selectAndUseMove(battleState.wildPokemon); 
			
		}
		else if(battleState.wildPokemon->canAttack())
		{
			Utility::waitForEnter();
			
			int roll = rand() % 100; // only enemy is going to use normal attack and special move sometimes
			// wild pokemon's turn to attack
			if(roll < 20)
			{
				battleState.wildPokemon -> useSpecialMove(*battleState.playerPokemon);
			}
			else
			{
				battleState.wildPokemon -> attack(*battleState.playerPokemon);
			}
		}
		
		// switch turns
		battleState.playerTurn = !battleState.playerTurn;
		
		// update battle turn after the turn
		updateBattleState();
		
		
		N_Utility::Utility::clearInputBuffer();
		
	}
	
	// determine and display outcome of the battle
	handleBattleOutcome();
}

void BattleManager::handleBattleOutcome()
{
	if(battleState.playerPokemon -> isFainted())
	{
		cout<<"Oh no! "<<battleState.playerPokemon->getName()<<" has fainted! You lose the battle."<<endl;	
		Utility::waitForEnter();
		cout<<"GAME OVER!!!"<<endl;
	}
	else
	{
		cout<<"You defeated the wild "<<battleState.wildPokemon->getName()<<endl;
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


