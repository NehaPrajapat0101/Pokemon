#include "../../include/Character/ProfessorOak.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Utility/Utility.hpp"

#include<iostream>

using namespace std;

using namespace N_Utility;
using namespace N_Player;

namespace N_Character{

// constructor
ProfessorOak::ProfessorOak(string name)
{
	this->name = name; 
	// this-> refers to the member variable. 
	//if we don't use this then the compiler will consider both variables to be the parameter variables. 
	//i.e, parameter_variable = parameter_variable and hence the member variable never gets assigned
}

// method to greet the player
void ProfessorOak::greetPlayer(Player &player)
{
	cout<<name<<": Hello there! Welcome to the world of Pokemon!"<<endl;
	Utility::waitForEnter();
	cout<<name<<": My name is Oak. People call me the Pokemon Professor!"<<endl;
	Utility::waitForEnter();
	cout<<name<<": But enough about me. Let's talk about you!"<<endl;
	Utility::waitForEnter();
}

// method to ask the player to choose a pokemon
void ProfessorOak::offerPokemonChoice(Player& player)
{
	cout<<name<<": First, tell me, what's your name?"<<endl;
	string userInput;
	getline(cin, userInput);
	player.setName(userInput);
	cout<<name<<": Ah, "<<player.getName()<<"! What a fantastic name!"<<endl;
	Utility::waitForEnter();
	cout<<name<<": You must be eager to start your adventure. But first, you'll need a Pokemone."<<endl;
	Utility::waitForEnter();
	
	// presenting pokemon choices
	cout<<name<<": I have three Pokemon here with me. They're all quite feisty!"<<endl;
	Utility::waitForEnter();
	cout<<name<<": Choose wisely..."<<endl;
	cout<<"1. Charmander - The fiery type. A real hothead!"<<endl;
	cout<<"2. Bulbasaur - The grass type. Calm and collected!"<<endl;
	cout<<"3. Squirtle - The water type. Cool as cucumber!"<<endl;
	
	// calling pokemon choosing function from player class
	int choice;
	cout<<name<<": So, which one will it be? Enter the number of your choice: ";
	cin>> choice;
	player.choosePokemon(choice);
	Utility::waitForEnter();
}

// new method for the main quest conversation
void ProfessorOak::explainMainQuest(Player player)
{
	Utility::clearConsole(); // clears the console
	
	cout<<name<<": Oak-ay "<<player.getName()<<", I am about to explain you about your upcoming "<<endl;
	Utility::waitForEnter();
	cout<<name<<": You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom"<<endl;
	Utility::waitForEnter();
	cout<<name<<": Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League."<<endl;
	Utility::waitForEnter();
	cout<<player.getName()<<": Wait... that sounds a lot like every other Pokemon game out there."<<endl;
	Utility::waitForEnter();
	cout<<name<<": Shhh! Dont't break the fourth wall "<<player.getName()<<"! This is serious business."<<endl;
	Utility::waitForEnter();
	cout<<name<<": To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter."<<endl;
	Utility::waitForEnter();
	cout<<name<<": Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!"<<endl;
	Utility::waitForEnter();
	cout<<player.getName()<<": Sounds like a walk in the park... right?"<<endl;
	Utility::waitForEnter();
	cout<<name<<": Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one."<<endl;
	Utility::waitForEnter();
	cout<<name<<": So, what do you say? Are you ready to become the next Pokémon Champion?"<<endl;
	Utility::waitForEnter();
	cout<<player.getName()<<": Ready as I'll ever be, Professor!"<<endl;
	Utility::waitForEnter();
	cout<<name<<": That's the spirit! Now, your journey begins."<<endl;
	Utility::waitForEnter();
	cout<<name<<": But first... let's just pretend I didn't foreget to set up the actual game loop... Ahem, onwards!"<<endl;
	Utility::waitForEnter();
	
}
}
		
