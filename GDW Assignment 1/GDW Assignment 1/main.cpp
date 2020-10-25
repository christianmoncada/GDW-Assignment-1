#include "Game.h"
#include "Board.h"
#include <iostream>
#include "Player.h"
#include <vector>
#include "MainMenu.h"
#include "GameOver.h"
#include <algorithm>

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
		Challenger_die = challenger.rollDice();
		rollDiceTurn = 0;
		while (rollDiceTurn != '1')
		{
			cout << " Defender, To roll the dice type 1 \n\n";
			cin >> rollDiceTurn;

		}
		Defender_die = defender.rollDice();
		rollDiceTurn = 0;

		std::cout << " Challenger rolled a " << Challenger_die << std::endl;
		std::cout << " Defender rolled a " << Defender_die << std::endl;


	} while (Challenger_die == Defender_die);

	// Determines the winner and move both players
//challenger wins
	if (Challenger_die > Defender_die) {
		//landed on boost square
		if (defender.isBoost()) {
			
			//MovementUpdate(players, ci, 10, board);
			//challenger.ForceMovement(10);
			for (int i = 0; i < 10; i++)
			{
				challenger.ForceMovement(1);
				if (board.isOccupied(challenger.GetNumber(), challenger.GetPosition()))
				{
					int C1 = 13; //colour1
					int C2 = 16; //colour2
					char ans;
					if (challenger.p_colour(challenger.GetNumber()) == "Red") C1 = 4;
					if (challenger.p_colour(challenger.GetNumber()) == "Green") C1 = 2;
					if (challenger.p_colour(challenger.GetNumber()) == "Blue") C1 = 1;
					if (challenger.p_colour(challenger.GetNumber()) == "Yellow") C1 = 6;

					if (challenger.p_colour(board.getPlayer(challenger.GetPosition(), challenger.GetNumber())) == "Red") C2 = 4;
					if (challenger.p_colour(board.getPlayer(challenger.GetPosition(), challenger.GetNumber())) == "Green") C2 = 2;
					if (challenger.p_colour(board.getPlayer(challenger.GetPosition(), challenger.GetNumber())) == "Blue") C2 = 1;
					if (challenger.p_colour(board.getPlayer(challenger.GetPosition(), challenger.GetNumber())) == "Yellow") C2 = 6;
					SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "Does player "; SetConsoleTextAttribute(Board::hconsole, C1); std::cout << challenger.p_colour(challenger.GetNumber()); SetConsoleTextAttribute(Board::hconsole, 11);
					std::cout << " want to battle player "; SetConsoleTextAttribute(Board::hconsole, C2); std::cout << challenger.p_colour(board.getPlayer(challenger.GetPosition(), challenger.GetNumber())); SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "?                                        \n";
					SetConsoleTextAttribute(Board::hconsole, 14);

					std::cout << "Enter y for yes, anything else for no.                                        \n";
					std::cin >> ans;
					SetConsoleTextAttribute(Board::hconsole, 15);
					if (ans == 'Y' || ans == 'y')
					{
						int other_element;
						for (int i = 0; i < players.size(); i++)
						{
							if (players[i].GetNumber() == board.getPlayer(challenger.GetPosition(), challenger.GetNumber()))
							{
								other_element = i;
								break;
							}
						}
						BattleSystem(players, challenger, players[other_element], ci, other_element, board);
						break;
					}
				}
			}

			MovementUpdate(players, ci, 0, board);
			defender.ForceBoost(false);

			std::cout << " Sabotage was succsesful " << std::endl;
			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
			return;

		}
		//normal square
		else {
			
			//MovementUpdate(players, ci, 5, board);
			//challenger.ForceMovement(5);
			for (int i = 0; i < 5; i++)
			{
				challenger.ForceMovement(1);
				if (board.isOccupied(challenger.GetNumber(), challenger.GetPosition()))
				{
					int C1 = 13; //colour1
					int C2 = 16; //colour2
					char ans;
					if (challenger.p_colour(challenger.GetNumber()) == "Red") C1 = 4;
					if (challenger.p_colour(challenger.GetNumber()) == "Green") C1 = 2;
					if (challenger.p_colour(challenger.GetNumber()) == "Blue") C1 = 1;
					if (challenger.p_colour(challenger.GetNumber()) == "Yellow") C1 = 6;

					if (challenger.p_colour(board.getPlayer(challenger.GetPosition(), challenger.GetNumber())) == "Red") C2 = 4;
					if (challenger.p_colour(board.getPlayer(challenger.GetPosition(), challenger.GetNumber())) == "Green") C2 = 2;
					if (challenger.p_colour(board.getPlayer(challenger.GetPosition(), challenger.GetNumber())) == "Blue") C2 = 1;
					if (challenger.p_colour(board.getPlayer(challenger.GetPosition(), challenger.GetNumber())) == "Yellow") C2 = 6;
					SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "Does player "; SetConsoleTextAttribute(Board::hconsole, C1); std::cout << challenger.p_colour(challenger.GetNumber()); SetConsoleTextAttribute(Board::hconsole, 11);
					std::cout << " want to battle player "; SetConsoleTextAttribute(Board::hconsole, C2); std::cout << challenger.p_colour(board.getPlayer(challenger.GetPosition(), challenger.GetNumber())); SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "?                                        \n";
					SetConsoleTextAttribute(Board::hconsole, 14);

					std::cout << "Enter y for yes, anything else for no.                                        \n";
					std::cin >> ans;
					SetConsoleTextAttribute(Board::hconsole, 15);
					if (ans == 'Y' || ans == 'y')
					{
						int other_element;
						for (int i = 0; i < players.size(); i++)
						{
							if (players[i].GetNumber() == board.getPlayer(challenger.GetPosition(), challenger.GetNumber()))
							{
								other_element = i;
								break;
							}
						}
						BattleSystem(players, challenger, players[other_element], ci, other_element, board);
						break;
					}
				}
			}
			MovementUpdate(players, ci, 0, board);
			defender.ForceMovement(-(Challenger_die - Defender_die));
			MovementUpdate(players, di, 0, board);
			

			std::cout << " Sabotage was succsesful " << std::endl;
			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
			return;
		}
	}
	//defender wins
	else if (Defender_die > Challenger_die) {
		//landed on boost
		if (defender.isBoost()) {
			//MovementUpdate(players, di, 10, board);
			//defender.ForceMovement(10);
			for (int i = 0; i < 10; i++)
			{
				defender.ForceMovement(1);
				if (board.isOccupied(defender.GetNumber(), defender.GetPosition()))
				{
					int C1 = 13; //colour1
					int C2 = 16; //colour2
					char ans;
					if (defender.p_colour(defender.GetNumber()) == "Red") C1 = 4;
					if (defender.p_colour(defender.GetNumber()) == "Green") C1 = 2;
					if (defender.p_colour(defender.GetNumber()) == "Blue") C1 = 1;
					if (defender.p_colour(defender.GetNumber()) == "Yellow") C1 = 6;

					if (defender.p_colour(board.getPlayer(defender.GetPosition(), defender.GetNumber())) == "Red") C2 = 4;
					if (defender.p_colour(board.getPlayer(defender.GetPosition(), defender.GetNumber())) == "Green") C2 = 2;
					if (defender.p_colour(board.getPlayer(defender.GetPosition(), defender.GetNumber())) == "Blue") C2 = 1;
					if (defender.p_colour(board.getPlayer(defender.GetPosition(), defender.GetNumber())) == "Yellow") C2 = 6;
					SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "Does player "; SetConsoleTextAttribute(Board::hconsole, C1); std::cout << defender.p_colour(defender.GetNumber()); SetConsoleTextAttribute(Board::hconsole, 11);
					std::cout << " want to battle player "; SetConsoleTextAttribute(Board::hconsole, C2); std::cout << defender.p_colour(board.getPlayer(defender.GetPosition(), defender.GetNumber())); SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "?                                        \n";
					SetConsoleTextAttribute(Board::hconsole, 14);

					std::cout << "Enter y for yes, anything else for no.                                        \n";
					std::cin >> ans;
					SetConsoleTextAttribute(Board::hconsole, 15);
					if (ans == 'Y' || ans == 'y')
					{
						int other_element;
						for (int i = 0; i < players.size(); i++)
						{
							if (players[i].GetNumber() == board.getPlayer(defender.GetPosition(), defender.GetNumber()))
							{
								other_element = i;
								break;
							}
						}
						BattleSystem(players, defender, players[other_element], ci, other_element, board);
						break;
					}
				}
			}
			MovementUpdate(players, di, 0, board);
			challenger.ForceBoost(false);

			std::cout << " Sabotage was succsesful " << std::endl;
			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
			return;
		}
		//normal square
		else {
			//MovementUpdate(players, di, 5, board);
			//defender.ForceMovement(5);
			for (int i = 0; i < 5; i++)
			{
				defender.ForceMovement(1);
				if (board.isOccupied(defender.GetNumber(), defender.GetPosition()))
				{
					int C1 = 13; //colour1
					int C2 = 16; //colour2
					char ans;
					if (defender.p_colour(defender.GetNumber()) == "Red") C1 = 4;
					if (defender.p_colour(defender.GetNumber()) == "Green") C1 = 2;
					if (defender.p_colour(defender.GetNumber()) == "Blue") C1 = 1;
					if (defender.p_colour(defender.GetNumber()) == "Yellow") C1 = 6;

					if (defender.p_colour(board.getPlayer(defender.GetPosition(), defender.GetNumber())) == "Red") C2 = 4;
					if (defender.p_colour(board.getPlayer(defender.GetPosition(), defender.GetNumber())) == "Green") C2 = 2;
					if (defender.p_colour(board.getPlayer(defender.GetPosition(), defender.GetNumber())) == "Blue") C2 = 1;
					if (defender.p_colour(board.getPlayer(defender.GetPosition(), defender.GetNumber())) == "Yellow") C2 = 6;
					SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "Does player "; SetConsoleTextAttribute(Board::hconsole, C1); std::cout << defender.p_colour(defender.GetNumber()); SetConsoleTextAttribute(Board::hconsole, 11);
					std::cout << " want to battle player "; SetConsoleTextAttribute(Board::hconsole, C2); std::cout << defender.p_colour(board.getPlayer(defender.GetPosition(), defender.GetNumber())); SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "?                                        \n";
					SetConsoleTextAttribute(Board::hconsole, 14);

					std::cout << "Enter y for yes, anything else for no.                                        \n";
					std::cin >> ans;
					SetConsoleTextAttribute(Board::hconsole, 15);
					if (ans == 'Y' || ans == 'y')
					{
						int other_element;
						for (int i = 0; i < players.size(); i++)
						{
							if (players[i].GetNumber() == board.getPlayer(defender.GetPosition(), defender.GetNumber()))
							{
								other_element = i;
								break;
							}
						}
						BattleSystem(players, defender, players[other_element], ci, other_element, board);
						break;
					}
				}
			}
			MovementUpdate(players, di, 0, board);
			challenger.ForceMovement(-(Defender_die - Challenger_die));
			MovementUpdate(players, ci, 0, board);
			

			std::cout << " Sabotage was succsesful " << std::endl;
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
		if (board.isOccupied(players[pnum].GetPosition(), player_num) && !(board.isTrap(players[pnum].GetPosition())))
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
			SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "Does player "; SetConsoleTextAttribute(Board::hconsole, C1); std::cout << players[pnum].p_colour(player_num); SetConsoleTextAttribute(Board::hconsole, 11);
			std::cout << " want to battle player "; SetConsoleTextAttribute(Board::hconsole, C2); std::cout << players[pnum].p_colour(board.getPlayer(players[pnum].GetPosition(), player_num)); SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "?                                        \n";
			SetConsoleTextAttribute(Board::hconsole, 14);

			std::cout << "Enter y for yes, anything else for no.                                        \n";
			std::cin >> ans;
			SetConsoleTextAttribute(Board::hconsole, 15);
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
		else if (board.isTrap(players[pnum].GetPosition()))
		{
			std::cout << "Can't sabotage, other player is on trap\n";
		}
	}
	if (board.isTrap(players[pnum].GetPosition()))//is this position a trap
	{
		SetConsoleTextAttribute(Board::hconsole, 12);	std::cout << "Landed on a trap!                                        \n                                                                                \n                                                                                \n";
		players[pnum].SetTrapped(true);
		SetConsoleTextAttribute(Board::hconsole, 15);
	}
	if (board.isBoost(players[pnum].GetPosition()))//is this position a boost
	{
		SetConsoleTextAttribute(Board::hconsole, 10);	std::cout << "Landed on a boost!                                        \n                                                                                \n                                                                                \n";
		players[pnum].ForceBoost(true);
		SetConsoleTextAttribute(Board::hconsole, 15);
	}
	//doesnt go past 100
	if (players[pnum].GetPosition() > 100)
	{
		players[pnum].SetPos(100);
	}
	//doesnt go behind 0
	if (players[pnum].GetPosition() < 0)
	{
		players[pnum].SetPos(0);
	}

	//might not be needed
	board.changePos(players[pnum].GetPosition(), player_num);

}

