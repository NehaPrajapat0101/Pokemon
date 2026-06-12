#include<iostream>

#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Pikachu::Pikachu()
			:Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 15)
		{
		}
		
		void Pikachu::useSpecialMove(Pokemon &target)
        {
            thunderShock(target);
        }
		
		void Pikachu::thunderShock(Pokemon& target)
		{
			cout<<name<<" uses Thunder Shock on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(20);
		}
	}
}

