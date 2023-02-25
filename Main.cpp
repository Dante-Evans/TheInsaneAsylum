//This is the insane asylum. This is meant to demonstrate a grasp of functions.
//written and coded by: Daniel Hall

#include <iostream>
#include <string>
#include "Func.h"

using namespace std;

int main()
{
	//local variables
	bool playAgain = true;
	int mainMenu = Menu();
	string roomChoices = RoomChoice();
		
	while (playAgain)
	{
		Opening();

		cout << "\n\n'Ah I see.' The booming voice resonates through the room again. 'You don't want to tell me.'\n";
		cout << "He chuckles and you could almost swear the whole room vibrates from the sound of his laughter.\n";
		cout << "'I am just going to call you little fish. You probably won't last a day here anyway.' He turns \n";
		cout << "and walks away from your room leaving the door open. A moment later the restraints loosen and you\n";
		cout << "are able to free yourself.\n\n";
		
		RoomChoice();
		
	}
	
}