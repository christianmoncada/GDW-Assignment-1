//Sabotage Mechinic for GDW Game Dirty Derby//

#include<iostream>	
#include<Player.h>
#include<Board.h>
#include<Sabotage.h>


int BattleSystem() {
	int Challenger, Defender;
	char Battle_decider;
	bool Battle = false;
	Challenger = activePlayer;
	Defender = isOccupied(p_pos, p_num);

	//Determines if there is a Battle 

	if (PlayerOnSpot > 1) {
		std::cout << " Would You Like To Battle Y/N? ";
		std::cin >> Battle_decider;
		if (Battle_decider == 'Y' || Battle_decider == 'y') {
			Battle = true;
		}
	}

	//If Player Decide to Battle

	if (Battle = true) {
		(set_position player == current_position player2);
		if (onTrap = true) {
			Battle = false;
		}


		//Rolls the Battle Dics

		int Challenger_Die, Defender_die;

		Challenger_die = 1 + rand() % 6;
		Defender_die = 1 + rand() % 6;

		std::cout << " Challenger rolled a " << Challenger_Die << endl;
		std::cout << " Defender rolled a " << Defender_die << endl;

		// Rerolls if there is a tie 
		if (Challenger_die == Defender_die) {
			Challenger_die = 1 + rand() % 6;
			return Challenger_die;
			Defender_die + 1 + rand() % 6;
			return Defender_die;
		}
		// Determines the winner and move both players
		else if (Challenger_die > Defender_die) {
			if (onBoost = true) {
				Challenger = (ForceMovement(10);
				Defender = (ForceMovement - (Challenger_die - Defender_die));
				std::cout << " Sabotage was succsesful " endl;
			}
			else {
				Challenger = (ForceMovement(5);
				Defender = (ForceMovement - (Challenger_die - Defender_die));
				std::cout << " Sabotage was succesful " endl;
			}
		}
		else if (Defender_die > Challenger_die) {
			if (Player current_position = Boost) {
				Defender = (ForceMovement(10);
				Challenger = (ForceMovement - (Defender_die - Challenger_die));
				std::cout << " Sabotage failed " endl;
			}
			else {
				Defender = (ForceMovement(5);
				Challenger = (ForceMovement - (Defender_die - Challenger_die));
				std::cout << " Sabotage failed " endl;
			}
		}

	}
}