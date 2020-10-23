#include "MainMenu.h"
#include <iostream>
using namespace std;

int startOrExit;

void mainMenu()
{
	cout << "ASCII art here: \n";
	cout << "Type 1 to start the game | Type 2 to exit the game";
	cin >> startOrExit;
}

