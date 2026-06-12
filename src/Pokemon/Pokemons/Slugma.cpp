#include<iostream>

#include "../../../include/Pokemon/Pokemons/Slugma.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Slugma::Slugma()
			:Pokemon("Slugma", PokemonType::FIRE, 100, 18)
		{
		}
		
		void Slugma::useSpecialMove(Pokemon &target)
        {
            lavaBurst(target);
        }
		
		void Slugma::lavaBurst(Pokemon& target)
		{
			cout<<name<<" uses Lava Burst on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(45);
		}
	}
}

