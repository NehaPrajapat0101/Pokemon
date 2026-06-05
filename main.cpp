#include<iostream>
#include<string>
#include<limits> // include this header file to use numeric_limits

#include "./main/PokemonType.hpp"
#include "./main/PokemonChoice.hpp"
#include "./main/Utility.hpp"


using namespace std;

// pokemon class definition
class Pokemon
{
	public:
		string name;
		PokemonType type;
		int health;
		
		// constructors
		Pokemon()  // default constructor
		{
			name = "Unknown";
			type = PokemonType::NORMAL;
			health = 50;
			cout<<"A new Pokemon has been created using default constructor!"<<endl;
		}
		
		Pokemon(string p_name, PokemonType p_type, int p_health)  // parameterized constructor
		{
			name = p_name;
			type = p_type;
			health = p_health;
			cout<<"A new Pokemon named "<<name<<" has been created!"<<endl;
		}
		
		Pokemon(const Pokemon& other)  // copy constructor
		{
			name = other.name;
			type = other.type;
			health = other.health;
			cout<<"A new Pokemon has been copied from "<<other.name<<"!"<<endl;
		}
		
		// destructor
		~Pokemon()
		{
			// destructor msg removed.
		}
		
		void attack()
		{
			cout<<name<<" attacks with a powerful move!"<<endl;
		}
};

// player class definition
class Player
{
	public:
		// attributes
		string name;
		Pokemon chosen_pokemon;
		
		// constructors
		Player()
		{
			name = "Trainer";
//			chosen_pokemon = Pokemon();  // using default constructor of Pokemon class
			cout<<"A new player named "<<name<<" has been created!"<<endl;
		}
		
		Player(string name, Pokemon chosen_pokemon)
		{
			this->name = name;
			this->chosen_pokemon = chosen_pokemon;
			cout<<"Player "<<name<<" has been created!"<<endl;
		}
		
		// method to choose a pokemon
		void choosePokemon(int choice)
		{
			switch((PokemonChoice)choice)
			{
				case PokemonChoice::CHARMANDER:
					chosen_pokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
					break;
					
				case PokemonChoice::BULBASAUR:
					chosen_pokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
					break;
				
				case PokemonChoice::SQUIRTLE:
					chosen_pokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
					break;
				
				default:
					chosen_pokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
					break;
			}
			
			cout<<"Player "<<name<<" chose "<<chosen_pokemon.name<<"!"<<endl;
			Utility::waitForEnter();
		}
};

// professor class definition
class ProfessorOak
{
	public:
		// attributes
		string name;
		
		// constructor
		ProfessorOak(string name)
		{
			this->name = name; 
			// this-> refers to the member variable. 
			//if we don't use this then the compiler will consider both variables to be the parameter variables. 
			//i.e, parameter_variable = parameter_variable and hence the member variable never gets assigned
		}
		
		// method to greet the player
		void greetPlayer(Player &player)
		{
			cout<<name<<": Hello there! Welcome to the world of Pokemon!"<<endl;
			Utility::waitForEnter();
			cout<<name<<": My name is Oak. People call me the Pokemon Professor!"<<endl;
			Utility::waitForEnter();
			cout<<name<<": But enough about me. Let's talk about you!"<<endl;
			Utility::waitForEnter();
		}
		
		// method to ask the player to choose a pokemon
		void offerPokemonChoice(Player& player)
		{
			cout<<name<<": First, tell me, what's your name?"<<endl;
			getline(cin, player.name);
			cout<<name<<": Ah, "<<player.name<<"! What a fantastic name!"<<endl;
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
		void explainMainQuest(Player player)
		{
			Utility::clearConsole(); // clears the console
			
			cout<<name<<": Oak-ay "<<player.name<<", I am about to explain you about your upcoming "<<endl;
			Utility::waitForEnter();
			cout<<name<<": You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom"<<endl;
			Utility::waitForEnter();
			cout<<name<<": Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League."<<endl;
			Utility::waitForEnter();
			cout<<player.name<<": Wait... that sounds a lot like every other Pokemon game out there."<<endl;
			Utility::waitForEnter();
			cout<<name<<": Shhh! Dont't break the fourth wall "<<player.name<<"! This is serious business."<<endl;
			Utility::waitForEnter();
			cout<<name<<": To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter."<<endl;
			Utility::waitForEnter();
			cout<<name<<": Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!"<<endl;
			Utility::waitForEnter();
			cout<<player.name<<": Sounds like a walk in the park... right?"<<endl;
			Utility::waitForEnter();
			cout<<name<<": Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one."<<endl;
			Utility::waitForEnter();
			cout<<name<<": So, what do you say? Are you ready to become the next Pokémon Champion?"<<endl;
			Utility::waitForEnter();
			cout<<player.name<<": Ready as I'll ever be, Professor!"<<endl;
			Utility::waitForEnter();
			cout<<name<<": That's the spirit! Now, your journey begins."<<endl;
			Utility::waitForEnter();
			cout<<name<<": But first... let's just pretend I didn't foreget to set up the actual game loop... Ahem, onwards!"<<endl;
			Utility::waitForEnter();
			
		}
};

// function to handle the main game loop
void gameLoop(Player& player)
{
	int choice;
	bool keepPlaying = true;
	
	while(keepPlaying)
	{
		// clear the console before showing options
		Utility::clearConsole();
		
		// displaying options to player
		cout<<"\nWhat would you like to do next, "<<player.name<<"?"<<endl;
		cout<<"1. Battle Wild Pokemon"<<endl;
		cout<<"2. Visit PokeCenter"<<endl;
		cout<<"3. Challenge Gyms"<<endl;
		cout<<"4. Enter Pokemon League"<<endl;
		cout<<"5. Quit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		
		Utility::clearInputBuffer();
		
		// process the player's choice and display the corresponding message
		switch(choice)
		{
			case 1:
				cout<<"You look around... but all the wild Pokemon are on vacation. Maybe try again later?"<<endl;
				break;
			
			case 2:
				cout<<"You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!"<<endl;
				break;
			
			case 3:
				cout<<"You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!"<<endl;
				break;
			
			case 4:
				cout<<"You boldly step towards the Pokemon League... but the gatekeeper laughs and says, Maybe next time, champ!"<<endl;
				break;
			
			case 5:
				cout<<"You try to quit, but Professor Oak's voice echoes: There's no quitting in Pokemon training!"<<endl;
				cout<<"Are you sure you want to quit? (y/n): ";
				char quitChoice;
				cin>>quitChoice;
				
				if(quitChoice == 'y' || quitChoice == 'Y')
				{
					keepPlaying = false;
				}
				break;
			
			default:
				cout<<"That's not a valid choice. Try again!"<<endl;
				break;
		}
		
		// wait for enter key before the screen is cleared and the menu is shown again
		Utility::waitForEnter();
	}
	cout<<"Goodbye, "<<player.name<<"! Thanks for playing!"<<endl;
}

int main()
{
	// creating objects for Player, ProfessorOak, Pokemon class
	ProfessorOak professor("Professor Oak");
	Pokemon charmander("Charmander", PokemonType::FIRE, 100); // using parameterized constructor
	Player player("Ash", charmander);
	
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
	gameLoop(player);
	
	return 0;
}
