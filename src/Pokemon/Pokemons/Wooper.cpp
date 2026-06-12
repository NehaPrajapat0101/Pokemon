#include<iostream>

#include "../../../include/Pokemon/Pokemons/Wooper.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Wooper::Wooper() 
			:Pokemon("Wooper", PokemonType::WATER, 100, 14)
		{
		}
		
		void Wooper::mudShot(Pokemon& target)
		{
			cout<<name<<" uses Mud Shot on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(35);
		}
		
		void Wooper::useSpecialMove(Pokemon &target)
        {
            mudShot(target);
        }
	}
}

