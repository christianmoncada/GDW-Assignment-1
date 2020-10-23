#include "Board.h"


std::string Board::UpdateBoard(int pos1, int pos2, int pos3, int pos4) {
	return "testing testing\n\n\nFUCK\n\n";
}

bool Board::isOccupied(int pos, int player)
{
	switch (player) //only possible to be 1, 2, 3, or 4
	{
		case 1:
			if (pos == pos2)
			{
				return true;
			}
			else if (pos == pos3)
			{
				return true;
			}
			else if (pos == pos4)
			{
				return true;
			}
			return false;
			break;
		case 2:
			if (pos == pos1)
			{
				return true;
			}
			else if (pos == pos3)
			{
				return true;
			}
			else if (pos == pos4)
			{
				return true;
			}
			return false;
			break;
		case 3:
			if (pos == pos1)
			{
				return true;
			}
			else if (pos == pos2)
			{
				return true;
			}
			else if (pos == pos4)
			{
				return true;
			}
			return false;
			break;
		case 4:
			if (pos == pos1)
			{
				return true;
			}
			else if (pos == pos2)
			{
				return true;
			}
			else if (pos == pos3)
			{
				return true;
			}
			return false;
			break;
	
	}

}
void Board::changePos(int pos, int player)
{
	//update the position of each player
	switch (player)
	{
		case 1:
			pos1 = pos;
		case 2:
			pos2 = pos;
		case 3:
			pos3 = pos;
		case 4:
			pos4 = pos;

	}

}

