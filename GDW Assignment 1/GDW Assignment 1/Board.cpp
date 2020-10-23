#include "Board.h"
#include "Game.h"
HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
void Board::UpdateBoard(int pos1, int pos2, int pos3, int pos4) {
	int y = -5, x = 0; 
	//std::cout << std::string(100, ' ') << "\r" << "testing testing\n\n\nFUCK\n\n";
	Board::resetCur(y - 0, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 2); std::cout << "########################################################################"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 1, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||=====||=====||=====||=====||=====||=====||=====||=====||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 2, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 3, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 4, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||1====||=====||=====||=====||5=!==||==>==||=====||=====||=====||10===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 5, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 6, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 7, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||==!==||=====||15===||=====||=====||==>==||=====||20===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 8, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 9, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 10, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||=====||=====||25===||=====||==!==||=====||=====||30>==||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 12, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 13, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 14, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||=====||=====||35!==||==>==||=====||=====||=====||40===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 15, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 16, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 17, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||==>==||=====||45===||=====||=====||=====||=====||50!==||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 18, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 19, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 20, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||==>==||=====||=====||=====||55===||=====||=====||=====||=====||60>==||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 21, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 22, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 23, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||==!==||=====||=====||65===||=====||=====||=====||==>==||70===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 24, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 25, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 26, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||=====||=====||75===||==!==||=====||==>==||=====||80===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 27, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 28, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 29, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||=====||=====||85!==||=====||=====||=====||=====||90===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 30, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 31, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 32, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||==!==||=====||=====||95===||=====||=====||=====||==!==||100==||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";
	Board::resetCur(y - 33, x);	SetConsoleTextAttribute(hconsole, 2); std::cout << "#"; SetConsoleTextAttribute(hconsole, 2); std::cout << "########################################################################"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#\n";

	SetConsoleTextAttribute(hconsole, 15);
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
int Board::getPlayer(int pos, int player)
{
	switch (player) //only possible to be 1, 2, 3, or 4
	{
	case 1:
		if (pos == pos2)
		{
			return 2;
		}
		else if (pos == pos3)
		{
			return 3;
		}
		else if (pos == pos4)
		{
			return 4;
		}
		break;
	case 2:
		if (pos == pos1)
		{
			return 1;
		}
		else if (pos == pos3)
		{
			return 3;
		}
		else if (pos == pos4)
		{
			return 4;
		}
		break;
	case 3:
		if (pos == pos1)
		{
			return 1;
		}
		else if (pos == pos2)
		{
			return 2;
		}
		else if (pos == pos4)
		{
			return 4;
		}
		break;
	case 4:
		if (pos == pos1)
		{
			return 1;
		}
		else if (pos == pos2)
		{
			return 2;
		}
		else if (pos == pos3)
		{
			return 3;
		}
		break;
	}

}

//might not be needed
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

void Board::resetCur(int x, int y)
{
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hconsole, coord);
}

