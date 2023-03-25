//This is the insane asylum. This is meant to demonstrate a grasp of functions.
//written and coded by: Daniel Hall

#include <iostream>
#include <string>
#include "Func.h"

using namespace std;

int main()
{
	//local variables
	int choices = Menu();
	bool playAgain = true;
		
	while (playAgain)
	{
		if (choices == 1)
		{
			Opening();
		}
		else (Menu());

		cout << "\n\n'Ah I see.' The booming voice resonates through the room again. 'You don't want to tell me.'\n";
		cout << "He chuckles and you could almost swear the whole room vibrates from the sound of his laughter.\n";
		cout << "'I am just going to call you little fish. You probably won't last a day here anyway.' He turns \n";
		cout << "and walks away from your room leaving the door open. A moment later the restraints loosen and you\n";
		cout << "are able to free yourself.\n\n";
		
		RoomChoice();

		cout << "You walk out of your room and find that the hallway is filled with bodies lining the hall\n";
		cout << "You pull out your pencil and your notepad and begin to describe what you have witnessed so far.\n";
		cout << "As you begin to write you suddenly can't feel your finger tips.\n";
		cout << "Your vision begins to blur and your head begins to swim.\n";
		cout << "The next thing you know you get the feeling you are being wheeled down a corridor but you can't \n";
		cout << "see anything at all. The cart jerks and you hear a man curse in some foreign language.\n";
		cout << "The man then says 'These will make good food for my pet.' Then he chuckles.\n";

		CartChoice();

		cout << "to be continued.\n\n";

		string whyNot;

		cout << "Would you like to play again?\n";
		cout << "Type yes to play again or type no to exit.\n";
		cin >> whyNot;
		if (whyNot == "yes")
		{
			Opening();
		}
		else(whyNot == "no");
		{
			return false;
		}
		
		return false;
	}
	
}