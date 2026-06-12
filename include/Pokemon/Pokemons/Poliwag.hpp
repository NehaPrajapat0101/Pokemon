#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Poliwag: public Pokemon
		{
			protected:
				void bubbleBeam(Pokemon &target);
				
			public:
				Poliwag();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


