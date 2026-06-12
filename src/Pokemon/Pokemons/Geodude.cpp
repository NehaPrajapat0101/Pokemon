#include<iostream>

#include "../../../include/Pokemon/Pokemons/Geodude.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Geodude::Geodude()
			:Pokemon("Geodude", PokemonType::ROCK, 100, 15)
		{
		}
		
		void Geodude::useSpecialMove(Pokemon &target)
        {
            rockThrow(target);
        }
		
		void Geodude::rockThrow(Pokemon& target)
		{
			cout<<name<<" uses Rock Throw on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(35);
		}
	}
}

