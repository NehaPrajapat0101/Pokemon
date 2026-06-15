#include<iostream>

#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Charmander::Charmander()
			:Pokemon("Charmander", PokemonType::FIRE, 100, 30, {
																	Move("SCRATCH", 30),
																	Move("EMBER", 40),
																	Move("FLAME CHARGE", 55),
																	Move("FIRE BURST", 20)
																})
		{
		}
		
		void Charmander::attack(Pokemon& target, Move selectedMove)
		{
			int hitChance = rand() % 100;
			
			if(selectedMove.moveName == "SCRATCH" && hitChance < 95)
			{
				Pokemon::attack(target, selectedMove);
			}
			
			else if(selectedMove.moveName == "EMBER" && hitChance < 80)
			{
				Pokemon::attack(target, selectedMove);
			}
			
			else if(selectedMove.moveName == "FLAME CHARGE" && hitChance < 70)
			{
				Pokemon::attack(target, selectedMove);
				cout<<"Flame charge costs a recoil of 10hp to your pokemon!"<<endl;
				Pokemon::TakeDamage(10);
			}
			
			else if(selectedMove.moveName == "FIRE BURST" && hitChance < 80)
			{
				Pokemon::attack(target, selectedMove);
				
				int paralyzeChance = rand() % 10;
				
				if(paralyzeChance < 4 && target.canApplyEffect())
				{
					target.applyEffect(N_Pokemon::N_StatusEffects::StatusEffectType::PARALYZED);
				}
			}
			
			else
			{
				cout<<"Better luck next time... "<<target.getName()<<" dodged this time."<<endl;
			}
		}
	}
}

