#include<iostream>

#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Charmander::Charmander()
			:Pokemon("Charmander", PokemonType::FIRE, 100, 35)
		{
		}
		
		void Charmander::useSpecialMove(Pokemon &target)
        {
            flameBurst(target);
        }
		
		void Charmander::flameBurst(Pokemon& target)
		{
			cout<<name<<" uses Flame Burst on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(20);
		}
	}
}

