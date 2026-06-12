#include<iostream>

#include "../../../include/Pokemon/Pokemons/Magmar.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Magmar::Magmar()
			:Pokemon("Magmar", PokemonType::FIRE, 100, 22)
		{
		}
		
		void Magmar::useSpecialMove(Pokemon &target)
        {
            flameThrower(target);
        }
		
		void Magmar::flameThrower(Pokemon& target)
		{
			cout<<name<<" uses Flamethrower on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(55);
		}
	}
}

