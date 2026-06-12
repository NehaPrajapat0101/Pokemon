#include<iostream>

#include "../../../include/Pokemon/Pokemons/Psyduck.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Psyduck::Psyduck()
			:Pokemon("Psyduck", PokemonType::WATER, 100, 18)
		{
		}
		
		void Psyduck::useSpecialMove(Pokemon &target)
        {
            waterPulse(target);
        }
		
		void Psyduck::waterPulse(Pokemon& target)
		{
			cout<<name<<" uses Water Pulse on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(40);
		}
	}
}

