#pragma once
#include<string>
#include<vector>

using namespace std;

class Pokemon;

struct Grass
{
	string environmentType;  // forest, cave, river bank
	int encounterRate;  // likelihood of encountering a wild pokemon out of 100
	vector<Pokemon> wildPokemonList;  // list of wild pokemons
};

