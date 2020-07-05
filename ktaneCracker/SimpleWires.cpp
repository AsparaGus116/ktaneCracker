#include "SimpleWires.h"

SimpleWires::SimpleWires()
{
	int last_digit;

	Format::LineBreak();

	std::cout << "Black(B)\n";
	std::cout << "Blue(b)\n";
	std::cout << "Red(r)\n";
	std::cout << "White(w)\n";
	std::cout << "Yellow(y)\n";
	std::cout << "Enter wire sequence (without spaces): ";
	std::cin >> sequence;

	std::cout << "What is the last digit of the serial number? ";
	std::cin >> last_digit;

	if (last_digit % 2 == 0)
		isEven = true;
	else
		isEven = false;

	SolveSimple();

	Format::LineBreak();
}

SimpleWires::~SimpleWires()
{
	isEven = true;
	sequence.clear();
}

void SimpleWires::SolveSimple()
{
	switch (sequence.length())
	{
	case 3:
		SolveForThree();
		break;
	case 4:
		SolveForFour();
		break;
	case 5:
		SolveForFive();
		break;
	case 6:
		SolveForSix();
		break;
	default:
		std::cout << "Error in sequence - Returning to menu\n";
	}
}

void SimpleWires::SolveForThree()
{
	if (findOccurrences('r') == 0)
	{
		PrintResult("SECOND");
	}
	else if (sequence.back() == 'w')
	{
		PrintResult("LAST");
	}
	else if (findOccurrences('b') > 1)
	{
		PrintResult("LAST BLUE");
	}
	else
	{
		PrintResult("LAST");
	}
}

void SimpleWires::SolveForFour()
{
	if (findOccurrences('r') > 1 && !isEven)
	{
		PrintResult("LAST RED");
	}
	else if (sequence.back() == 'y' && findOccurrences('r') == 0)
	{
		PrintResult("FIRST");
	}
	else if (findOccurrences('b') == 1)
	{
		PrintResult("FIRST");
	}
	else if (findOccurrences('y') > 1)
	{
		PrintResult("LAST");
	}
	else
	{
		PrintResult("FIRST");
	}
}

void SimpleWires::SolveForFive()
{
	if (sequence.back() == 'B' && !isEven)
	{
		PrintResult("FOURTH");
	}
	else if (findOccurrences('r') == 1 && findOccurrences('y') > 1)
	{
		PrintResult("FIRST");
	}
	else if (findOccurrences('B') == 0)
	{
		PrintResult("SECOND");
	}
	else
	{
		PrintResult("FIRST");
	}
}

void SimpleWires::SolveForSix()
{
	if (findOccurrences('y') == 0 && !isEven)
	{
		PrintResult("THIRD");
	}
	else if (findOccurrences('y') == 1 && findOccurrences('w') > 1)
	{
		PrintResult("FOURTH");
	}
	else if (findOccurrences('r') == 0)
	{
		PrintResult("LAST");
	}
	else
	{
		PrintResult("FOURTH");
	}
}

void SimpleWires::PrintResult(std::string str)
{
	std::cout << "Cut the " + str + " wire.\n";
}

int SimpleWires::findOccurrences(char character)
{
	int charCount = 0;
	for (auto element : sequence)
	{
		if (element == character)
			charCount++;
	}
	return charCount;
}

