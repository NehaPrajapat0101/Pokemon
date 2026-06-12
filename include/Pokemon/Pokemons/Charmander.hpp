#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Charmander: public Pokemon
		{
			protected:
				void flameBurst(Pokemon &target);
				
			public:
				Charmander();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


