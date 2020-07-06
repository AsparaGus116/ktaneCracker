#pragma once

#include <iostream>
#include "Window.h"
#include "Format.h"

class Memory
{
public:

	Memory();

private:
	void StageOne();
	void StageTwo();
	void StageThree();
	void StageFour();
	void StageFive();

	void PrintPos(int num);
	void PrintLab(int num);
	void GetDisplay();

	void GetPos(int& pos);
	void GetLab(int& lab);

	int display;

	int Pos1;
	int Lab1;

	int Pos2;
	int Lab2;

	int Pos3;
	int Lab3;
	
	int Pos4;
	int Lab4;

	bool hasQuit = false;
};