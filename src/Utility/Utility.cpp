#include "../../include/Utility/Utility.hpp"
#include<iostream>
#include<limits>

using namespace std;

namespace N_Utility{

void Utility::clearConsole()
{
	#ifdef _WIN32
		system("cls");
	#else
		(void)system("clear");
	#endif
}

void Utility::waitForEnter()
{
	cin.get(); // wait for enter key
}

void Utility::clearInputBuffer()
{
	// clear the newline character left in buffer after cin>>choice
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
}

