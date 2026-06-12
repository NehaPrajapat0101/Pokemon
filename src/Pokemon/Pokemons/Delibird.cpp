#include<iostream>

#include "../../../include/Pokemon/Pokemons/Delibird.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Delibird::Delibird()
			:Pokemon("Delibird", PokemonType::ICE, 100, 18)
		{
		}
		
		void Delibird::useSpecialMove(Pokemon &target)
        {
            presentBomb(target);
        }
		
		void Delibird::presentBomb(Pokemon& target)
		{
			cout<<name<<" uses Present Bomb on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(45);
		}
	}
}

