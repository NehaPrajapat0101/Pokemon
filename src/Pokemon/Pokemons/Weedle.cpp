#include<iostream>

#include "../../../include/Pokemon/Pokemons/Weedle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Weedle::Weedle()
			:Pokemon("Weedle", PokemonType::BUG, 100, 15)
		{
		}
		
		void Weedle::poisonSting(Pokemon& target)
		{
			cout<<name<<" uses Poison Sting on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(25);
		}
		
		void Weedle::useSpecialMove(Pokemon &target)
        {
            poisonSting(target);
        }
	}
}

