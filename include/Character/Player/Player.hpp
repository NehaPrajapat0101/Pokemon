//#include "./PokemonType.hpp"   
//#include "./PokemonChoice.hpp"
//#include "./Utility.hpp"
// these header files are not included here as we are going to include this file in main.cpp and also we will explicitly include all
//these files in main.cpp, hence these will be include twice. so to avoid this problem we will include these files in palyer.cpp

#pragma once
#include<string>
#include "../../Pokemon/Pokemon.hpp"

using namespace std;

namespace N_Player{

// player class declarations only
class Player
{
	public:
		// attributes
		string name;
		N_Pokemon::Pokemon chosen_pokemon;
		
		// constructors
		Player(); //default constructor
		Player(string name, N_Pokemon::Pokemon chosen_pokemon); //parameterized constructor
		
		// method to choose a pokemon
		void choosePokemon(int choice);
};

}
