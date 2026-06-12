#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Oddish: public Pokemon
		{
			protected:
				void absorb(Pokemon &target);
				
			public:
				Oddish();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


