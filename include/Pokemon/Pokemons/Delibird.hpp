#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Delibird: public Pokemon
		{
			protected:
				void presentBomb(Pokemon &target);
				
			public:
				Delibird();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


