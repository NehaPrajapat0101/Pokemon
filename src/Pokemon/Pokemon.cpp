#include<iostream>

#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"

using namespace std;

namespace N_Pokemon{

Pokemon::Pokemon()
{
	name = "Unknown";
	type = PokemonType::NORMAL;
	health = 50;
	maxHealth = 100;
	attackPower = 20;
	cout<<"A new Pokemon has been created using default constructor!"<<endl;
}

Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower)  // parameterized constructor
{
	name = p_name;
	type = p_type;
	health = p_health;
	attackPower = p_attackPower;
	maxHealth = 100;
//	cout<<"A new Pokemon named "<<name<<" has been created!"<<endl;
}

Pokemon::Pokemon(const Pokemon& other)  // copy constructor
{
	name = other.name;
	type = other.type;
	health = other.health;
	attackPower = other.attackPower;
//	cout<<"A new Pokemon has been copied from "<<other.name<<"!"<<endl;
}

// destructor
Pokemon::~Pokemon()
{
	// destructor msg removed.
}

void Pokemon::attack(Pokemon& target)
{
	int damage = attackPower;
	cout<<name<<" attacks "<<target.name<<" for "<<damage<<" damage!"<<endl;
	target.TakeDamage(damage);
}

void Pokemon::TakeDamage(int damage)
{
	health -= damage;  // reduce hp by damage amount
	
	if(health < 0)
	{
		health = 0;  // ensure that hp don't go below 0
	}
}

bool Pokemon::isFainted()
{
	if(health<=0)
		return true; // return true if health less than 0 
	else
		return false;
}

void Pokemon::heal()
{
	health = maxHealth;
}
}

