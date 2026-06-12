#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Squirtle: public Pokemon
		{
			protected:
				void waterSplash(Pokemon &target);
				
			public:
				Squirtle();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


