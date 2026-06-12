#include<iostream>

#include "../../../include/Pokemon/Pokemons/Poliwag.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Poliwag::Poliwag()
			:Pokemon("Poliwag", PokemonType::BUG, 100, 15)
		{
		}
		
		void Poliwag::useSpecialMove(Pokemon &target)
        {
            bubbleBeam(target);
        }
		
		void Poliwag::bubbleBeam(Pokemon& target)
		{
			cout<<name<<" uses Bubble Beam on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(35);
		}
	}
}

