#include <string>
enum class PokemonType;

using namespace std;

class Pokemon
{
	public:
		string name;
		PokemonType type;
		int health;
		
		// constructors
		Pokemon();  // default constructor
		
		Pokemon(string p_name, PokemonType p_type, int p_health);  // parameterized constructor
		
		Pokemon(const Pokemon& other);  // copy constructor
		
		// destructor
		~Pokemon();
		
		void attack();
};
