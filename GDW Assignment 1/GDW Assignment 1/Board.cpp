#include "Board.h"
#include "Game.h"

HANDLE Board::hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
void Board::UpdateBoard(int pos1, int pos2, int pos3, int pos4) {
	int y = -5, x = 0;
	Board::resetCur(x, y - 0);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 2); std::cout << "########################################################################"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 1);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||=====||=====||=====||=====||=====||=====||=====||=====||=====||=====||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 2);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 3);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 4);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||1====||=====||=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|5=!==|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|==>==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||=====||=====||10===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 5);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 6);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 7);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|==!==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||15===||=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|==>==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||20===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 8);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 9);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 10);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||=====||=====||=====||=====||25===||=====|"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|==!==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|30>==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 11);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 12);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 13);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||=====||=====||=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|35!==|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|==>==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||=====||=====||40===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 14);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 15);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 16);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|==>==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||45===||=====||=====||=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|50!==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 17);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 18);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 19);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|==>==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||=====||=====||55===||=====||=====||=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|60>==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 10);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 21);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 22);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||=====|"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|==!==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||=====||65===||=====||=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|==>==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|70===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 23);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 24);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 25);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||=====||=====||=====||=====||75===|"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|==!==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====|"; SetConsoleTextAttribute(Board::hconsole, 10); std::cout << "|==>==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||80===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 26);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 27);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 28);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||=====||=====||=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|85!==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||=====||=====||=====||90===||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 29);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 30);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||     ||     ||     ||     ||     |"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|     |"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|     ||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 31);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 7); std::cout << "||=====|"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|==!==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|=====||=====||95===||=====||=====||=====|"; SetConsoleTextAttribute(Board::hconsole, 12); std::cout << "|==!==|"; SetConsoleTextAttribute(Board::hconsole, 7); std::cout << "|100==||"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";
	Board::resetCur(x, y - 32);	SetConsoleTextAttribute(hconsole, 2); std::cout << "        #"; SetConsoleTextAttribute(hconsole, 2); std::cout << "########################################################################"; SetConsoleTextAttribute(hconsole, 2); std::cout << "#           \n";

	SetConsoleTextAttribute(hconsole, 15);
	Board::resetCur(x, y - 33); std::cout << std::string(80, ' ') << "\r\n";
	Board::resetCur(x, y - 34); std::cout << std::string(80, ' ') << "\r\n";
	Board::resetCur(x, y - 35); std::cout << std::string(80, ' ') << "\r\n";
	Board::resetCur(x, y - 36); std::cout << std::string(80, ' ') << "\r\n";
	Board::resetCur(x, y - 37); std::cout << std::string(80, ' ') << "\r\n";
	Board::resetCur(x, y - 38); std::cout << std::string(80, ' ') << "\r\n";
	Board::resetCur(x, y - 39); std::cout << std::string(80, ' ') << "\r\n";
	//Board::resetCur(x, y - 40); std::cout << std::string(80, ' ') << "\r\n";
	//Board::resetCur(x, y - 41); std::cout << std::string(80, ' ') << "\r\n";
	//Board::resetCur(x, y - 42); std::cout << std::string(80, ' ') << "\r\n";

}

void Board::UpdatePlayers(int pos1, int pos2, int pos3, int pos4)
{
	//int y1, y2 = 0, y3 = 0, y4 = 0;
	//int x1, x2 = 0, x3 = 0, x4 = 0;

	int x1 = 11 + ((pos1 - 1) % 10) * 7;
	int y1 = 7 + ((pos1 - 1) / 10) * 3;
	int x2 = 14 + ((pos2 - 1) % 10) * 7;
	int y2 = 7 + ((pos2 - 1) / 10) * 3;
	int x3 = 11 + ((pos3 - 1) % 10) * 7;
	int y3 = 8 + ((pos3 - 1) / 10) * 3;
	int x4 = 14 + ((pos4 - 1) % 10) * 7;
	int y4 = 8 + ((pos4 - 1) / 10) * 3;

	Board::outRed(x1, y1);
	Board::outGreen(x2, y2);
	Board::outBlue(x3, y3);
	Board::outYellow(x4, y4);
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

void Board::outRed(int x, int y)
{
	Board::resetCur(x, y); 
	SetConsoleTextAttribute(hconsole, 79);
	std::cout << " 1";
	//std::cout << "x1= " << x << " ";
	//std::cout << "y1= " << y << "\n";
}
void Board::outGreen(int x, int y)
{
	SetConsoleTextAttribute(hconsole, 47);
	Board::resetCur(x, y); 
	std::cout << "2 ";
}
void Board::outBlue(int x, int y)
{
	SetConsoleTextAttribute(hconsole, 31);
	Board::resetCur(x, y); std::cout << " 3";
}
void Board::outYellow(int x, int y)
{
	SetConsoleTextAttribute(hconsole, 224);
	Board::resetCur(x, y); std::cout << "4 ";
}
