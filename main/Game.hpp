#include "./Grass.hpp"

class Player;

class Game
{
	private:
		Grass forestGrass, caveGrass;
		
	public:
		Game();
		
		void gameLoop(Player& player);
		
};
