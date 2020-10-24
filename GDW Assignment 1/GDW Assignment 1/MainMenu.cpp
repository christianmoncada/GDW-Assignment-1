#include "MainMenu.h"
#include "Board.h"
#include <iostream>

void MainMenu::mainMenu()
{
	//ASCII art
	SetConsoleTextAttribute(Board::hconsole, 14);
	std::cout << "\t ______	     __________	      _________	     __________	    ___   ___ ";				SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t\t||\n"; SetConsoleTextAttribute(Board::hconsole, 14);
	std::cout << "\t|  __  \\    |___    ___|     |   ___   \\    |___    ___|    \\  \\ /  / ";			SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t\t||\n"; SetConsoleTextAttribute(Board::hconsole, 14);
	std::cout << "\t| |  \\  \\	|  |	     |  |   \\   \\	|  |	     \\  v  / ";						SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t\t||\n"; SetConsoleTextAttribute(Board::hconsole, 14);
	std::cout << "\t| |   \\  \\	|  |	     |  |___/   /	|  |	      \\   / ";						SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t\t||\n"; SetConsoleTextAttribute(Board::hconsole, 14);
	std::cout << "\t| |   /  /	|  |	     |   ___   /        |  |	       | | ";						SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t\t||\n"; SetConsoleTextAttribute(Board::hconsole, 14);
	std::cout << "\t| |__/  /    ___|  |___	     |  |   \\  \\        |  |           | | ";					SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t\t||\n"; SetConsoleTextAttribute(Board::hconsole, 14);
	std::cout << "\t|______/    |__________|     |__|    \\__\\	|__|           |_| ";						SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t\t||\n";
	SetConsoleTextAttribute(Board::hconsole, 11);										SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t||\n";	SetConsoleTextAttribute(Board::hconsole, 11);
	std::cout << "\t\t ______	     __________       _________         _________     ___   ___ ";			SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t||\n";		SetConsoleTextAttribute(Board::hconsole, 11);
	std::cout << "\t\t|  __  \\    |   _______|     |   ___   \\       |  _____  \\    \\  \\ /  / ";		SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t||\n";		SetConsoleTextAttribute(Board::hconsole, 11);
	std::cout << "\t\t| |  \\  \\   |  |_______      |  |   \\   \\      | |     \\  \\    \\  v  / ";		SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t||\n";	SetConsoleTextAttribute(Board::hconsole, 11);
	std::cout << "\t\t| |   \\  \\  |   _______|     |  |___/   /      | |_____/  /     \\   / ";			SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t||\n";	SetConsoleTextAttribute(Board::hconsole, 11);
	std::cout << "\t\t| |   /  /  |  |	     |   ___   /       |  _____  /       | | ";						SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t||\n";	SetConsoleTextAttribute(Board::hconsole, 11);
	std::cout << "\t\t| |__/  /   |  |_______	     |  |   \\  \\       | |_____) \\       | |";			SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t||\n";	SetConsoleTextAttribute(Board::hconsole, 11);
	std::cout << "\t\t|______/    |__________|     |__|    \\  \\      |_________/       |_| ";				SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t||\n";	SetConsoleTextAttribute(Board::hconsole, 11);
	std::cout << "\t\t                                      \\__\\";										SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "\t\t\t\t\t||\n";
	SetConsoleTextAttribute(Board::hconsole, 7);
	std::cout << "================================================================================================++\n\n";
	SetConsoleTextAttribute(Board::hconsole, 8);
	std::cout << "By: Christian Moncada, Angelina Ratchkov, Aedyn Timm-Bradley, Dylan Gullins & Arianna Thorson \n\n";
	std::cout << "Type 1 to start the game | Type 2 to exit the game \n";
	std::cin >> startOrExit;

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
		SetConsoleTextAttribute(Board::hconsole, 4);
		std::cout << "Invalid character, starting game anyway you big dummy\n";
	}
}

