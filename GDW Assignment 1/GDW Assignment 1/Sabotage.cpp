//Sabotage Mechinic for GDW Game Dirty Derby//

#include <iostream>	
#include "Player.h"
#include "Board.h"
#include "Sabotage.h"


void BattleSystem(Player& challenger, Player& defender, Board& board) {
	//Determines if there is a Battle 

	//If Player Decide to Battle

	if (challenger.isTrapped() || defender.isTrapped())
	{
		std::cout << "Can't have a battle now, someone is trapped\n";
		return;
	}


	//Rolls the Battle Dics

	int Challenger_die, Defender_die;

	do {
		Challenger_die = challenger.rollDice();
		Defender_die = defender.rollDice();

		std::cout << " Challenger rolled a " << Challenger_die << std::endl;
		std::cout << " Defender rolled a " << Defender_die << std::endl;

		
	} while (Challenger_die == Defender_die);

		// Determines the winner and move both players
	//challenger wins
	if (Challenger_die > Defender_die) {
		//landed on boost square
		if (defender.isBoost()) {
			challenger.MovementUpdate(10, board);
			defender.ForceBoost();

			std::cout << " Sabotage was succsesful "<< std::endl;
			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
			return;

		}
		//normal square
		else {
			challenger.MovementUpdate(5, board);
			defender.ForceMovement(Challenger_die - Defender_die);
			defender.MovementUpdate(-1, board);

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
			defender.MovementUpdate(10, board);
			challenger.ForceBoost();

			std::cout << " Sabotage was succsesful " << std::endl;
			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
			return;
		}
		//normal square
		else {
			defender.MovementUpdate(5, board);
			challenger.ForceMovement(Defender_die - Challenger_die);
			challenger.MovementUpdate(-1, board);

			std::cout << " Sabotage was succsesful " << std::endl;
			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
			return;
		}
	}

}