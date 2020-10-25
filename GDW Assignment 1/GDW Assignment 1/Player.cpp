#include "Player.h"
#include "Board.h"
#include "Sabotage.h"

//void BattleSystem(Player& challenger, Player& defender, Board& board) {
//	//Determines if there is a Battle 
//
//	//If Player Decide to Battle
//
//	if (challenger.isTrapped() || defender.isTrapped())
//	{
//		std::cout << "Can't have a battle now, someone is trapped\n";
//		return;
//	}
//
//
//	//Rolls the Battle Dics
//
//	int Challenger_die, Defender_die;
//
//	do {
//		Challenger_die = challenger.rollDice();
//		Defender_die = defender.rollDice();
//
//		std::cout << " Challenger rolled a " << Challenger_die << std::endl;
//		std::cout << " Defender rolled a " << Defender_die << std::endl;
//
//
//	} while (Challenger_die == Defender_die);
//
//	// Determines the winner and move both players
////challenger wins
//	if (Challenger_die > Defender_die) {
//		//landed on boost square
//		if (defender.isBoost()) {
//			challenger.MovementUpdate(10, board);
//			defender.ForceBoost();
//
//			std::cout << " Sabotage was succsesful " << std::endl;
//			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
//			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
//			return;
//
//		}
//		//normal square
//		else {
//			challenger.MovementUpdate(5, board);
//			defender.ForceMovement(Challenger_die - Defender_die);
//			defender.MovementUpdate(-1, board);
//
//			std::cout << " Sabotage was succsesful " << std::endl;
//			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
//			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
//			return;
//		}
//	}
//	//defender wins
//	else if (Defender_die > Challenger_die) {
//		//landed on boost
//		if (defender.isBoost()) {
//			defender.MovementUpdate(10, board);
//			challenger.ForceBoost();
//
//			std::cout << " Sabotage was succsesful " << std::endl;
//			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
//			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
//			return;
//		}
//		//normal square
//		else {
//			defender.MovementUpdate(5, board);
//			challenger.ForceMovement(Defender_die - Challenger_die);
//			challenger.MovementUpdate(-1, board);
//
//			std::cout << " Sabotage was succsesful " << std::endl;
//			std::cout << "Player " << challenger.GetNumber() << "'s new position: " << challenger.GetPosition() << std::endl;
//			std::cout << "Player " << defender.GetNumber() << "'s new position: " << defender.GetPosition() << std::endl;
//			return;
//		}
//	}
//
//}

Player::Player()
{
}

Player::Player(int number, int position)
{
	InitPlayer(number, position);
}
void Player::InitPlayer(int number, int position)
{
	p_num = number;
	p_pos = position;
	
}
int Player::GetPosition()
{
	return p_pos;
}
int Player::GetNumber()
{
	return p_num;
}

bool Player::isBoost()
{
	return onBoost;
}
void Player::ForceBoost(bool val)
{
	onBoost = val;
}
void Player::SetTrapped(bool val)
{
	onTrap = val;
}

void Player::ForceMovement(int n)
{
	//makes sure position isnt negative
	if (p_pos + n < 1)
	{
		p_pos = 1;
		return;
	}
	p_pos += n;
}
void Player::SetPos(int n)
{
	p_pos = n;
}
bool Player::isTrapped()
{
	return onTrap;
}
//
//void Player::MovementUpdate(int dice, Board& bruh)
//{
//	//stops if on trap
//	if (onTrap)
//	{
//		onTrap = false;
//		return;
//	}
//
//	//int oldPos = p_pos;
//	for (int i = 0; i < dice; i++)
//	{
//		p_pos+=1;
//		if (bruh.isOccupied(p_pos, p_num))
//		{
//			int C1 = 13; //colour1
//			int C2 = 16; //colour2
//			char ans;
//			if (p_colour(p_num) == "Red" ) C1 = 4;
//			if (p_colour(p_num) == "Green" ) C1 = 2;
//			if (p_colour(p_num) == "Blue" ) C1 = 1;
//			if (p_colour(p_num) == "Yellow" ) C1 = 6;
//
//			if (p_colour(bruh.getPlayer(p_pos, p_num)) == "Red" ) C2 = 4;
//			if (p_colour(bruh.getPlayer(p_pos, p_num)) == "Green" ) C2 = 2;
//			if (p_colour(bruh.getPlayer(p_pos, p_num)) == "Blue" ) C2 = 1;
//			if (p_colour(bruh.getPlayer(p_pos, p_num)) == "Yellow" ) C2 = 6;
//			SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "Does player "; SetConsoleTextAttribute(Board::hconsole, C1); std::cout << p_colour(p_num); SetConsoleTextAttribute(Board::hconsole, 11);
//			std::cout << " want to battle player "; SetConsoleTextAttribute(Board::hconsole, C2); std::cout << p_colour(bruh.getPlayer(p_pos, p_num)); SetConsoleTextAttribute(Board::hconsole, 11); std::cout << "?                                        \n";
//			SetConsoleTextAttribute(Board::hconsole, 14);
//			
//			std::cout << "Enter y for yes, anything else for no.                                        \n";
//			std::cin >> ans;
//			SetConsoleTextAttribute(Board::hconsole, 15);
//			if (ans == 'Y' || ans == 'y')
//			{
//				Player other_player = bruh.getPlayerobj(bruh.getPlayer(p_pos, p_num));
//				BattleSystem(*this, other_player, bruh);
//				
//				break;
//			}
//		}
//	}
//	
//	if (bruh.isTrap(p_pos))//is this position a trap
//	{
//		SetConsoleTextAttribute(Board::hconsole, 12);	std::cout << "Landed on a trap!                                        \n                                                                                \n                                                                                \n";
//		onTrap = true;
//		SetConsoleTextAttribute(Board::hconsole, 15);
//	}
//	if (bruh.isBoost(p_pos))//is this position a boost
//	{
//		SetConsoleTextAttribute(Board::hconsole, 10);	std::cout << "Landed on a boost!                                        \n                                                                                \n                                                                                \n";
//		onBoost = !onBoost;
//		SetConsoleTextAttribute(Board::hconsole, 15);
//	}
//	//doesnt go past 100
//	if (p_pos > 100)
//	{
//		p_pos = 100;
//	}
//	//doesnt go behind 0
//	if (p_pos < 0)
//	{
//		p_pos = 0;
//	}
//	
//	//might not be needed
//	bruh.changePos(p_pos, p_num);
//	//board.position(p_pos).addPlayer(self); //let the board know the new position of the player
//	//board.position(oldPos).removePlayer(self)//let the board know that the player is moved
//}
int Player::rollDice()
{
	int diceroll = 0;
	srand(time(0));
	if (onBoost)
	{
		for (int i = 0; i < 2; i++)
		{
			int dice = (int)(1 + rand() % 6);
			//cout << dice << endl;
			diceroll += dice;
		}
	}
	else if (!onBoost && !onTrap)
	{
		for (int i = 0; i < 1; i++)
		{
			int dice = (int)(1 + rand() % 6);
			//cout << dice << endl;
			diceroll += dice;
		}
	}
	onBoost = false;
	return diceroll;
}

std::string Player::p_colour(int p_num)
{
	if(p_num == 1) return "Red";		//SetConsoleTextAttribute(Board::hconsole, 4);
	if (p_num == 2) return "Green";		//SetConsoleTextAttribute(Board::hconsole, 2); 
	if (p_num == 3) return "Blue";		//SetConsoleTextAttribute(Board::hconsole, 1);
	if (p_num == 4) return "Yellow";	//SetConsoleTextAttribute(Board::hconsole, 5); 
	return "ERROR";
}
