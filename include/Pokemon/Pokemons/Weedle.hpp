#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Weedle: public Pokemon
		{
			protected:
				void poisonSting(Pokemon &target);
				
			public:
				Weedle();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


