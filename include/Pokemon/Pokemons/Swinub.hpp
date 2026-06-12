#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Swinub: public Pokemon
		{
			protected:
				void powderSnow(Pokemon &target);
				
			public:
				Swinub();
				
				void useSpecialMove(Pokemon& target) override;
		};
	}
}


