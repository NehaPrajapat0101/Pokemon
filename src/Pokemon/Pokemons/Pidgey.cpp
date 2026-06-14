#include<iostream>

#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Pidgey::Pidgey()
			:Pokemon("Pidgey", PokemonType::NORMAL, 100, 25)
		{
		}
		
		void Pidgey::useSpecialMove(Pokemon &target)
        {
            wingAttack(target);
        }
		
		void Pidgey::wingAttack(Pokemon& target)
		{
			cout<<name<<" uses Wing Attack on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(35);
		}
	}
}

