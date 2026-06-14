#include<iostream>

#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Squirtle::Squirtle()
			:Pokemon("Squirtle", PokemonType::WATER, 100, 35, {Move("RAPID SPIN", 80)})
		{
		}
		
		void Squirtle::attack(Pokemon& target, Move selectedMove)
		{
			
			int missedAttack = rand() % 100;
			
			if(selectedMove.moveName == "RAPID SPIN" && missedAttack < 70)
			{
				std::cout<<"Oh! God "<<target.getName()<<" dodged the rapid spin hit!"<<endl;
			}
			else
			{
				Pokemon::attack(target, selectedMove);
			}
		}
	}
}

