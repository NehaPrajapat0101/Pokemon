#include "../Pokemon/Grass.hpp"

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
		
	public:
		Game();
		
		void gameLoop(N_Player::Player& player);
		
};
}
