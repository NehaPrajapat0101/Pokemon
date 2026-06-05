#include<string>

using namespace std;

class Player;

// professor class definition
class ProfessorOak
{
	public:
		// attributes
		string name;
		
		// constructor
		ProfessorOak(string name);
		
		// method to greet the player
		void greetPlayer(Player &player);
		
		// method to ask the player to choose a pokemon
		void offerPokemonChoice(Player& player);
		
		// new method for the main quest conversation
		void explainMainQuest(Player player);
		
};
