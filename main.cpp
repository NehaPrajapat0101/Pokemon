#include<iostream>
#include<string>

using namespace std;

// defining an enum for pokemon choice
enum class PokemonChoice
{
	CHARMANDER = 1,
	BULBASAUR,
	SQUIRTLE,
	PIKACHU // DEFAULT CHOICE
};

// defining an enum for pokemon types
enum class PokemonType
{
	FIRE,
	GRASS,
	WATER,
	ELECTRIC,
	NORMAL
};

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
			cout<<name<<" has been released."<<endl;
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
			cout<<name<<": My name is Oak. People call me the Pokemon Professor!"<<endl;
			cout<<name<<": But enough about me. Let's talk about you!"<<endl;
		}
		
		// method to ask the player to choose a pokemon
		void offerPokemonChoice(Player& player)
		{
			cout<<name<<": First, tell me, what's your name?"<<endl;
			getline(cin, player.name);
			cout<<name<<": Ah, "<<player.name<<"! What a fantastic name!"<<endl;
			cout<<name<<": You must be eager to start your adventure. But first, you'll need a Pokemone."<<endl;
			
			// presenting pokemon choices
			cout<<name<<": I have three Pokemon here with me. They're all quite feisty!"<<endl;
			cout<<name<<": Choose wisely..."<<endl;
			cout<<"1. Charmander - The fiery type. A real hothead!"<<endl;
			cout<<"2. Bulbasaur - The grass type. Calm and collected!"<<endl;
			cout<<"3. Squirtle - The water type. Cool as cucumber!"<<endl;
			
			// calling pokemon choosing function from player class
			int choice;
			cout<<name<<": So, which one will it be? Enter the number of your choice: ";
			cin>> choice;
			player.choosePokemon(choice);
		}
};

int main()
{
	// creating objects for Player, ProfessorOak, Pokemon class
	Player player;
	ProfessorOak professor("Professor Oak");
//	Pokemon placeholderPokemon;
	
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
	
	// concluding first chapter
	cout<<"Professor Oak: "<<player.chosen_pokemon.name<<" and you, "<<player.name<<", are going to be the best of friends!"<<endl;
	cout<<"Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!"<<endl;
	
	return 0;
}