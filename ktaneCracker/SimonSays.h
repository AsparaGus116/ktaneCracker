#pragma once

#include <string>
#include <iostream>
#include "Format.h"
#include "Window.h"

class SimonSays
{
public:

	SimonSays();
	
private:

	void GetVariables();
	void PrintSequence();
	void print(std::string text);
	void ChangeCase();

	int strikes;
	bool containsVowel;
	std::string sequence;

	std::string rCase;
	std::string bCase;
	std::string gCase;
	std::string yCase;

	std::string red = "RED";
	std::string blue = "BLUE";
	std::string green = "GREEN";
	std::string yellow = "YELLOW";
	
};