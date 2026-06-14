#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Pokemon/Pokemons/PokemonsHeader.hpp"

#include<iostream>

using namespace std;
using namespace N_Pokemon::N_Pokemons;

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
				new Pidgey(),
				new Caterpie(),
				new Weedle(),
				new Oddish(),
			}
		}
	);
	
	grassAreas.push_back(
		Grass
		{
			"Cave",
			80,
			{
				new Zubat(),
			 	new Onix(),
			 	new Diglett()
			}
		}
	);
	
	grassAreas.push_back(
		Grass
		{
			"River Bank",
			60,
			{
				new Psyduck(),
				new Poliwag(),
				new Magikarp(),
				new Wooper()
			}
		}
	);
	
	grassAreas.push_back(
		Grass
		{
			"Mountain",
			50,
			{
				new Machop(),
				new Geodude(),
				new Mankey()
			}
		}
	);
	
	grassAreas.push_back(
		Grass
		{
			"Volcano",
			40,
			{
				new Magmar(),
				new Slugma(),
				new Numel(),
				new Torkoal()
			}
		}
	);
	
	grassAreas.push_back( 
		Grass
		{
			"Snow Field",
			50,
			{
				new Snorunt(),
				new Sneasel(),
				new Swinub(),
				new Delibird()
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
		cout<<"\nWhat would you like to do next, "<<player.getName()<<"?"<<endl;
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
					Pokemon* encounteredPokemon = encounterManager.getRandomPokemonFromGrass(selectedGrass);
					cout<<"You are exploring the "<<selectedGrass.environmentType<<"."<<endl;
					battleManager.startBattle(player, *encounteredPokemon);
					break;
				}
			
			case 2:
				{
					cout<<"You head to the PokeCenter"<<endl;
					player.getChosenPokemon()->heal();  // heals the player's pokemon
					cout<<player.getChosenPokemon()->getName()<<"'s health is fully restored!"<<endl;
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
	cout<<"Goodbye, "<<player.getName()<<"! Thanks for playing!"<<endl;
}

Game::~Game()
{
	delete wildPokemon;
}

}

