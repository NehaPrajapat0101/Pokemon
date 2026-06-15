#include <iostream>

#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/StatusEffects/IStatusEffect.hpp"
#include "../../include/StatusEffects/ParalyzedEffect.hpp"

namespace N_Pokemon
{
	namespace N_StatusEffects
	{
		void ParalyzedEffect::applyEffect(Pokemon* target)
		{
			turnsLeft = rand() % 3 + 1;
			std::cout<<"OOPS! Your Pokemon got paralyzed:("<<endl;
			std::cout<<"Unfortunately, "<<target->getName()<<" will not be able to move for "<<turnsLeft<<" turns."<<endl;
			
		}
		
		std::string ParalyzedEffect::getEffectName()
		{
			return "Paralyzed";
		}
		
		// Determines whether the Pokémon can act at the end of the turn
        // Returns false if the paralysis prevents the Pokémon from moving
		bool ParalyzedEffect::turnEndEffect(Pokemon* target)
		{
			if(turnsLeft <= 0)
			{
				clearEffect(target);
				return true; // effect ends and player can move
			}
			
			turnsLeft --;
			
			// there is 25% chance that the player can't move because of paralysis
			int paralysis_chance = rand() % 4;
			
			if(paralysis_chance == 0)
			{
				std::cout<<target->getName()<<" is still Paralyzed and can't move!"<<endl;
				return false;
			}
			else // the player can move in this turn
			{
				std::cout<<target->getName()<<" can move now bypassing the paralysis effect:)"<<endl;
				return true;
			}
		}
		
		void ParalyzedEffect::clearEffect(Pokemon* target)
		{
			std::cout<<target->getName()<<" is no longer paralyzed. YUUUHUU:)"<<endl;
//			target->clearEffect();
		}
		
		
	}
}
