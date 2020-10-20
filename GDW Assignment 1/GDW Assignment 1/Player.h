#pragma once
using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"
#include "Board.h"

class Player
{
public:
	Player();
	Player(int number, int& position);

	void InitPlayer(int number, int& position);


	void ForceMovement(int n);
	void MovementUpdate(int diceroll);
	int rollDice();
	std::string p_colour(int p_num) {
		if (p_num == 1) return "Red";
		if (p_num == 2) return "Green";
		if (p_num == 3) return "Blue";
		if (p_num == 4) return "Yellow";
		return "ERROR";
	}
private:
	int p_num = 0;
	int p_pos = 0;
	bool onTrap = false;
	bool onBoost = false;
};