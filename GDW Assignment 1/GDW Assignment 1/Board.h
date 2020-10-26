#pragma once
#include <iostream>
#include <string>
#include <Windows.h>


class Board {
public:
	
	void UpdateBoard(int pos1 = 1, int pos2 = 1, int pos3 = 1, int pos4 = 1);
	void UpdatePlayers(int pos1 = 1, int pos2 = 1, int pos3 = 1, int pos4 = 1);
	static void resetCur(int y = -5, int x = 0);
	void outRed(int x, int y);
	void outGreen(int x, int y);
	void outBlue(int x, int y);
	void outYellow(int x, int y);
	
	/*
	1 = Red
	2 = Green
	3 = Blue
	4 = Yellow
	*/
	int pos1 = 1;
	int pos2 = 1;
	int pos3 = 1;
	int pos4 = 1;
	
	static HANDLE hconsole;

	static bool isTrap(int position) {
		if (position == 5 || position == 13 || position == 27 || position == 35 || position == 50 ||
			position == 62 || position == 76 || position == 85 || position == 92 || position == 99) {
			return true;
		}
		else { return false; }
	}
	static bool isBoost(int position) {
		if (position == 6 || position == 18 || position == 30 || position == 36 || position == 43 ||
			position == 51 || position == 60 || position == 69 || position == 78 || position == 88) {
			return true;
		}
		else { return false; }
	}

	bool isOccupied(int pos, int player);
	int getPlayer(int pos, int player);
	void changePos(int pos, int player);
};

/*
TRAPS: 
5, 13, 27, 35, 50, 62, 76, 85, 92, 99

BOOSTS:
6, 18, 30, 36, 43, 51, 60, 69, 78, 88

*/