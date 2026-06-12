#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Caterpie: public Pokemon
		{
			protected:
				void bugBite(Pokemon &target);
				
			public:
				Caterpie();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


