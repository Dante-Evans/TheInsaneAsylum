#include <iostream>
#include <string>
#include "Func.h"

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
	int choice;
	const int CHOICE = 3;
	string decisions[CHOICE];
	int yourChoice = 0;
	decisions[yourChoice++] = "1 Pick up the water.\n";
	decisions[yourChoice++] = "2 Pick up the notepad.\n";
	decisions[yourChoice++] = "3 Pick up the pencil.\n\n";

	cout << "With the restraints loose, you are able to untie your hands and then your untie your feet.\n";
	cout << "On the table next to the bed is a cup of water, a notepad, and a pencil. You have choices.\n";
	cout << "What would you like to do now?\n";
	cout << "Type what you would like to do.\n";
	
	for (int i = 0; i < yourChoice; ++i)
	{
		cout << "1 Pick up the water\n";
		cout << "2 Pick up the notepad\n";
		cout << "3 Pick up the pencil\n\n";
		cin >> choice;
		return choice;

		if (choice == 2)
		{
			delete 
		}
	}
}