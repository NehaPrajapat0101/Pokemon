#include "./PokemonType.hpp"   
#include "./PokemonChoice.hpp"
#include "./Utility.hpp"
#include "./Player.hpp"
#include<iostream>

using namespace std;


		// constructors
Player::Player() // default constructor
{
	name = "Trainer";
//	chosen_pokemon = Pokemon();  // using default constructor of Pokemon class
	cout<<"A new player named "<<name<<" has been created!"<<endl;
}


Player::Player(string name, Pokemon chosen_pokemon) //parameterized constructor
{
	this->name = name;
	this->chosen_pokemon = chosen_pokemon;
	cout<<"Player "<<name<<" has been created!"<<endl;
}


// method to choose a pokemon
void Player::choosePokemon(int choice)
{
	switch((PokemonChoice)choice)
	{
		case PokemonChoice::CHARMANDER:
			chosen_pokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
			break;
			
		case PokemonChoice::BULBASAUR:
			chosen_pokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
			break;
		
		case PokemonChoice::SQUIRTLE:
			chosen_pokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
			break;
		
		default:
			chosen_pokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
			break;
	}
	
	cout<<"Player "<<name<<" chose "<<chosen_pokemon.name<<"!"<<endl;
	Utility::waitForEnter();
}
	
