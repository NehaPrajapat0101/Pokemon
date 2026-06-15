#include<iostream>

#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		
		Bulbasaur::Bulbasaur()
			:Pokemon("Bulbasaur", PokemonType::GRASS, 100, 35, {
																	Move("VINE WHIP", 25),
																	Move("RAZOR LEAF", 35),
																	Move("LEECH SEED", 15),
																	Move("STUN SPORE", 10)
																})
		{
		}
		
		void Bulbasaur::attack(Pokemon& target, Move selectedMove)
		{
			int firstHitChance = rand() % 10;
			
			if(selectedMove.moveName == "VINE WHIP")
			{
				if(firstHitChance < 95)
				{
				
					Pokemon::attack(target, selectedMove);
				
					// chance for second hit(50% chance)
					int secondHitChance = rand() % 100;
					
					if(secondHitChance > 70)
					{
						std::cout<<name<<" hits again with a second "<<selectedMove.moveName<<"!"<<endl;
						Pokemon::attack(target, selectedMove);
					}
					else
					{
						std::cout<<target.getName()<<" dodged the second hit!"<<endl;
					}
				}
				else
				{
					std::cout<<"Garbage Luck, "<<target.getName()<<" dodged your attack."<<endl;
				}
			}
			
			else if(selectedMove.moveName == "RAZOR LEAF")
			{
				if(firstHitChance < 80)
				{
					Pokemon::attack(target, selectedMove);
					
					int secondHitChance = rand() % 4;
					
					if(secondHitChance == 0)
					{
						Pokemon::attack(target, Move("CRITICAL HIT", 15));
					}
				}
			}
			
			else if(selectedMove.moveName == "LEECH SEED")
			{
				if(firstHitChance < 90)
				{
					Pokemon::attack(target, selectedMove);
					
					Pokemon::heal(15);
					
				}
			}
			
			else if(selectedMove.moveName == "STUN SPORE")
			{
				if(firstHitChance <85)
				{
					Pokemon::attack(target, selectedMove);
					
					int paralyzeChance = rand() % 100;
					
					if(paralyzeChance < 30 && target.canApplyEffect())
					{
						target.applyEffect(N_Pokemon::N_StatusEffects::StatusEffectType::PARALYZED);
					}
				}
			}
			else
			{
				cout<<"Better luck next time... "<<target.getName()<<" dodged this time."<<endl;
			}
		}
	}
}

