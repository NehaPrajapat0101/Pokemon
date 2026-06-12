#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Psyduck: public Pokemon
		{
			protected:
				void waterPulse(Pokemon &target);
				
			public:
				Psyduck();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


