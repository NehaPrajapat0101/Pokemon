#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Diglett: public Pokemon
		{
			protected:
				void dig(Pokemon &target);
				
			public:
				Diglett();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


