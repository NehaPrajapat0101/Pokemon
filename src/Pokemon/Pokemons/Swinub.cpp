#include<iostream>

#include "../../../include/Pokemon/Pokemons/Swinub.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Swinub::Swinub()
			:Pokemon("Swinub", PokemonType::ICE, 100, 16)
		{
		}
		
		void Swinub::useSpecialMove(Pokemon &target)
        {
            powderSnow(target);
        }
		
		void Swinub::powderSnow(Pokemon& target)
		{
			cout<<name<<" uses Powder Snow on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(40);
		}
	}
}

