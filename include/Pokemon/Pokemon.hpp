#pragma once
#include <string>

namespace N_Pokemon
{
    enum class PokemonType;
}

using namespace std;

namespace N_Pokemon{

class Pokemon
{
	public:
		string name;
		PokemonType type;
		int health;
		int maxHealth;
		int attackPower;
		
		// constructors
		Pokemon();  // default constructor
		
		Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);  // parameterized constructor
		
		Pokemon(const Pokemon& other);  // copy constructor
		
		// destructor
		~Pokemon();
		
		void attack(Pokemon &target);
		
		void TakeDamage(int damage);
		
		bool isFainted();
		
		void heal();
};
}

