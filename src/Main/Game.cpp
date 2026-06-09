#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Battle/BattleManager.hpp"

#include<iostream>

using namespace std;

using namespace N_Pokemon;
using namespace N_Battle;
using namespace N_Player;
using namespace N_Utility;

namespace N_Main{

Game::Game()
{
	
	
	grassAreas.push_back(
		Grass
		{
			"Forest",
			70,
			{
				Pokemon("Pidgey", PokemonType::NORMAL, 40, 8),
			 	Pokemon("Caterpie", PokemonType::BUG, 35, 5),
			 	Pokemon("Weedle", PokemonType::BUG, 35, 6),
			 	Pokemon("Oddish", PokemonType::GRASS, 45, 9)
			}
		}
	);
	
	grassAreas.push_back(
		Grass
		{
			"Cave",
			80,
			{
				Pokemon("Zubat", PokemonType::POISON, 45, 10),
			 	Pokemon("Geodude", PokemonType::ROCK, 60, 12),
			 	Pokemon("Onix", PokemonType::ROCK, 80, 15),
			 	Pokemon("Diglett", PokemonType::GROUND, 40, 11)
			}
		}
	);
	
	grassAreas.push_back(
		Grass
		{
			"River Bank",
			60,
			{
				Pokemon("Psyduck", PokemonType::WATER, 50, 10),
				Pokemon("Poliwag", PokemonType::WATER, 45, 8),
				Pokemon("Magikarp", PokemonType::WATER, 30, 3),
				Pokemon("Wooper", PokemonType::WATER, 50, 7)
			}
		}
	);
	
	grassAreas.push_back(
		Grass
		{
			"Mountain",
			50,
			{
				Pokemon("Machop", PokemonType::FIGHTING, 65, 14),
				Pokemon("Geodude", PokemonType::ROCK, 60, 12),
				Pokemon("Onix", PokemonType::ROCK, 80, 15),
				Pokemon("Mankey", PokemonType::FIGHTING, 55, 13)
			}
		}
	);
	
	grassAreas.push_back(
		Grass
		{
			"Mountain",
			40,
			{
				Pokemon("Magmar", PokemonType::FIRE, 70, 16),
				Pokemon("Slugma", PokemonType::FIRE, 60, 10),
				Pokemon("Numel", PokemonType::FIRE, 65, 11),
				Pokemon("Torkoal", PokemonType::FIRE, 80, 14)
			}
		}
	);
	
	grassAreas.push_back( 
		Grass
		{
			"Snow Field",
			50,
			{
				Pokemon("Snorunt", PokemonType::ICE, 45, 8),
				Pokemon("Sneasel", PokemonType::ICE, 55, 13),
				Pokemon("Swinub", PokemonType::ICE, 50, 10),
				Pokemon("Delibird", PokemonType::ICE, 45, 9)
			}
		}
	);
}

// function to handle the main game loop
void Game::gameLoop(Player& player)
{
	int choice;
	bool keepPlaying = true;
	BattleManager battleManager;
	
	while(keepPlaying)
	{
		// clear the console before showing options
		Utility::clearConsole();
		
		// displaying options to player
		cout<<"\nWhat would you like to do next, "<<player.name<<"?"<<endl;
		cout<<"1. Battle Wild Pokemon"<<endl;
		cout<<"2. Visit PokeCenter"<<endl;
		cout<<"3. Challenge Gyms"<<endl;
		cout<<"4. Enter Pokemon League"<<endl;
		cout<<"5. Quit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		
		Utility::clearInputBuffer();
		
		// process the player's choice and display the corresponding message
		switch(choice)
		{
			case 1:
				{
					WildEncounterManager encounterManager;
					Grass& selectedGrass = encounterManager.selectEnvironment(grassAreas);
					Pokemon encounteredPokemon = encounterManager.getRandomPokemonFromGrass(selectedGrass);
					cout<<"You are exploring the "<<selectedGrass.environmentType<<"."<<endl;
					battleManager.startBattle(player, encounteredPokemon);
					break;
				}
			
			case 2:
				{
					cout<<"You head to the PokeCenter"<<endl;
					player.chosen_pokemon.heal();  // heals the player's pokemon
					cout<<player.chosen_pokemon.name<<"'s health is fully restored!"<<endl;
					break;
				}
			
			case 3:
				cout<<"You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!"<<endl;
				break;
			
			case 4:
				cout<<"You boldly step towards the Pokemon League... but the gatekeeper laughs and says, Maybe next time, champ!"<<endl;
				break;
			
			case 5:
				cout<<"You try to quit, but Professor Oak's voice echoes: There's no quitting in Pokemon training!"<<endl;
				cout<<"Are you sure you want to quit? (y/n): ";
				char quitChoice;
				cin>>quitChoice;
				
				if(quitChoice == 'y' || quitChoice == 'Y')
				{
					keepPlaying = false;
				}
				break;
			
			default:
				cout<<"That's not a valid choice. Try again!"<<endl;
				break;
		}
		
		// wait for enter key before the screen is cleared and the menu is shown again
		Utility::waitForEnter();
	}
	cout<<"Goodbye, "<<player.name<<"! Thanks for playing!"<<endl;
}
}

