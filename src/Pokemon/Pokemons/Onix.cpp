#include<iostream>

#include "../../../include/Pokemon/Pokemons/Onix.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Onix::Onix()
			:Pokemon("Onix", PokemonType::BUG, 100, 18)
		{
		}
		
		void Onix::useSpecialMove(Pokemon &target)
        {
            rockSlide(target);
        }
		
		void Onix::rockSlide(Pokemon& target)
		{
			cout<<name<<" uses Rock Slide on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(45);
		}
	}
}

