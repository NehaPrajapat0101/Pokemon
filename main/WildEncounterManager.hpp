#include "./Grass.hpp"

#include<vector>

class WildEncounterManager
{
	public:
		WildEncounterManager();
		Pokemon getRandomPokemonFromGrass(const Grass& grass);
};
