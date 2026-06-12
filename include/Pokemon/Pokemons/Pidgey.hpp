#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pidgey: public Pokemon
		{
			protected:
				void wingAttack(Pokemon& target);
				
			public:
				Pidgey();
			
				void useSpecialMove(Pokemon& target) override;
		};
	}
}

