#include "../Pokemon/Grass.hpp"
#include "../pokemon/Pokemon.hpp"

namespace N_Pokmeon
{
	class Pokemon;
}

namespace N_Player
{
    class Player;
}

namespace N_Main{

class Game
{
	private:
//		Grass forestGrass, caveGrass;
		std::vector<N_Pokemon::Grass> grassAreas;
		N_Pokemon::Pokemon *wildPokemon;
		
	public:
		Game();
		
		void gameLoop(N_Player::Player& player);
		
		~Game();
		
};
}
