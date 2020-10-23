#include "Game.h"

HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

void Game::resetCur(int x, int y)
{
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hconsole, coord);
}
