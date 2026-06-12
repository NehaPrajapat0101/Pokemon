#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Bulbasaur: public Pokemon
		{
			protected:
				void vineWhip(Pokemon &target);
				
			public:
				Bulbasaur();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


