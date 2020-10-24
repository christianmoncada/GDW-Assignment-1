#include "Board.h"
#include "Game.h"
HANDLE Board::hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
void Board::UpdateBoard(int pos1, int pos2, int pos3, int pos4) {
	int y = -5, x = 0; 

	Board::resetCur(x, y - 0);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 2); std::cout << "########################################################################"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 1);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||=====||=====||=====||=====||=====||=====||=====||=====||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 2);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 3);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 4);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||1====||=====||=====||=====||5=!==||==>==||=====||=====||=====||10===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 5);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 6);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 7);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||==!==||=====||15===||=====||=====||==>==||=====||20===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 8);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 9);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 10);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||=====||=====||25===||=====||==!==||=====||=====||30>==||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 11);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 12);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 13);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||=====||=====||35!==||==>==||=====||=====||=====||40===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 14);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 15);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 16);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||==>==||=====||45===||=====||=====||=====||=====||50!==||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 17);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 18);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 19);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||==>==||=====||=====||=====||55===||=====||=====||=====||=====||60>==||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 10);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 21);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 22);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||==!==||=====||=====||65===||=====||=====||=====||==>==||70===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 23);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 24);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 25);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||=====||=====||75===||==!==||=====||==>==||=====||80===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 26);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 27);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 28);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||=====||=====||=====||85!==||=====||=====||=====||=====||90===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 29);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 30);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 31);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 8); std::cout << "||=====||==!==||=====||=====||95===||=====||=====||=====||==!==||100==||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";
	Board::resetCur(x, y - 32);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 2); std::cout << "########################################################################"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           ";

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

