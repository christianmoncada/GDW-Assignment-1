#include "MainMenu.h"
#include <iostream>
using namespace std;

void MainMenu::mainMenu()
{
	//ASCII art
	cout << " ______	     __________	      _________	     __________	    ___   ___ \n";
	cout << "|  __  \\    |___    ___|     |   ___   \\    |___    ___|    \\  \\ /  / \n";
	cout << "| |  \\  \\	|  |	     |  |   \\   \\	|  |	     \\  v  / \n";
	cout << "| |   \\  \\	|  |	     |  |___/   /	|  |	      \\   / \n";
	cout << "| |   /  /	|  |	     |   ___   /        |  |	       | | \n";
	cout << "| |__/  /    ___|  |___	     |  |   \\  \\        |  |           | | \n";
	cout << "|______/    |__________|     |__|    \\__\\	|__|           |_| \n";
	cout << "\n";
	cout << " ______	     __________       _________         _________     ___   ___ \n";
	cout << "|  __  \\    |   _______|     |   ___   \\       |  _____  \\    \\  \\ /  / \n";
	cout << "| |  \\  \\   |  |_______      |  |   \\   \\      | |     \\  \\    \\  v  / \n";
	cout << "| |   \\  \\  |   _______|     |  |___/   /      | |_____/  /     \\   / \n";
	cout << "| |   /  /  |  |	     |   ___   /       |  _____  /       | | \n";
	cout << "| |__/  /   |  |_______	     |  |   \\  \\       | |_____) \\       | |\n";
	cout << "|______/    |__________|     |__|    \\__\\      |_________/       |_| \n\n";
	cout << "By: Christian Moncada, Angelina Ratchkov, Aedyn Timm-Bradley, Dylan Gullins & Arianna Thorson \n\n";
	cout << "Type 1 to start the game | Type 2 to exit the game \n";
	cin >> startOrExit;

	if (startOrExit == 1)
	{
		return;
	}
	else if (startOrExit == 2)
	{
		exit(0);
	}
	else
	{
		cout << "Invalid character, starting game anyway you big dummy\n";
	}
}

