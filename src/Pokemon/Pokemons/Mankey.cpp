#include<iostream>

#include "../../../include/Pokemon/Pokemons/Mankey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Mankey::Mankey()
			:Pokemon("Mankey", PokemonType::FIGHTING, 100, 17, {Move("NORMAL ATTACK", 20)})
		{
		}
		
		void Mankey::useSpecialMove(Pokemon &target)
        {
            furySwipes(target);
        }
		
		void Mankey::furySwipes(Pokemon& target)
		{
			cout<<name<<" uses Fury Swipes on "<<target.getName()<<"!"<<endl;
			target.TakeDamage(40);
		}
	}
}

