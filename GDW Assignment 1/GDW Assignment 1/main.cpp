#include "Game.h"
#include "Board.h"
#include <iostream>

Board theBoard; //= Board::Board();
//Board randomName;

int main()
{
	std::cout << "does this even work?\n\n";
	Game::isOccupied = false;
	//std::cout << Game::isOccupied;

	std::cout << theBoard.UpdateBoard(1, 1, 1, 1);

}
