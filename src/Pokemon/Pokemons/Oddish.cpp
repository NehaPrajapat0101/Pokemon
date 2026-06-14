#include<iostream>

#include "../../../include/Pokemon/Pokemons/Oddish.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Oddish::Oddish()
			:Pokemon("Oddish", PokemonType::GRASS, 110, 28)
		{
		}
		
		void Oddish::useSpecialMove(Pokemon &target)
        {
            absorb(target);
        }
		
		void Oddish::absorb(Pokemon& target)
		{
			cout<<name<<" uses Absorb on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(30);
		}
	}
}

