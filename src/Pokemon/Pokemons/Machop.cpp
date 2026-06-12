#include<iostream>

#include "../../../include/Pokemon/Pokemons/Machop.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Machop::Machop()
			:Pokemon("Machop", PokemonType::FIGHTING, 100, 20)
		{
		}
		
		void Machop::useSpecialMove(Pokemon &target)
        {
            karateChop(target);
        }
		
		void Machop::karateChop(Pokemon& target)
		{
			cout<<name<<" uses Karate Chop on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(45);
		}
	}
}

