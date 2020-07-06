#pragma once

#include <string>
#include <iostream>
#include <conio.h>
#include "Format.h"
#include "Window.h"

class SimpleWires
{
public:

	SimpleWires();
	void SolveSimple();
	
private:

	int findOccurrences(char character);
	void SolveForThree();
	void SolveForFour();
	void SolveForFive();
	void SolveForSix();
	void PrintResult(std::string str);

	std::string sequence;
	bool isEven = true; // default for before constructor is iterated
};