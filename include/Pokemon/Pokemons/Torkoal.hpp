#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Torkoal: public Pokemon
		{
			protected:
				void heatWave(Pokemon &target);
				
			public:
				Torkoal();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


