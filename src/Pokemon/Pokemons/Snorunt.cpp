#include<iostream>

#include "../../../include/Pokemon/Pokemons/Snorunt.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Snorunt::Snorunt()
			:Pokemon("Snorunt", PokemonType::ICE, 100, 14)
		{
		}
		
		void Snorunt::useSpecialMove(Pokemon &target)
        {
            iceShard(target);
        }
		
		void Snorunt::iceShard(Pokemon& target)
		{
			cout<<name<<" uses Ice Shard on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(35);
		}
		
	}
}

