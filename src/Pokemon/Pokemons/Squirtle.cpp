#include<iostream>

#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Squirtle::Squirtle()
			:Pokemon("Squirtle", PokemonType::WATER, 100, 35, {
																	Move("WATER GUN", 28),
																	Move("BUBBLE BEAM", 40),
																	Move("AQUA SHIELD", 0),
																	Move("STATIC SPLASH", 18)
																})
		{
		}
		
		void Squirtle::attack(Pokemon& target, Move selectedMove)
		{
			int hitChance = rand() % 100;
			
			if(selectedMove.moveName == "WATER GUN" && hitChance < 95)
			{
				Pokemon::attack(target, selectedMove);
			}
			
			else if(selectedMove.moveName == "BUBBLE BEAM" && hitChance < 80)
			{
				Pokemon::attack(target, selectedMove);
			}
			
			else if(selectedMove.moveName == "AQUA SHIELD" && hitChance < 100)
			{
				Pokemon::attack(target, selectedMove);
				Pokemon::heal(15);
				if(target.canApplyEffect())
				{
					target.applyEffect(N_Pokemon::N_StatusEffects::StatusEffectType::PARALYZED);
				}
			}
			
			else if(selectedMove.moveName == "STATIC SPLASH" && hitChance < 90)
			{
				Pokemon::attack(target, selectedMove);
				
				int paralyzeChance = rand() % 100;
				
				if(paralyzeChance < 35 && target.canApplyEffect())
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

