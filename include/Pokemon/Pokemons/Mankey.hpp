#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Mankey: public Pokemon
		{
			protected:
				void furySwipes(Pokemon &target);
				
			public:
				Mankey();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


