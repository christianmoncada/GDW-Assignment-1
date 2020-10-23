#include "Game.h"
#include "Board.h"
#include <iostream>
#include <Player.h>


//Board randomName;

int main()
{
	Board theBoard; //= Board::Board();
	//std::cout << "does this even work?\n\n";
	//Game::isOccupied = false;
	//std::cout << Game::isOccupied;
	Player player1(1, 0, theBoard);
	Player player2(2, 0, theBoard);
	Player player3(3, 0, theBoard);
	Player player4(4, 0, theBoard);
	theBoard.UpdateBoard(player1.GetPosition(), player2.GetPosition(), player3.GetPosition(), player4.GetPosition());
	
	std::cout << "Player num is: " << player2.GetNumber() << std::endl;
	

	std::cout << theBoard.UpdateBoard(1, 1, 1, 1);

}
