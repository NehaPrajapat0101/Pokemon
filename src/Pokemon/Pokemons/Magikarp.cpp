#include<iostream>

#include "../../../include/Pokemon/Pokemons/Magikarp.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Magikarp::Magikarp()
			:Pokemon("Magikarp", PokemonType::WATER, 100, 10)
		{
		}
		
		void Magikarp::useSpecialMove(Pokemon &target)
        {
            splashStrike(target);
        }
		
		void Magikarp::splashStrike(Pokemon& target)
		{
			cout<<name<<" uses Splash Strike on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(20);
		}
	}
}

