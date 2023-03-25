//This is the function file. Where all of my functions a defined

#include <iostream>
#include <string>
#include "Func.h"
#include <vector>

using namespace std;

int Menu() //Function for the main menu
{
	//I also personally like to make a space between the variables and the code.
	int choices;

	cout << "\t\t\tWelcome to The Insane Asylum.\n\n";
	cout << "1 New Game\n";
	cout << "2 Exit\n\n";
	cin >> choices; //gets the choice made by the player.
	return choices; //returns the choice by the player.	
}

void Opening()
{	
	cout << "\nYou wake up with a start. You are laying on a bed strapped down and unable to move.\n";
	cout << "The door opens and a man as huge as the door stands in the doorway. The shadow he casts\n";
	cout << "obscures his face. After a long moment he begins to speak.\n\n";
	PlayerName();	
}

string PlayerName() //Function to get the player's name
{
	//local variable
	string name;

	cout << "'What is your name little one?' a booming voice echoes throughout the room.\n";
	cout << "The sound is almost deafening but the man speaks again in a voice that seems \n";
	cout << "softer then it should have been. 'What is your name little one?'\n\n";
	cin >> name; //gets the name of the player.
	return name; //returns the name of the player.
}

bool RoomChoice() //Function to get the first choice
{
	//Local variable
	string choice;
	vector <string> decisions;	//declaring my decisions vector
	decisions.push_back("Pick up the water."); //pushing this item into the vector.
	decisions.push_back("Pick up the notepad."); //pushing this item into the vector.
	decisions.push_back("Pick up the pencil."); //pushing this item into the vector.
	decisions.push_back("Go out the door.\n"); //pushing this item into the vector.

	//creating the iterators to change the vector as needed
	vector<string>::iterator yourChoice;
	vector<string>::const_iterator player_choices;

	cout << "With the restraints loose, you are able to untie your hands and then your untie your feet.\n";
	cout << "On the table next to the bed is a cup of water, a notepad, and a pencil. You have choices.\n";
	cout << "What would you like to do now?\n";
	cout << "Type what you would like to do.\n\n";
	for (player_choices = decisions.begin(); player_choices != decisions.end(); ++player_choices)
	{
		cout << *player_choices << endl;
	}
	cout << "Type the last word of the choice to decide what to do.\n";
	cin >> choice;	
	
	for (int i = 0;i < 4; i++) //iterates through the vector from beginning to end
	{		
		while (i != decisions.size())
		{
			if (choice == "water" && decisions.size() == 4) //The first option.
			{
				cout << "You pick up the glass of water. You take a sip of water. As the water hits your tongue, you realize\n";
				cout << "that you were extremely thirsty. You don't know how long you have been unconscious. The water soothes\n";
				cout << "your throat going down. Your stomach however, revolts against the water. You drop the glass and are\n";
				cout << "doubled over in pain. Your eyes begin to water as you drop to your knees. You wipe the tears from \n";
				cout << "your eyes but there is blood on your finger tips. The sudden realization hits you. Poison. You drop \n";
				cout << "to the floor and begin convulsing. The last thing you hear is your neck snapping as it hits the side\n";
				cout << "of the bed.\n\n";
				i = 4;
				return Menu();
			}
			else if (choice == "notepad" && decisions.size() == 4) //The second option
			{
				cout << "You aren't sure why you would need the notepad but you decide to take it anyway. You slide the notepad\n";
				cout << "into the waist band of your pants and try to conceal it. Satisfied with your choice you look at the pencil.\n";
				cout << "Then you look at the water before looking at the door.\n\n";
				decisions.erase((decisions.begin() + 1));
				cin >> choice;
			}
			else if (choice == "pencil" && decisions.size() == 4) //The third option
			{
				cout << "You decided to grab the pencil. You aren't exactly sure why you would need it but you slip it into the arm\n";
				cout << "of your shirt. You thought about using the pencil to write on the notepad but you couldn't think of anything\n";
				cout << "to write. You still have a choice. Grab the notepad, drink the water, or leave the room. What do you choose?\n\n";
				decisions.erase((decisions.begin() + 2));
				cin >> choice;
			}
			else if (choice == "door" && decisions.size() == 4) //The last option without taking any of the items.
			{
				cout << "You decided to leave the items on the table and walk out of the bedroom.\n\n";
				i = decisions.size();
			}
			else if (choice == "notepad" && decisions.size() == 3) //The last option with taking all of the items.
			{
				cout << "You now have the notepad and the pencil. These two things could come in handy later though you aren't sure\n";
				cout << "how. Eitherway you have them. Now you must decide if you are going to drink the water or leave the room.\n";
				cout << "Do you drink the water or leave the room.\n\n";
				decisions.erase((decisions.begin() + 1));
				cin >> choice;
			}
			else if (choice == "pencil" && decisions.size() == 3) //The third option
			{
				cout << "You decided to grab the pencil. You aren't exactly sure why you would need it but you slip it into the arm\n";
				cout << "of your shirt. You thought about using the pencil to write on the notepad but you couldn't think of anything\n";
				cout << "to write. You still have a choice. Drink the water, or leave the room. What do you choose?\n\n";
				decisions.erase((decisions.begin() + 1));
				cin >> choice;
			}
			else if (choice == "water" && decisions.size() == 3)
			{
				cout << "You pick up the glass of water. You take a sip of water. As the water hits your tongue, you realize\n";
				cout << "that you were extremely thirsty. You don't know how long you have been unconscious. The water soothes\n";
				cout << "your throat going down. Your stomach however, revolts against the water. You drop the glass and are\n";
				cout << "doubled over in pain. Your eyes begin to water as you drop to your knees. You wipe the tears from \n";
				cout << "your eyes but there is blood on your finger tips. The sudden realization hits you. Poison. You drop \n";
				cout << "to the floor and begin convulsing. The last thing you hear is your neck snapping as it hits the side\n";
				cout << "of the bed.\n\n";
				i = 4;		
				return Menu();
			}
			else if (choice == "water" && decisions.size() == 2)
			{
				cout << "You pick up the glass of water. You take a sip of water. As the water hits your tongue, you realize\n";
				cout << "that you were extremely thirsty. You don't know how long you have been unconscious. The water soothes\n";
				cout << "your throat going down. Your stomach however, revolts against the water. You drop the glass and are\n";
				cout << "doubled over in pain. Your eyes begin to water as you drop to your knees. You wipe the tears from \n";
				cout << "your eyes but there is blood on your finger tips. The sudden realization hits you. Poison. You drop \n";
				cout << "to the floor and begin convulsing. The last thing you hear is your neck snapping as it hits the side\n";
				cout << "of the bed.\n\n";
				i = 4;		
				return Menu();
			}
			else if (choice == "door" && decisions.size() == 2)
			{
				cout << "You leave the room not sure what to expect but you feel as though you might be ready for anything. Hopefully.\n\n";
				i = 4;
				return true;
			}
			else
			{
				cout << "You haven't made a valid choice. Please make a decision.\n\n";
				cin >> choice;
			}
		}		
	}	
}

