#include "Game.h"
#include "Board.h"
#include <iostream>
#include "Player.h"


//Board randomName;

int main()
{
	//start scene here


	Board theBoard;
	Player player2;
	Player player3;
	Player player4;
	Player player1;
	player1.InitPlayer(1, 0, theBoard);
	player2.InitPlayer(2, 0, theBoard);
	player3.InitPlayer(3, 0, theBoard);
	player4.InitPlayer(4, 0, theBoard);
	theBoard.UpdateBoard(player1.GetPosition(), player2.GetPosition(), player3.GetPosition(), player4.GetPosition());
	bool gamecontinue = true;

	Player winner;
	bool hasWon = false;

	//determine player order here
	Player players[4] = { player1, player2, player3, player4 };
	int counter = 0;

	//game loop
	while (gamecontinue)
	{
		//repeats actions 4 times for each player
		for (int i = 0; i < std::size(players); i++)
		{
			std::cout << "Starting player " << players[i].GetNumber() << "'s turn." << std::endl;
			//roll dice
			int roll = players[i].rollDice();
			std::cout << "Player " << players[i].GetNumber() << " rolled a " << roll << std::endl;
			//move
			players[i].MovementUpdate(roll);
			//update board to draw new position
			theBoard.UpdateBoard(player1.GetPosition(), player2.GetPosition(), player3.GetPosition(), player4.GetPosition());

			//add check if the player's position is greater than or equal to 100, if it is, then remove that player from the array
			//and if they are the first person to 100, set them as the winner. Ex make winner = the player that one, and set hasWon = true so we know there is already a winner

		}
		//end of one turn
		counter += 1;
		std::cout << "End of turn " << counter << std::endl;
		//means there is only one player left
		if (std::size(players) <= 1)
		{
			std::cout << "Game has ended.\n";
			gamecontinue = false;
		}


	}
	//create ending screen here
}
