#include<iostream>
#include<string>
#include<limits> // include this header file to use numeric_limits

#include "./main/PokemonType.hpp"
#include "./main/PokemonChoice.hpp"
#include "./main/Utility.hpp"
//#include "./main/Pokemon.hpp"
#include "./main/Player.hpp"  // player class should be included after pokemon class as it requires pokemon class's object
#include "./main/ProfessorOak.hpp"
#include "./main/Game.hpp"


using namespace std;

int main()
{
	// creating objects for Player, ProfessorOak, Pokemon class
	ProfessorOak professor("Professor Oak");
	Pokemon charmander("Charmander", PokemonType::FIRE, 100); // using parameterized constructor
	Player player("Ash", charmander);
	Game game;
	
//	// assigning values to placeholderPokemon attributes
//	placeholderPokemon.name = "Pikachu";
//	placeholderPokemon.type = PokemonType::FIRE;
//	placeholderPokemon.health = 40;
//	
//	// assigning values to player attributes
//	player.name = "Trainer";
//	
//	// assigning values to professor attributes
//	professor.name = "Professor Oak";
//	
	// greet player and offer pokemon choices
	professor.greetPlayer(player);
	professor.offerPokemonChoice(player);
	
	// explain the main quest
	professor.explainMainQuest(player);
	
	// start the main game loop
	game.gameLoop(player);
	
	return 0;
}
