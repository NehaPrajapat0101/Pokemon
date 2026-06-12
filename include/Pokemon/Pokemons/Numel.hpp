#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Numel: public Pokemon
		{
			protected:
				void emberCharge(Pokemon &target);
				
			public:
				Numel();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


