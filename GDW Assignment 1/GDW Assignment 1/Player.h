#pragma once
//using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Board.h"

class Player
{
public:
	Player();
	Player(int number, int position);

	void InitPlayer(int number, int position);


	void ForceMovement(int n);
	void SetPos(int n);
	bool isTrapped();
	//void MovementUpdate(int diceroll, Board& bruh);
	int rollDice();
	static std::string p_colour(int p_num);
	int GetPosition();
	int GetNumber();
	bool isBoost();
	void ForceBoost(bool val);
	void SetTrapped(bool val);
private:
	int p_num = 0;
	int p_pos = 0;
	bool onTrap = false;
	bool onBoost = false;
	Board theBoard;
};