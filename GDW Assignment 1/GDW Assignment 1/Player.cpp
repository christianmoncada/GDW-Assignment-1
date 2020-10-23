#include "Player.h"
#include "Board.h"

Player::Player()
{
}

Player::Player(int number, int position, Board& board)
{
	InitPlayer(number, position, board);
}
void Player::InitPlayer(int number, int position, Board& board)
{
	p_num = number;
	p_pos = position;
	theBoard = board;
	
}
int Player::GetPosition()
{
	return p_pos;
}
int Player::GetNumber()
{
	return p_num;
}
void Player::ForceMovement(int n)
{
	//makes sure position isnt negative
	if (p_pos - n <= 0)
	{
		p_pos = 0;
		return;
	}
	p_pos += n;
}

void Player::MovementUpdate(int dice)
{
	//stops if on trap
	if (onTrap)
	{
		onTrap = false;
		return;
	}

	int oldPos = p_pos;
	for (int i = 0; i < dice; i++)
	{
		p_pos++;
		if (theBoard.isOccupied(p_pos, p_num))
		{
			char ans;
			cout << "Does player " << p_colour(p_num) << " want to battle player " << theBoard.getPlayer(p_pos, p_num) <<"?" << endl;
			cout << "Enter y for yes, anything else for no." << endl;
			cin >> ans;
			if (ans == 'Y' || ans == 'y')
			{
				//Sabotage(self, board.position.player);
				//if (winner == p_num) //player won the duel
				//{
				//	ForceMovement(5);
				//	board.update()
				//}
				//else //player did not win
				//{
				//	ForceMovement(-())
				//}
				break;
			}
		}
	}
	
	if (theBoard.isTrap(p_pos))//is this position a trap
	{
		std::cout << "Landed on a trap!" << std::endl;
		onTrap = true;
	}
	if (theBoard.isBoost(p_pos))//is this position a boost
	{
		std::cout << "Landed on a boost!" << std::endl;
		onBoost = true;
	}
	//might not be needed
	theBoard.changePos(p_pos, p_num);
	//board.position(p_pos).addPlayer(self); //let the board know the new position of the player
	//board.position(oldPos).removePlayer(self)//let the board know that the player is moved
}
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
	//is_boost = false;
	return diceroll;
}

std::string Player::p_colour(int p_num)
{
	if(p_num == 1) return "Red";
	if (p_num == 2) return "Green";
	if (p_num == 3) return "Blue";
	if (p_num == 4) return "Yellow";
	return "ERROR";
}
