#include<iostream>

#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Bulbasaur::Bulbasaur()
			:Pokemon("Bulbasaur", PokemonType::GRASS, 100, 35, {Move("VINE WHIP", 25), Move("TACKLE", 10)})
		{
		}
		
		void Bulbasaur::attack(Pokemon& target, Move selectedMove)
		{
			Pokemon::attack(target, selectedMove);
			
			if(selectedMove.moveName == "VINE WHIP")
			{
				// chance for second hit(50% chance)
				
				int secondHitChance = rand() % 100;
				
				if(secondHitChance > 70)
				{
					std::cout<<name<<" hits again with a second "<<selectedMove.moveName<<"!"<<endl;
					Pokemon::attack(target, selectedMove);
				}
				else
				{
					std::cout<<target.getName()<<" dodged the second hit!"<<endl;
				}
			}
		}
	}
}