bool CartChoice()
{
	string choice; //Get the choice of the player.
	int stab; //This is going to be how many times you stab the person.

	cout << "You have a choice to make.\n";
	cout << "You could either stay hidden on the cart or you could fight back to try to save you life.\n";
	cout << "Type 'hide' to stay hidden or 'fight' to fight back.";
	cin >> choice;
	cout << "You have decided to " << choice << ".";

	if (choice == "hide")
	{
		cout << "You have decided to hide. The cart continues on for what seems like an hour. You suddenly realize\n";
		cout << "that you have to go to the bathroom. Just as the thought crosses your mind you begin to urinate on \n";
		cout << "yourself. The man suddenly stops the cart and starts coughing. You hear him retch up his guts to your\n";
		cout << "right. The smell of his stomach contents becomes to great for you. You trhow yourself off to the left\n";
		cout << "of the cart and begin retch up clear water. As you finish, you notice the man has finished also and is\n";
		cout << "looking at you in bewilderment. You compose yourself enough to make a run for it in the opposite \n";
		cout << "direction.";
	}
	else if (choice == "fight")
	{
		cout << "You slip the pencil out of your sleeve and place your thumb over the ereaser ready to stab the \n";
		cout << "man. You throw whatever is on top of you in his direction to disorient him.\n";
		cout << "However, the man had stopped to insert a key card and the body that you threw fell to the ground \n";
		cout << "harmlessly. The man is big and quick, his hand wraps around your throat and crushes your windpipe.\n";
		cout << "You did manage to stab the man in the forearm before your vison goes black and your arms go limp at \n";
		cout << "your side.\n";
		cout << "The next thing you know your arm is being consumed by some horrendous creature. The creature notices\n";
		cout << "Your eyes open and quickly chomps down on your head crushing your skull like a watermelon.\n";
		return true;
	}
}