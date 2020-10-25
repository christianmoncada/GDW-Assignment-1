<<<<<<< HEAD
using namespace std;
#include <iostream>
int main() {
	std::cout << "GAME OVER\n";
	std::cout << " _____                        _____                "
	std::cout << "|  __ \                      |  _  |               "
	std::cout << "| |  \/ __ _ _ __ ___   ___  | | | |_   _____ _ __ "
	std::cout << "| | __ / _` | '_ ` _ \ / _ \ | | | \ \ / / _ \ '__|"
	std::cout << "| |_\ \ (_| | | | | | |  __/ \ \_/ /\ V /  __/ |   "
	std::cout << " \____/\__,_|_| |_| |_|\___|  \___/  \_/ \___|_|   "                                                 
	std::cout << "Retry?\n";
	std::cout << "Exit\n";
}

/* _____                        _____                
|  __ \                      |  _  |               
| |  \/ __ _ _ __ ___   ___  | | | |_   _____ _ __ 
| | __ / _` | '_ ` _ \ / _ \ | | | \ \ / / _ \ '__|
| |_\ \ (_| | | | | | |  __/ \ \_/ /\ V /  __/ |   
 \____/\__,_|_| |_| |_|\___|  \___/  \_/ \___|_|   
                                                   
                                                   */
=======
#include "GameOver.h"
#include <iostream>
#include "Windows.h"
#include "Board.h"

void GameOver::gameOver()
{
	//ASCII art
	SetConsoleTextAttribute(Board::hconsole, 12);
	std::cout << " ________           _________	 ___        ___      __________\n";
	std::cout << "|   _____|	   |   ___   |  |   \\      /   |    |   _______|\n";
	std::cout << "|  |               |  |   |  |  |    \\    /    |    |  |\n";
	std::cout << "|  |		   |  |   |  |  |  |\\ \\  / /|  |    |  |_______ \n";
	std::cout << "|  |    ______     |  |___|  |  |  |\\ \\  / /|  |    |   _______| \n";
	std::cout << "|  |   |___   |    |   ___   |  |  | \\ \\/ / |  |    |  |	\n";
	std::cout << "|  |_____  |  |    |  |   |  |  |  |  \\__/  |  |    |  |_______\n";
	std::cout << "|________| |__|    |__|   |__|  |__|        |__|    |__________|\n\n";
	SetConsoleTextAttribute(Board::hconsole, 7);
	std::cout << "      ___________      ___         ___    __________     _________ \n";
	std::cout << "     |   _____   |     \\  \\       /  /   |   _______|   |   ___   \\ \n";
	std::cout << "     |  |     |  |      \\  \\     /  /    |  |_______    |  |   \\   \\ \n";
	std::cout << "     |  |     |  |       \\  \\   /  /     |   _______|   |  |___/   /\n";
	std::cout << "     |  |     |  |        \\  \\ /  /      |  |	   |   ___   /\n";
	std::cout << "     |  |_____|  |         \\  v  /       |  |_______    |  |   \\  \\\n";
	std::cout << "     |___________|          \\___/        |__________|   |__|    \\__\\\n\n";

	//std::cout << "By: Christian Moncada, Angelina Ratchkov, Aedyn Timm-Bradley, Dylan Gullins & Arianna Thorson \n\n";
	SetConsoleTextAttribute(Board::hconsole, 6);
	std::cout << "      ___________\n";
	std::cout << " ____|           |____\n";
	std::cout << "| ___|    /|     |___ |\n";
	std::cout << "| |  |   / |     |  | |\n";
	std::cout << "\\ \\  \\     |     /  / /\n";
	std::cout << " \\ \\__\\  __|__  /__/ /\n";
	std::cout << "  \\____\\       /____/\n";
	std::cout << "       /       \\\n";
	std::cout << "      /_________\\\n";
	std::cout << "     |           |\n";
	std::cout << "     |___________|\n";
	exit(0);
}
>>>>>>> main
