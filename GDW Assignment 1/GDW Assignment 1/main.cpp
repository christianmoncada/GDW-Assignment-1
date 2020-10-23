#include "Game.h"
#include "Board.h"
#include <iostream>
#include "Player.h"


//Board randomName;

int main()
{
	Board theBoard; //= Board::Board();
	//std::cout << "does this even work?\n\n";
	//Game::isOccupied = false;
	//std::cout << Game::isOccupied;
	Player player2;
	Player player3;
	Player player4;
	Player player1;
	player1.InitPlayer(1, 0, theBoard);
	player2.InitPlayer(2, 0, theBoard);
	player3.InitPlayer(3, 0, theBoard);
	player4.InitPlayer(4, 0, theBoard);
	theBoard.UpdateBoard(player1.GetPosition(), player2.GetPosition(), player3.GetPosition(), player4.GetPosition());
	
	std::cout << "Player num is: " << player1.GetNumber() << std::endl;
	std::cout << "Player num is: " << player2.GetNumber() << std::endl;
	std::cout << "Player num is: " << player3.GetNumber() << std::endl;
	std::cout << "Player num is: " << player4.GetNumber() << std::endl;
	

	std::cout << theBoard.UpdateBoard(1, 1, 1, 1);
	
}
