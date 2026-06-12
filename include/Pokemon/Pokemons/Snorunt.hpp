#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Snorunt: public Pokemon
		{
			protected:
				void iceShard(Pokemon &target);
				
			public:
				Snorunt();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


