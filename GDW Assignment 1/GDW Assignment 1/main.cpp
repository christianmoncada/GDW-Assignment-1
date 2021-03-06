#include "Game.h"
#include "Board.h"
#include <iostream>
#include "Player.h"
#include <vector>
#include "MainMenu.h"
<<<<<<< HEAD
#include "GameOver.h"
#include <algorithm>
=======
>>>>>>> parent of ddef407... Summary

void MovementUpdate(std::vector<Player>& players, int pnum, int roll, Board& board);


void BattleSystem(std::vector<Player> players, Player& challenger, Player& defender, int ci, int di, Board& board) {
	//Determines if there is a Battle 

	//If Player Decide to Battle

	if (challenger.isTrapped() || defender.isTrapped())
	{
		std::cout << "Can't have a battle now, someone is trapped\n";
		return;
	}
	

	//Rolls the Battle Dics

	int Challenger_die, Defender_die;
	char rollDiceTurn = 0;

	do {
		while (rollDiceTurn != '1')
		{
			cout << "Challenger, To roll the dice type 1 \n\n";
			cin >> rollDiceTurn;

		}
		srand(time(0));
		Challenger_die = (int)(1 + rand() % 6);
		rollDiceTurn = 0;
		while (rollDiceTurn != '1')
		{
			cout << " Defender, To roll the dice type 1 \n\n";
			cin >> rollDiceTurn;

		}
		srand(time(0));
		Defender_die = (int)(1 + rand() % 6);
		rollDiceTurn = 0;

		std::cout << " Challenger rolled a " << Challenger_die << std::endl;
		std::cout << " Defender rolled a " << Defender_die << std::endl;


	} while (Challenger_die == Defender_die);

	// Determines the winner and move both players
//challenger wins
	if (Challenger_die > Defender_die) {
		//landed on boost square
		if (defender.isBoost()) {
			
			challenger.ForceBoost(false);
			//MovementUpdate(players, ci, 10, board);
			challenger.ForceMovement(10);
			MovementUpdate(players, ci, 0, board);
			//MovementUpdate(players, di, 0, board);
			defender.ForceBoost(false);
			

			std::cout << " Sabotage was successful " << std::endl;
			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
			return;

		}
		//normal square
		else if (!defender.isBoost()){
			
			//MovementUpdate(players, ci, 5, board);
			challenger.ForceMovement(5);
			
			MovementUpdate(players, ci, 0, board);
			defender.ForceMovement(-(Challenger_die - Defender_die));
			MovementUpdate(players, di, 0, board);
			

			std::cout << " Sabotage was successful " << std::endl;
			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
			return;
		}
	}
	//defender wins
	else if (Defender_die > Challenger_die) {
		//landed on boost
		if (defender.isBoost()) {
			
			defender.ForceBoost(false);
			//MovementUpdate(players, di, 10, board);
			defender.ForceMovement(10);
			
			MovementUpdate(players, di, 0, board);
			//MovementUpdate(players, ci, 0, board);
			
			challenger.ForceBoost(false);

			std::cout << " Sabotage failed " << std::endl;
			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
			return;
		}
		//normal square
		else if (!defender.isBoost()) {
			//MovementUpdate(players, di, 5, board);
			defender.ForceMovement(5);
			
			MovementUpdate(players, di, 0, board);
			challenger.ForceMovement(-(Defender_die - Challenger_die));
			MovementUpdate(players, ci, 0, board);
			

			std::cout << " Sabotage failed " << std::endl;
			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
			return;
		}
	}

}

