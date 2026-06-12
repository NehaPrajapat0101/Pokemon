#include "../../../include/Pokemon/PokemonType.hpp"   
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Utility/Utility.hpp"
#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include<iostream>

using namespace std;
using namespace N_Pokemon;
using namespace N_Utility;

namespace N_Player{

		// constructors
Player::Player() // default constructor
{
	name = "Trainer";
	chosen_pokemon = nullptr;  // using default constructor of Pokemon class
	cout<<"A new player named "<<name<<" has been created!"<<endl;
}


Player::Player(string name, Pokemon* chosen_pokemon) //parameterized constructor
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
			chosen_pokemon = new N_Pokemon::N_Pokemons::Charmander();;
			break;
			
		case PokemonChoice::BULBASAUR:
			chosen_pokemon = new N_Pokemon::N_Pokemons::Bulbasaur();
			break;
		
		case PokemonChoice::SQUIRTLE:
			chosen_pokemon = new N_Pokemon::N_Pokemons::Squirtle();
			break;
		
		default:
			chosen_pokemon = new N_Pokemon::N_Pokemons::Pikachu();
			break;
	}
	
	cout<<"Player "<<name<<" chose "<<chosen_pokemon->getName()<<"!"<<endl;
	Utility::waitForEnter();
}

N_Pokemon::Pokemon* Player::getChosenPokemon()
{
	return chosen_pokemon;
}

string Player::getName()
{
	return name;
}

void Player::setName(string name)
{
	this->name = name;
}

}
	
