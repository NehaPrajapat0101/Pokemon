#include "./WildEncounterManager.hpp"
#include "./Pokemon.hpp"

#include<cstdlib>  // for rand()
#include<iostream>
#include<ctime>  // for time()

WildEncounterManager::WildEncounterManager()
{
	srand(time(0));  // seed the random number generator
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{
	int randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[randomIndex];
}
