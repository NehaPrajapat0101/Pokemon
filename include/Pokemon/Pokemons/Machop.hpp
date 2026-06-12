#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Machop: public Pokemon
		{
			protected:
				void karateChop(Pokemon &target);
				
			public:
				Machop();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


