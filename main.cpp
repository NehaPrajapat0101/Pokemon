#include<iostream>
#include<string>
#include<limits> // include this header file to use numeric_limits

#include "./include/Pokemon/PokemonType.hpp"
#include "./include/Pokemon/PokemonChoice.hpp"
#include "./include/Utility/Utility.hpp"
//#include "./main/Pokemon.hpp"
#include "./include/Character/Player/Player.hpp"  // player class should be included after pokemon class as it requires pokemon class's object
#include "./include/Character/ProfessorOak.hpp"
#include "./include/Main/Game.hpp"


using namespace std;
using namespace N_Pokemon;
using namespace N_Player;
using namespace N_Character;
using namespace N_Main;

int main()
{
	// creating objects for Player, ProfessorOak, Pokemon class
	ProfessorOak professor("Professor Oak");
	Pokemon charmander("Charmander", PokemonType::FIRE, 100, 20); // using parameterized constructor
	Player player;
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