int main()
{
	MoveWindow(GetConsoleWindow(), 150, 100, 900, 500, true);
	//start scene here

	MainMenu startMenu;
	startMenu.mainMenu();

	int roll;
	Board theBoard;
	
	bool gamecontinue = true;
	char rollDiceTurn;
	Player winner;
	Player isSecond;
	Player isThird;
	Player DNF;
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
	player1.InitPlayer(1, 0);
	player2.InitPlayer(2, 0);
	player3.InitPlayer(3, 0);
	player4.InitPlayer(4, 0);
	players.push_back(player1);
	players.push_back(player2);
	players.push_back(player3);
	players.push_back(player4);
	
	
	int counter = 0;
	MoveWindow(GetConsoleWindow(), 150, 100, 780, 800, true);
	//game loop
	while (gamecontinue)
	{
		
		//repeats actions 4 times for each player
		for (int i = 0; i < players.size(); i++)
		{
			Board::resetCur(0, 0);
			std::cout << std::string(80, ' ') << "\r\n";
			std::cout << std::string(80, ' ') << "\r\n";
			std::cout << std::string(80, ' ') << "\r\n";
			std::cout << std::string(80, ' ') << "\r\n";
			theBoard.UpdateBoard(player1.GetPosition(), player2.GetPosition(), player3.GetPosition(), player4.GetPosition());
			rollDiceTurn = 0;
			roll = 0; //resets roll each turn

			Board::resetCur(0, 38);
			SetConsoleTextAttribute(Board::hconsole, 15);
			std::cout << "Starting player " << players[i].GetNumber() << "'s turn.\n\n";
			//roll dice
			if (players[i].isTrapped())
			{
				SetConsoleTextAttribute(Board::hconsole, 4);	std::cout << "\tSorry, you're on a trap!\n";
			}
			else
			{
				while (rollDiceTurn != '1')
				{
					cout << "To roll the dice type 1 \n\n";
					cin >> rollDiceTurn;

				}
				roll = players[i].rollDice();
				std::cout << "Player " << players[i].GetNumber() << " rolled a " << roll << std::endl;

			}
			//move
			MovementUpdate(players, i,roll, theBoard);
			//players[i].MovementUpdate(roll, theBoard);
			

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
				else if (hasWon && !second)
				{
					isSecond = players[i];
					second = true;
				}
				else if (hasWon && second && !third)
				{
					isThird = players[i];
					third = true;
				}
				std::cout << "Player " << players[i].GetNumber() << " has finished!" << std::endl;

			}
			//stops early if one person is left
			if (players.size() <= 1)
			{
				break;
			}
			
		}
		//end of one turn
		counter += 1;
		
		for (int i = 0; i < players.size(); i++)
		{
			
			if (players[i].GetPosition() == 100)
			{
				players.erase(players.begin() + i);
				i--;

			}
			// stops early if one person is left
			if (players.size() <= 1)
			{
				break;
			}
		}
		
		std::cout << "End of turn " << counter << std::endl;
		//means there is only one player left
		if (players.size() <= 1)
		{
			std::cout << "Game has ended.\n";
			gamecontinue = false;
			std::cout << "The winner is player " << winner.GetNumber() << std::endl;
			std::cout << "Second place: player" << isSecond.GetNumber() << std::endl;
			std::cout << "Third place: player" << isThird.GetNumber() << std::endl;
			std::cout << "DNF: player" << players[0].GetNumber() << std::endl;
		}

	}
	//create ending screen here
	GameOver endScreen;
	endScreen.gameOver();
}
