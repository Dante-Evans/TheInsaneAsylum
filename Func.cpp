//This is the function file. Where all of my functions a defined

#include <iostream>
#include <string>
#include "Func.h"
#include <vector>

using namespace std;

int Menu() //Function for the main menu
{
	//I personally declare the local variables first or at least I try to.
	int choices;

	//I also personally like to make a space between the variables and the code.
	cout << "Welcome to The Insane Asylum.\n";
	cout << "1 New Game\n";
	cout << "2 Exit\n\n";
	cin >> choices; //gets the choice made by the player.
	return choices; //returns the choice by the player.
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

int RoomChoice() //Function to get the first choice
{
	//Local variable
	string choice;	
	vector <string> decisions;	//declaring my decisions vector
	decisions.push_back("Pick up the water.\n"); //pushing this item into the vector.
	decisions.push_back("Pick up the notepad.\n"); //pushing this item into the vector.
	decisions.push_back("Pick up the pencil.\n"); //pushing this item into the vector.
	decisions.push_back("Go out the door.\n\n"); //pushing this item into the vector.

	//creating the iterators to change the vector as needed
	vector<string>::iterator yourChoice;
	vector<string>::const_iterator choices;

	cout << "With the restraints loose, you are able to untie your hands and then your untie your feet.\n";
	cout << "On the table next to the bed is a cup of water, a notepad, and a pencil. You have choices.\n";
	cout << "What would you like to do now?\n";
	cout << "Type what you would like to do.\n";
	
	for (choices = decisions.begin(); choices != decisions.end(); ++choices) //iterates through the vector from beginning to end
	{
		cout << *choices << endl; //displays the choices that you can choose from.
		cin >> choice;

		if (choice == decisions[0])
		{
			cout << "You pick up the glass of water. You take a sip of water. As the water hits your tongue, you realize\n";
			cout << "that you were extremely thirsty. You don't know how long you have been unconscious. The water soothes\n";
			cout << "your throat going down. Your stomach however, revolts against the water. You drop the glass and are\n";
			cout << "doubled over in pain. Your eyes begin to water as you drop to your knees. You wipe the tears from \n";
			cout << "your eyes but there is blood on your finger tips. The sudden realization hits you. Poison. You drop \n";
			cout << "to the floor and begin convulsing. The last thing you hear is your neck snapping as it hits the side\n";
			cout << "of the bed.\n\n";
			Menu();
		}
		else if (choice == decisions[1] && decisions.size() == 4)
		{
			cout << "You aren't sure why you would need the notepad but you decide to take it anyway. You slide the notepad\n";
			cout << "into the waist band of your pants and try to conceal it. Satisfied with your choice you look at the pencil\n";
			decisions.erase((decisions.begin() + 1));
		}
		else if (choice == decisions[2] && decisions.size() == 4)
		{
			cout << "You decided to grab the pencil. You aren't exactly sure why you would need it but you slip it into the arm\n";
			cout << "of your shirt. You thought about using the pencil to write on the notepad but you couldn't think of anything\n";
			cout << "to write. You still have a choice. Grab the notepad, drink the water, or leave the room. What do you choose?\n\n";
		}
		else if (choice == decisions[3] && decisions.size() == 4)
		{
			cout << "You decided to leave the items on the table and walk out of the bedroom.";
			decisions.end();
		}
		else if (choice == decisions[1] && decisions.size() == 3)
		{
			cout << "Looking at the pencil you decide that you might need to stab someone with it. So you slip it into the arm\n";
			cout << "of your shirt and make sure it can quickly slide out if you need it to. Satisfied with how it feels you\n";
			cout << "now have another choice. Do you drink the water or leave the room.\n\n";
		}
		else if (choice == decisions[1] && decisions.size() == 2)
		{
			cout << "You leave the room not sure what to expect but you feel as though you might be ready for anything. Hopefully.\n\n";
			decisions.end();
		}
	}
}