#include "../Character/Player/Player.hpp"
#include "../Pokemon/Pokemon.hpp"
#include "../Battle/BattleState.hpp"

namespace N_Player
{
    class Player;
}

namespace N_Battle{

class BattleManager
{
	public:
		
		void startBattle(N_Player::Player &player, N_Pokemon::Pokemon &wildPokemon);
		
	private:
		BattleState battleState;
		
		void battle();
		
		void handleBattleOutcome();
		
		void updateBattleState();  // method to update battle state after each turn
};
}

