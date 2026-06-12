#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Magikarp: public Pokemon
		{
			protected:
				void splashStrike(Pokemon &target);
				
			public:
				Magikarp();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


