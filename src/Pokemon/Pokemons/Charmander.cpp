#include<iostream>

#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Charmander::Charmander()
			:Pokemon("Charmander", PokemonType::FIRE, 100, 30, {Move("BLAZING CHARGE", 70)})
		{
		}
		
		void Charmander::attack(Pokemon& target, Move selectedMove)
		{
			Pokemon::attack(target, selectedMove);
			
			if(selectedMove.moveName == "BLAZING CHARGE")
			{
				// this special move will cost a recoil damage to charmander itself of 10 hp
				std::cout<<"Charmader will itself have a recoil damage of 10hp while using this special move."<<endl;
				Pokemon::TakeDamage(10);
			}
		}
	}
}

