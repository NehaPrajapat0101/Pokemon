#pragma once
#include<string>

namespace N_Pokemon
{
	struct Move
	{
		std::string moveName;
		int movePower;
		
		Move(const std::string& moveName, int movePower)
		{
			this->moveName = moveName;
			this->movePower = movePower;
		}
	};
	
}
