#include<iostream>

#include "../../../include/Pokemon/Pokemons/Sneasel.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Sneasel::Sneasel()
			:Pokemon("Sneasel", PokemonType::ICE, 150, 50)
		{
		}
		
		void Sneasel::iceClaw(Pokemon& target)
		{
			cout<<name<<" uses Ice Claw on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(50);
		}
		
		void Sneasel::useSpecialMove(Pokemon &target)
        {
            iceClaw(target);
        }
	}
}

