#pragma once

#include <iostream>
#include "SimpleWires.h"
#include "Format.h"
#include "SimonSays.h"

int getModule();

class KtaneCracker
{
public:
	KtaneCracker() = default;
public:
	bool isValidModule;
	bool isFinished;
};

enum Modules
{
	EXIT = -1,
	COMPLETED, // meant to make first module equal to 1, while exit code is -1
	SIMPLE_WIRES,
	BUTTON,
	KEYPAD,
	SIMON_SAYS,
	WHOS_ON_FIRST,
	MEMORY,
	MORSE_CODE,
	COMPLEX_WIRES,
	WIRE_SEQUENCES,
	MAZE,
	PASSWORD
};