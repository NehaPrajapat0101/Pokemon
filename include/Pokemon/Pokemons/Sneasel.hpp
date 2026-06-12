#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Sneasel: public Pokemon
		{
			protected:
				void iceClaw(Pokemon &target);
				
			public:
				Sneasel();
				
				void useSpecialMove(Pokemon& target) override;
		};
	}
}


