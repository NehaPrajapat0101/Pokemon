#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Magmar: public Pokemon
		{
			protected:
				void flameThrower(Pokemon &target);
				
			public:
				Magmar();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


