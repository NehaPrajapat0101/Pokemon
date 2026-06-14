#include<iostream>

#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

using namespace std;
using namespace N_Utility;
namespace N_Pokemon
{

	Pokemon::Pokemon()
	{
		name = "Unknown";
		type = PokemonType::NORMAL;
		health = 50;
		maxHealth = 100;
		attackPower = 20;
		cout<<"A new Pokemon has been created using default constructor!"<<endl;
	}
	
	Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower, vector<Move> p_moves)  // parameterized constructor
	{
		name = p_name;
		type = p_type;
		health = p_health;
		attackPower = p_attackPower;
		maxHealth = 100;
		moves = p_moves;
		
	//	cout<<"A new Pokemon named "<<name<<" has been created!"<<endl;
	}
	
	Pokemon::Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower)  // parameterized constructor
	{
		name = p_name;
		type = p_type;
		health = p_maxHealth;
		attackPower = p_attackPower;
		maxHealth = p_maxHealth;
		
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
	
	void Pokemon::attack(Pokemon &target, Move selectedMove)
	{
		if(selectedMove.moveName == "")
		{
			int damage = attackPower;
			cout<<name<<" attacks "<<target.name<<" with Normal Attack ";
			cout<<" delivering damage of "<<damage<<" unit power!"<<endl;
			target.TakeDamage(damage);
		}
		else
		{
			int damage = selectedMove.movePower;
			cout<<name<<" attacks "<<target.name<<" with "<<selectedMove.moveName;
			cout<<" delivering damage of "<<selectedMove.movePower<<" unit power!"<<endl;
			target.TakeDamage(damage);
		}
	}
	
	//virtual void Pokemon::useSpecialMove(Pokemon& target) = 0;  
	// abstract fxns are declared in header files and not in src files
	
	void Pokemon::TakeDamage(int damage)
	{
		health -= damage;  // reduce hp by damage amount
		
		if(health < 0)
		{
			health = 0;  // ensure that hp don't go below 0
		}
		
		cout<<name<<"'s current health: "<<health<<"/"<<maxHealth<<endl;
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
	
	string Pokemon::getName()
	{
		return name;
	}
	
	int Pokemon::getMaxHealth()
	{
		return maxHealth;
	}
	
	int Pokemon::getHealth()
	{
		return health;
	}
	
	void Pokemon::selectAndUseMove(Pokemon* target)
	{
		// show moves
		availableMoves();
		
		// input player's choice
		int choice = selectMove();
		Move selectedMove = moves[choice-1];
		
		//execute the moves
		useMove(selectedMove, target);
	}
	
	void Pokemon::availableMoves()
	{
		cout<<name<<"'s available moves: "<<endl;
		
		for(int i=0; i< moves.size(); i++)
		{
			cout<<i+1<<": "<<moves[i].moveName<<" (Power: "<<moves[i].movePower<<")"<<endl;
		}
	}
	
	int Pokemon::selectMove()
	{
		int choice;
		
		cout<<"Choose a move: ";
		cin>>choice;
		
		while(choice < 0 || choice > moves.size())
		{
			cout<<"Invalid choice!"<<endl;
			cout<<"Try Again silly guy:)"<<endl;
			cin>>choice;
		}
		
		return choice;
	}
	
	void Pokemon::useMove(Move selectedMove, Pokemon* target)
	{
		attack(*target, selectedMove);
		cout<<endl;
	}
	
	void Pokemon::useSpecialMove(Pokemon& target)
	{
		cout<<"No special ability."<<endl;
	}
	
	

}

