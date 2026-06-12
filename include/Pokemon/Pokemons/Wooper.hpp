#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Wooper: public Pokemon
		{
			protected:
				void mudShot(Pokemon &target);
				
			public:
				Wooper();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


