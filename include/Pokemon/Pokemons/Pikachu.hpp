#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pikachu: public Pokemon
		{
			protected:
				void thunderShock(Pokemon& target);
				
			public:
				Pikachu();
				
				void useSpecialMove(Pokemon& target) override;
				
		};
	}
}



