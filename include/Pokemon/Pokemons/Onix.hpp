#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Onix: public Pokemon
		{
			protected:
				void rockSlide(Pokemon &target);
				
			public:
				Onix();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}


