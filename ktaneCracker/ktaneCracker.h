#pragma once

#include <iostream>
#include "SimpleWires.h"
#include "Format.h"

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
	EXIT,
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