void MovementUpdate(std::vector<Player>& players, int pnum, int roll, Board& board)
{
	//std::cout << "Is this being called?\n";
	int player_num = players[pnum].GetNumber();
	//stops on trap
	if (players[pnum].isTrapped())
	{
		players[pnum].SetTrapped(false);
		return;
	}

	for (int i = 0; i < roll; i++)
	{
		players[pnum].ForceMovement(1);
		//cant battle on trap square
		if (board.isOccupied(players[pnum].GetPosition(), player_num) && !(board.isTrap(players[pnum].GetPosition())) && players[pnum].GetPosition() !=100)
		{
			int C1 = 13; //colour1
			int C2 = 16; //colour2
			char ans;
			if (players[pnum].p_colour(player_num) == "Red") C1 = 4;
			if (players[pnum].p_colour(player_num) == "Green") C1 = 2;
			if (players[pnum].p_colour(player_num) == "Blue") C1 = 1;
			if (players[pnum].p_colour(player_num) == "Yellow") C1 = 6;

			if (players[pnum].p_colour(board.getPlayer(players[pnum].GetPosition(), player_num)) == "Red") C2 = 4;
			if (players[pnum].p_colour(board.getPlayer(players[pnum].GetPosition(), player_num)) == "Green") C2 = 2;
			if (players[pnum].p_colour(board.getPlayer(players[pnum].GetPosition(), player_num)) == "Blue") C2 = 1;
			if (players[pnum].p_colour(board.getPlayer(players[pnum].GetPosition(), player_num)) == "Yellow") C2 = 6;
			SetConsoleTextAttribute(board.hconsole, 11); std::cout << "Does player "; SetConsoleTextAttribute(board.hconsole, C1); std::cout << players[pnum].GetNumber(); SetConsoleTextAttribute(board.hconsole, 11);
			std::cout << " want to battle player "; SetConsoleTextAttribute(board.hconsole, C2); std::cout << board.getPlayer(players[pnum].GetPosition(), player_num); SetConsoleTextAttribute(board.hconsole, 11); std::cout << "?                                        \n";
			SetConsoleTextAttribute(board.hconsole, 14);

			std::cout << "Enter y for yes, anything else for no.                                        \n";
			std::cin >> ans;
			SetConsoleTextAttribute(board.hconsole, 15);
			if (ans == 'Y' || ans == 'y')
			{
				int other_element;
				for (int i = 0; i < players.size(); i++)
				{
					if (players[i].GetNumber() == board.getPlayer(players[pnum].GetPosition(), player_num))
					{
						other_element = i;
						break;
					}
				}
				BattleSystem(players, players[pnum], players[other_element],pnum, other_element, board);
				break;
			}

		}
		else if (board.isOccupied(players[pnum].GetPosition(), player_num) && board.isTrap(players[pnum].GetPosition()))
		{
			std::cout << "Can't sabotage, this player is on a trap\n";
		}
	}
	if (board.isTrap(players[pnum].GetPosition()))//is this position a trap
	{
		SetConsoleTextAttribute(board.hconsole, 12);	std::cout << "Landed on a trap!                                        \n                                                                                \n                                                                                \n";
		players[pnum].SetTrapped(true);
		SetConsoleTextAttribute(board.hconsole, 15);
	}
	if (board.isBoost(players[pnum].GetPosition()))//is this position a boost
	{
		SetConsoleTextAttribute(board.hconsole, 10);	std::cout << "Landed on a boost!                                        \n                                                                                \n                                                                                \n";
		players[pnum].ForceBoost(true);
		//std::cout << players[pnum].isBoost() << std::endl;
		SetConsoleTextAttribute(board.hconsole, 15);
	}
	//doesnt go past 100
	if (players[pnum].GetPosition() > 100)
	{
		players[pnum].SetPos(100);
	}
	//doesnt go behind 0
	if (players[pnum].GetPosition() < 1)
	{
		players[pnum].SetPos(1);
	}

	//might not be needed
	board.changePos(players[pnum].GetPosition(), player_num);

}

