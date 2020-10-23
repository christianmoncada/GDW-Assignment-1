#include "Game.h"
#include "Board.h"
#include <iostream>
#include "Player.h"
#include <vector>


//Board randomName;

int main()
{
	//start scene here

	int roll;
	Board theBoard;
	Player player2;
	Player player3;
	Player player4;
	Player player1;
	player1.InitPlayer(1, 0);
	player2.InitPlayer(2, 0);
	player3.InitPlayer(3, 0);
	player4.InitPlayer(4, 0);
	theBoard.UpdateBoard(player1.GetPosition(), player2.GetPosition(), player3.GetPosition(), player4.GetPosition());
	bool gamecontinue = true;
	int rollDiceTurn = 0;
	Player winner;
	Player isSecond;
	Player isThird;
	bool hasWon = false;
	bool second = false;
	bool third = false;

	
	//determine player order here
	std::vector<Player> players;
	//Player players[4] = { player1, player2, player3, player4 };
	players.push_back(player1);
	players.push_back(player2);
	players.push_back(player3);
	players.push_back(player4);
	int counter = 0;

	//game loop
	while (gamecontinue)
	{
		//repeats actions 4 times for each player
		for (int i = 0; i < players.size(); i++)
		{
			rollDiceTurn = 0;
			roll = 0; //resets roll each turn
			std::cout << "Starting player " << players[i].GetNumber() << "'s turn." << std::endl;
			//roll dice
			if (players[i].isTrapped())
			{
				std::cout << "Sorry, you're on a trap!\n";
			}
			else
			{
				while (rollDiceTurn != 1)
				{
					cout << "To roll the dice type 1 \n";
					cin >> rollDiceTurn;

				}
				roll = players[i].rollDice();
				std::cout << "Player " << players[i].GetNumber() << " rolled a " << roll << std::endl;

			}
			//move
			players[i].MovementUpdate(roll, theBoard);
			//update board to draw new position
			theBoard.UpdateBoard(player1.GetPosition(), player2.GetPosition(), player3.GetPosition(), player4.GetPosition());

			std::cout << "Player " << players[i].GetNumber() << " position: " << players[i].GetPosition() << std::endl;

			//add check if the player's position is greater than or equal to 100, if it is, then remove that player from the array
			//and if they are the first person to 100, set them as the winner. Ex make winner = the player that won, and set hasWon = true so we know there is already a winner
			if (players[i].GetPosition() == 100)
			{
				if (!hasWon)
				{
					winner = players[i];
					hasWon = true;
				}
				if (hasWon && !second)
				{
					isSecond = players[i];
					second = true;
				}
				if (hasWon && second && !third)
				{
					isThird = players[i];
					third = true;
				}
				std::cout << "Player " << players[i].GetNumber() << " has finished!" << std::endl;
				//removes the player from the array and pushes the other members accordingly
				players.erase(players.begin() + i);
				//brings the loop back
				i=-1;
			}
			//stops early if one person is left
			if (players.size() <= 1)
			{
				break;
			}

		}
		//end of one turn
		counter += 1;

		std::cout << "End of turn " << counter << std::endl;
		//means there is only one player left
		if (players.size() <= 1)
		{
			std::cout << "Game has ended.\n";
			gamecontinue = false;
			std::cout << "The winner is player " << winner.GetNumber() << std::endl;
			std::cout << "Second place: " << isSecond.GetNumber() << std::endl;
			std::cout << "Third place: " << isThird.GetNumber() << std::endl;
			std::cout << "Last place: " << players[0].GetNumber() << std::endl;
		}

	}
	//create ending screen here
}
