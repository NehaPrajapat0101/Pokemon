#pragma once
#include "./Move.hpp"
#include "../StatusEffects/IStatusEffect.hpp"
#include "../StatusEffects/StatusEffectType.hpp"
#include "../StatusEffects/ParalyzedEffect.hpp"
#include <string>
#include<vector>

using namespace std;

namespace N_Pokemon{
	
	enum class PokemonType;
    struct Move;
    
    namespace N_StatusEffects
    {
    	enum class StatusEffectType;
    	class IStatusEffects;
    	class ParalyzedEffect;
	}
	
	class Pokemon
	{
		protected:
			string name;
			PokemonType type;
			int health;
			int maxHealth;
			int attackPower;
			vector<Move> moves; // this will store all moves list
			N_StatusEffects::IStatusEffect* appliedEffect;
		
		public:
			// constructors
			Pokemon();  // default constructor
			
			Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower, vector<Move> p_moves);  // parameterized constructor
			
			Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
			
			Pokemon(const Pokemon& other);  // copy constructor
			
			// destructor
			~Pokemon();
			
			bool canAttack();
			
			void applyEffect(N_StatusEffects::StatusEffectType effectToApply);
			
			void clearEffect(Pokemon* target);
			
			bool canApplyEffect();
			
			void reducedAttackPower(int reduced_damage);
			
			virtual void attack(Pokemon &target, Move selectedMove = Move("", 20));
			
			virtual void useSpecialMove(Pokemon& target);
			
			void TakeDamage(int damage);
			
			bool isFainted();
			
			void heal();
			
			void heal(int amount);
			
			string getName();
			
			int getMaxHealth();
			
			int getHealth();
			
			int getAttackPower();
			
			void selectAndUseMove(Pokemon * target);
			
			void availableMoves();
			
			int selectMove();
			
			void useMove(Move selectedMove, Pokemon* target);
	};
}

