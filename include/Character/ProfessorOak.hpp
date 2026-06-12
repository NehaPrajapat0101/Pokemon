#pragma once
#include<string>

using namespace std;

namespace N_Player
{
    class Player;
}

namespace N_Character{

// professor class definition
class ProfessorOak
{
	private:
		// attributes
		string name;
		
	public:
		// constructor
		ProfessorOak(string name);
		
		// method to greet the player
		void greetPlayer(N_Player::Player &player);
		
		// method to ask the player to choose a pokemon
		void offerPokemonChoice(N_Player::Player& player);
		
		// new method for the main quest conversation
		void explainMainQuest(N_Player::Player player);
		
};
}

