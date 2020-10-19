using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
class Player
{
public:
	Player();
	Player(int number, int& position);

	void InitPlayer(int number, int& position);
	

	void ForceMovement(int n);
	void MovementUpdate(int diceroll);
	int rollDice();
	private:
	int m_num = 0;
	int m_pos = 0;
	bool is_trapped = false;
	bool is_boost = false;
};
Player::Player()
{
}

Player::Player(int number, int& position)
{
	InitPlayer(number, position;
}
void Player::InitPlayer(int number, int& position)
{
	m_num = number;
	m_pos = position;

	
}
void Player::ForceMovement(int n)
{
	m_pos += n;
}

void Player::MovementUpdate(int dice)
{
	int oldPos = m_pos;
	for (int i = 0; i < dice; i++)
	{
		m_pos++;
		if (board.position == occupied)
		{
			char ans;
			cout << "Does player " << m_num << " want to battle player " << board.position.player << " ?" << endl;
			cout << "Enter y for yes, anything else for no." << endl;
			cin >> ans;
			if (ans == 'Y' || ans == 'y')
			{
				Sabotage(self, board.position.player);
				//if (winner == m_num) //player won the duel
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
	if (board.position.isTrap)//is this position a trap
	{
		is_trapped = true;
	}
	if (board.position.isBoost)//is this position a boost
	{
		is_boost = true;
	}
	board.position(m_pos).addPlayer(self); //let the board know the new position of the player
	board.position(oldPos).removePlayer(self)//let the board know that the player is moved
}
int Player::rollDice()
{
	int diceroll = 0;
	srand(time(0));
	if (is_boost == true)
	{
		for (int i = 0; i < 2; i++)
		{
			int dice = (int)(1 + rand() % 6);
			cout << dice << endl;
			diceroll += dice;
		}
	}
	else if (is_boost == false)
	{
		for (int i = 0; i < 1; i++)
		{
			int dice = (int)(1 + rand() % 6);
			cout << dice << endl;
			diceroll += dice;
		}
	}
	is_boost = false;
	return diceroll;
}

