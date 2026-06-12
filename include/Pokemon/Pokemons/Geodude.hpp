#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Geodude: public Pokemon
		{
			protected:
				void rockThrow(Pokemon &target);
				
			public:
				Geodude();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


