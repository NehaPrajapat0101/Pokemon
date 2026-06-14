#include<iostream>

#include "../../../include/Pokemon/Pokemons/Torkoal.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Torkoal::Torkoal()
			:Pokemon("Torkoal", PokemonType::FIRE, 200, 55)
		{
		}
		
		void Torkoal::heatWave(Pokemon& target)
		{
			cout<<name<<" uses Heat Wave on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(60);
		}
		
		void Torkoal::useSpecialMove(Pokemon &target)
        {
            heatWave(target);
        }
	}
}

