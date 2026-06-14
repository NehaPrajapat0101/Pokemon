#include<iostream>

#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Caterpie::Caterpie()
			:Pokemon("Caterpie", PokemonType::BUG, 100, 15)
		{
		}
		
		void Caterpie::useSpecialMove(Pokemon &target)
        {
            bugBite(target);
        }
		
		void Caterpie::bugBite(Pokemon& target)
		{
			cout<<name<<" uses Bug Bite on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(20);
		}
	}
}

