#pragma once
#include "Player.h"
#include "Board.h"
#include "Sabotage.h"

class Game {
public:
	static bool isOccupied;

	static void resetCur(int y = 5, int x = 0);
};