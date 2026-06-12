#include<iostream>

#include "../../../include/Pokemon/Pokemons/Numel.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Numel::Numel()
			:Pokemon("Numel", PokemonType::FIRE, 100, 16)
		{
		}
		
		void Numel::useSpecialMove(Pokemon &target)
        {
            emberCharge(target);
        }
		
		void Numel::emberCharge(Pokemon& target)
		{
			cout<<name<<" uses Ember Charge on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(40);
		}
	}
}

