#include<iostream>
#include<string>

using namespace std;

void PlayerName();
void PokemonSelection();
void AfterSelection();

enum class PokemonChoice
{
	Charmander,
	Bulbasaur,
	Squirtle,
	InvalidChoice
};

enum class PokemonType
{
	Fire,
	Electric,
	Water,
	Earth,
	Normal
};

string player_name;
PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;

int main()
{
	
	PlayerName();
	PokemonSelection();
	AfterSelection();

	return 0;
	
}

void PokemonSelection()
{
	int choice;
	
		// pokemon choice
	cout<<"Professor Oak: I have three Pokemon here with me. They're all quite feisty!'"<<endl;
	cout<<"Professor Oak: Choose wisely..."<<endl;
	cout<<"1. Charmander - The fire type. A real hothead!"<<endl;
	cout<<"2. Bulbasaur - The grass type. Calm and collected!"<<endl;
	cout<<"3. Squirtle - The water type. Cool as a cucumber!"<<endl;
	cout<<"Proffesor Oak: So, which one will it be? Enter the number of your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			chosen_pokemon  = PokemonChoice::Charmander;
			break;
			
		case 2:
			chosen_pokemon = PokemonChoice::Bulbasaur;
			break;
		
		case 3:
			chosen_pokemon = PokemonChoice::Squirtle;
			break;
		
		default:
			chosen_pokemon = PokemonChoice::InvalidChoice;
			break;
	}
	
	switch(chosen_pokemon)
	{
		case PokemonChoice::Charmander:
			cout<<"Professor Oak: A fiery choice! Charmander is yours!"<<endl;
			break;
		case PokemonChoice::Bulbasaur:
			cout<<"Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!"<<endl;
			break;
		case PokemonChoice::Squirtle:
			cout<<"Professor Oak: Spledid! Squirtle will keep you cool under pressure!"<<endl;
			break;
		default:
			cout<<"Professor Oak: Hmm, that doesn't seem right. Let me choose for you..."<<endl;
			chosen_pokemon = PokemonChoice::Charmander;
			cout<<"Professor Oak: Just Kidding! Let's go with Charmander, the fiery dragon in the making!"<<endl;
			break;
	}
}

void PlayerName()
{
	
	// intro by professor
	cout<<"Professor Oak: Hello there! Welcome to the world of Pokemon!"<<endl;
	cout<<"Professor Oak: My name is Oak. People call me the Pokemon Professor!"<<endl;
	cout<<"Professor Oak: But enough about me. Let's talk about you!"<<endl;
	
	// taking player name as input
	cout<<"Professor Oak: First, tell me your name? "<<endl;
	cin>>player_name;
	cout<<"Professor Oak: Ah, "<<player_name<<"! What a fantastic name!"<<endl;
	cout<<"Professor Oak: You must be eager to start your adventure. But first, you'll need a Pokemon of your own!"<<endl;
	
}

void AfterSelection()
{
	cout<<"Professor Oak: "<<(chosen_pokemon == PokemonChoice::Charmander ? "Charmander" : (chosen_pokemon == PokemonChoice::Bulbasaur ? "Bulbasaur" : "Squirtle"))<<" and you, "<<player_name<<", are going to be the best of friends!"<<endl;
	cout<<"Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!"<<endl;
}

