#pragma once

#include <Windows.h>

class Window
{
public:
	Window() = default;
	static void SetConsoleColor(WORD COLOR);
	static void SetBlueText();
	static void SetGreenText();
	static void SetRedText();
	static void SetWhiteText();
	static void SetYellowText();
};