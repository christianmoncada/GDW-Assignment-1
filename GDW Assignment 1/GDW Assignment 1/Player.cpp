#include "Player.h"
int position = 1;

bool Game::isOccupied = false;

Player::Player()
{
}

Player::Player(int number, int& position)
{
	InitPlayer(number, position);
}
void Player::InitPlayer(int number, int& position)
{
	p_num = number;
	p_pos = position;

	
}
void Player::ForceMovement(int n)
{
	p_pos += n;
}

void Player::MovementUpdate(int dice)
{
	int oldPos = p_pos;
	for (int i = 0; i < dice; i++)
	{
		p_pos++;
		if (Game::isOccupied)
		{
			char ans;
			cout << "Does player " << p_colour(p_num) << " want to battle " << "[other colour]"/*p_colour()*/ <<"player?" << endl;
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
	
	if (Board::isTrap(p_pos))//is this position a trap
	{
		onTrap = true;
	}
	if (Board::isBoost(p_pos))//is this position a boost
	{
		onBoost = true;
	}
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
			cout << dice << endl;
			diceroll += dice;
		}
	}
	else if (!onBoost && !onTrap)
	{
		for (int i = 0; i < 1; i++)
		{
			int dice = (int)(1 + rand() % 6);
			cout << dice << endl;
			diceroll += dice;
		}
	}
	//is_boost = false;
	return diceroll;
}

std::string Player::p_colour(int p_num)
{
	f(p_num == 1) return "Red";
	if (p_num == 2) return "Green";
	if (p_num == 3) return "Blue";
	if (p_num == 4) return "Yellow";
	return "ERROR";
}
