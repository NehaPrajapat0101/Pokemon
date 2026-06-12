#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Zubat: public Pokemon
		{
			protected:
				void superSonic(Pokemon &target);
				
			public:
				Zubat();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


