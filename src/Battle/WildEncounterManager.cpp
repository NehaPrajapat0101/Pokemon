#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/Pokemon.hpp"

#include<cstdlib>  // for rand()
#include<iostream>
#include<ctime>  // for time()

using namespace N_Pokemon;

namespace N_Battle{

WildEncounterManager::WildEncounterManager()
{
	srand(time(0));  // seed the random number generator
}

Grass& WildEncounterManager::selectEnvironment(vector<Grass>& grassAreas)
{
	int totalWeight = 0;
	
	for(const Grass& grass: grassAreas)
	{
		totalWeight += grass.encounterRate;
	}
	
	int roll = rand() % totalWeight;
	
	int currentWeight = 0;
	
	for(Grass& grass: grassAreas)
	{
		currentWeight = grass.encounterRate;
		
		if(roll< currentWeight)
		{
			return grass;
		}
	}
	
	return grassAreas.back();
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{
	int randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[randomIndex];
}

}
