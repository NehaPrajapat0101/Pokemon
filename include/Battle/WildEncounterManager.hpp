#include "../Pokemon/Grass.hpp"

#include<vector>

namespace N_Battle{

class WildEncounterManager
{
	public:
		WildEncounterManager();
		
		N_Pokemon::Grass& selectEnvironment(std::vector<N_Pokemon::Grass>& grassAreas);
		
		N_Pokemon::Pokemon* getRandomPokemonFromGrass(const N_Pokemon::Grass& grass);
};
}

