
namespace N_Utility{
class Utility
{
	public:
		// static keyword is used so that it makes a fxn belongs to the class itself and don't require any object of that class to use that
		static void clearConsole();
		static void waitForEnter();
		static void clearInputBuffer();  // new helper fxn which empties the input buffer
};
}

