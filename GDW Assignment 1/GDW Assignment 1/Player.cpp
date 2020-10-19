#include "BackEnd.h"
using namespace std;

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

void Player::MovementUpdate(int diceroll)
{
	for (int i = 0; i < diceroll; i++)
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
	if (board.position.isTrap)
	{
		is_trapped = true;
	}
	if (board.position.isBoost)
	{
		is_boost = true;
	}
}
int Player::rollDice()
{
	//implement dice rolling mechanic

}

