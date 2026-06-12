#include<iostream>

#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Squirtle::Squirtle()
			:Pokemon("Squirtle", PokemonType::WATER, 100, 35)
		{
		}
		
		void Squirtle::waterSplash(Pokemon& target)
		{
			cout<<name<<" uses Water Splash on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(20);
		}
		
		void Squirtle::useSpecialMove(Pokemon &target)
        {
            waterSplash(target);
        }
	}
}

