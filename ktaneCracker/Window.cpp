#include "Window.h"

void Window::SetConsoleColor(WORD COLOR)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(out, COLOR);
}

void Window::SetBlueText()
{
	SetConsoleColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}

void Window::SetGreenText()
{
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}

void Window::SetRedText()
{
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
}

void Window::SetWhiteText()
{
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}

void Window::SetYellowText()
{
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
}
