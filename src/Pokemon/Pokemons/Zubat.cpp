#include<iostream>

#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Zubat::Zubat()
			:Pokemon("Zubat", PokemonType::POISON, 100, 20)
		{
		}
		
		void Zubat::useSpecialMove(Pokemon &target)
        {
            superSonic(target);
        }
        
        void Zubat::superSonic(Pokemon& target)
		{
			cout<<name<<" uses supersonic on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(20);
		}
	}
}

