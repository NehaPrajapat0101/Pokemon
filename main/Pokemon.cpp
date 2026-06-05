#include<iostream>

#include "./Pokemon.hpp"
#include "./PokemonType.hpp"

using namespace std;

Pokemon::Pokemon()
{
	name = "Unknown";
	type = PokemonType::NORMAL;
	health = 50;
	cout<<"A new Pokemon has been created using default constructor!"<<endl;
}

Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health)  // parameterized constructor
{
	name = p_name;
	type = p_type;
	health = p_health;
	cout<<"A new Pokemon named "<<name<<" has been created!"<<endl;
}

Pokemon::Pokemon(const Pokemon& other)  // copy constructor
{
	name = other.name;
	type = other.type;
	health = other.health;
	cout<<"A new Pokemon has been copied from "<<other.name<<"!"<<endl;
}

// destructor
Pokemon::~Pokemon()
{
	// destructor msg removed.
}

void Pokemon::attack()
{
	cout<<name<<" attacks with a powerful move!"<<endl;
}


