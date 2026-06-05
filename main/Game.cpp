#include "./Game.hpp"
#include "./Player.hpp"
#include "PokemonType.hpp"
#include "./Utility.hpp"
#include "./WildEncounterManager.hpp"

#include<iostream>

using namespace std;

Game::Game()
{
	forestGrass = 
	{
		"Forest",
		70,
		{Pokemon("Pidgey", PokemonType::NORMAL, 40),
		 Pokemon("Caterpie", PokemonType::BUG, 35)
		}
	};
	
	caveGrass = 
	{
		"Cave",
		80,
		{Pokemon("Zubat", PokemonType::POISON, 30),
		 Pokemon("Geodude", PokemonType::ROCK, 50)
		}
	};
}

// function to handle the main game loop
void Game::gameLoop(Player& player)
{
	int choice;
	bool keepPlaying = true;
	
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
					Pokemon encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);;
					cout<<"A wild "<<encounteredPokemon.name<<" appeared!"<<endl;
					break;
				}
			
			case 2:
				cout<<"You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!"<<endl;
				break;
			
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
