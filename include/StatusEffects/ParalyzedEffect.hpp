#pragma once
#include "./IStatusEffect.hpp"

namespace N_Pokemon
{
	namespace N_StatusEffects
	{
		class ParalyzedEffect: public IStatusEffect
		{
			private:
				int turnsLeft;
				
			public:
				void applyEffect(Pokemon* target);
				
				std::string getEffectName();
				
				bool turnEndEffect(Pokemon* target);
				
				void clearEffect(Pokemon* target);
		};
	}
}

