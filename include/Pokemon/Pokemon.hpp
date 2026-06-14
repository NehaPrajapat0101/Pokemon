#pragma once
#include "./Move.hpp"
#include <string>
#include<vector>

namespace N_Pokemon
{
    enum class PokemonType;
    struct Move;
}

using namespace std;

namespace N_Pokemon{

	class Pokemon
	{
		protected:
			string name;
			PokemonType type;
			int health;
			int maxHealth;
			int attackPower;
			vector<Move> moves; // this will store all moves list
		
		public:
			// constructors
			Pokemon();  // default constructor
			
			Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower, vector<Move> p_moves);  // parameterized constructor
			
			Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
			
			Pokemon(const Pokemon& other);  // copy constructor
			
			// destructor
			~Pokemon();
			
			virtual void attack(Pokemon &target, Move selectedMove = Move("", 20));
			
			virtual void useSpecialMove(Pokemon& target);
			
			void TakeDamage(int damage);
			
			bool isFainted();
			
			void heal();
			
			string getName();
			
			int getMaxHealth();
			
			int getHealth();
			
			void selectAndUseMove(Pokemon * target);
			
			void availableMoves();
			
			int selectMove();
			
			void useMove(Move selectedMove, Pokemon* target);
	};
}

