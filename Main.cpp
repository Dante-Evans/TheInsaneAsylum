/*This is the insane asylum. This is meant to demonstrate a grasp of functions.
written and coded by: Daniel Hall*/

#include <iostream>
#include <string>
#include "Func.h"

using namespace std;

void main()
{
	//local variables
	bool playAgain = true;
	int mainMenu = Menu();
	int roomChoices = RoomChoice();
	

	while (playAgain)
	{
		switch (mainMenu)
		{
		case 1:
			cout << "\nYou wake up with a start. You are laying on a bed strapped down and unable to move.\n";
			cout << "The door opens and a man as huge as the door stands in the doorway. The shadow he casts\n";
			cout << "obscures his face. After a long moment he begins to speak.\n";
			PlayerName();
			break;
		case 2:
			cout << "\nIt is most unfortunate that you decided to leave. Our guests were interested in using\n";
			cout << "you as their new play toy.\n\n\n";
			break;
		default:
			cout << "\nYou have made a fatal choice. The restraints tighten and pulls your arms and legs off your\n";
			cout << "body. Blood sprays out of your body and coats the walls and the floor. You exit this world \n";
			cout << "unsure of what awaited you.\n\n";
			break;
			mainMenu = Menu();
		}
		
		cout << "\n\n'Ah I see.' The booming voice resonates through the room again. 'You don't want to tell me.'\n";
		cout << "He chuckles and you could almost swear the whole room vibrates from the sound of his laughter.\n";
		cout << "'I am just going to call you little fish. You probably won't last a day here anyway.' He turns \n";
		cout << "and walks away from your room leaving the door open. A moment later the restraints loosen and you\n";
		cout << "are able to free yourself.\n\n";
		
		RoomChoice();
		
	}	
}