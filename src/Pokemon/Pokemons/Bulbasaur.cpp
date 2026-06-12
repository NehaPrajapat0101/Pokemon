#include<iostream>

#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Bulbasaur::Bulbasaur()
			:Pokemon("Bulbasaur", PokemonType::GRASS, 100, 35)
		{
		}
		
		void Bulbasaur::useSpecialMove(Pokemon& target)
		{
			vineWhip(target);
		}
		
		void Bulbasaur::vineWhip(Pokemon& target)
		{
			cout<<name<<" uses Vine Whip on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(20);
		}
	}
}

