#include<iostream>

#include "../../../include/Pokemon/Pokemons/Diglett.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Diglett::Diglett()
			:Pokemon("Diglett", PokemonType::BUG, 100, 16)
		{
		}
		
		void Diglett::useSpecialMove(Pokemon &target)
        {
            dig(target);
        }
		
		void Diglett::dig(Pokemon& target)
		{
			cout<<name<<" uses But Bite on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(40);
		}
	}
}

