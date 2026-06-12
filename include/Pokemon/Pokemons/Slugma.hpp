#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Slugma: public Pokemon
		{
			protected:
				void lavaBurst(Pokemon &target);
				
			public:
				Slugma();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