int main()
{
	//start scene here
	MainMenu startMenu;
	startMenu.mainMenu();
	int roll;
	Board theBoard;
<<<<<<< HEAD
	char rollDiceTurnStart = '0';
	bool startLoop = true;
=======
	Player player2;
	Player player3;
	Player player4;
	Player player1;
	player1.InitPlayer(1, 0);
	player2.InitPlayer(2, 0);
	player3.InitPlayer(3, 0);
	player4.InitPlayer(4, 0);
	theBoard.UpdateBoard(player1.GetPosition(), player2.GetPosition(), player3.GetPosition(), player4.GetPosition());
>>>>>>> parent of ddef407... Summary
	bool gamecontinue = true;
	int rollDiceTurn = 1;
	Player winner;
	Player isSecond;
	Player isThird;
	bool hasWon = false;
	bool second = false;
	bool third = false;
	//determine player order here
	std::vector<Player> players;
	//Player players[4] = { player1, player2, player3, player4 };
	Player player2;
	Player player3;
	Player player4;
	Player player1;
	player1.InitPlayer(1, 1);
	player2.InitPlayer(2, 1);
	player3.InitPlayer(3, 1);
	player4.InitPlayer(4, 1);

	int startRoll1;
	int startRoll2;
	int startRoll3;
	int startRoll4;


	while (startLoop == true)
	{
		while (rollDiceTurnStart != '1')
		{
			cout << "To decide turn order, Player 1 roll the dice by typing 1 \n";
			cin >> rollDiceTurnStart;
		}
		roll = player1.rollDice();
		std::cout << "Player 1 rolled a " << roll << std::endl;
		startRoll1 = roll;
		rollDiceTurnStart = '0';

		while (rollDiceTurnStart != '1')
		{
			cout << "To decide turn order, Player 2 roll the dice by typing 1 \n";
			cin >> rollDiceTurnStart;
		}
		roll = player1.rollDice();
		std::cout << "Player 2 rolled a " << roll << std::endl;
		startRoll2 = roll;
		rollDiceTurnStart = '0';

		while (rollDiceTurnStart != '1')
		{
			cout << "To decide turn order, Player 3 roll the dice by typing 1 \n";
			cin >> rollDiceTurnStart;
		}
		roll = player1.rollDice();
		std::cout << "Player 3 rolled a " << roll << std::endl;
		startRoll3 = roll;
		rollDiceTurnStart = '0';

		while (rollDiceTurnStart != '1')
		{
			cout << "To decide turn order, Player 4 roll the dice by typing 1 \n";
			cin >> rollDiceTurnStart;
		}
		roll = player1.rollDice();
		std::cout << "Player 4 rolled a " << roll << std::endl;
		startRoll4 = roll;
		rollDiceTurnStart = '0';

		if (startRoll1 > startRoll2 && startRoll1 > startRoll3 && startRoll1 > startRoll4)
		{
			players.push_back(player1);
			players.push_back(player2);
			players.push_back(player3);
			players.push_back(player4);
			startLoop = false;
			cout << "The player order is: Player 1, Player 2, Player 3, Player 4 \n";
		}
		else if (startRoll2 > startRoll1 && startRoll2 > startRoll3 && startRoll2 > startRoll4)
		{
			players.push_back(player2);
			players.push_back(player3);
			players.push_back(player4);
			players.push_back(player1);
			startLoop = false;
			cout << "The player order is: Player 2, Player 3, Player 4, Player 1 \n";
		}
		else if (startRoll3 > startRoll1 && startRoll3 > startRoll2 && startRoll3 > startRoll4)
		{
			players.push_back(player3);
			players.push_back(player4);
			players.push_back(player1);
			players.push_back(player2);
			startLoop = false;
			cout << "The player order is: Player 3, Player 4, Player 1, Player 2 \n";
		}
		else if (startRoll4 > startRoll1 && startRoll4 > startRoll2 && startRoll4 > startRoll3)
		{
			players.push_back(player4);
			players.push_back(player1);
			players.push_back(player2);
			players.push_back(player3);
			startLoop = false;
			cout << "The player order is: Player 4, Player 1, Player 2, Player 3 \n";
		}
		else
		{
			cout << "The highest rollers tied, everyone reroll \n";
		}
	}

	int counter = 0;

	//game loop
	while (gamecontinue)
	{
		
		//repeats actions 4 times for each player
		for (int i = 0; i < players.size(); i++)
		{
<<<<<<< HEAD
			//theBoard.resetCur(0, 0);
			std::cout << std::string(80, ' ') << "\r\n";
			std::cout << std::string(80, ' ') << "\r\n";
			std::cout << std::string(80, ' ') << "\r\n";
			std::cout << std::string(80, ' ') << "\r\n";
			theBoard.UpdateBoard(player1.GetPosition(), player2.GetPosition(), player3.GetPosition(), player4.GetPosition());
			rollDiceTurn = 0;
			roll = 0; //resets roll each turn

			//theBoard.resetCur(0, 38);
			SetConsoleTextAttribute(theBoard.hconsole, 15);
			std::cout << "Starting player " << players[i].GetNumber() << "'s turn.\n\n";
			//roll dice
			if (players[i].isTrapped())
			{
				SetConsoleTextAttribute(theBoard.hconsole, 4);	std::cout << "\tSorry, you're on a trap!\n";
=======
			Board::resetCur();
			theBoard.UpdateBoard(player1.GetPosition(), player2.GetPosition(), player3.GetPosition(), player4.GetPosition());
			rollDiceTurn = 0;
			roll = 0; //resets roll each turn
			std::cout << "Starting player " << players[i].GetNumber() << "'s turn." << std::endl;
			//roll dice
			if (players[i].isTrapped())
			{
				std::cout << "Sorry, you're on a trap!\n";
>>>>>>> parent of ddef407... Summary
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
<<<<<<< HEAD
			MovementUpdate(players, i,roll, theBoard);
			//players[i].MovementUpdate(roll, theBoard);
			
=======
			players[i].MovementUpdate(roll, theBoard);
			//update board to draw new position
>>>>>>> parent of ddef407... Summary

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
<<<<<<< HEAD
			// std::cout << "Game has ended.\n";
			  gamecontinue = false;
			// std::cout << "The winner is Player " << winner.GetNumber() << std::endl;
			// std::cout << "Second place: Player" << isSecond.GetNumber() << std::endl;
			// std::cout << "Third place: Player" << isThird.GetNumber() << std::endl;
			// std::cout << "DNF: Player" << players[0].GetNumber() << std::endl;
=======
			std::cout << "Game has ended.\n";
			gamecontinue = false;
			std::cout << "The winner is player " << winner.GetNumber() << std::endl;
			std::cout << "Second place: " << isSecond.GetNumber() << std::endl;
			std::cout << "Third place: " << isThird.GetNumber() << std::endl;
			std::cout << "Last place: " << players[0].GetNumber() << std::endl;
>>>>>>> parent of ddef407... Summary
		}

	}
	//create ending screen here
<<<<<<< HEAD
	GameOver endScreen;
	endScreen.gameOver(winner.GetNumber(), isSecond.GetNumber(), isThird.GetNumber(), players[0].GetNumber());
=======
>>>>>>> parent of ddef407... Summary
}
