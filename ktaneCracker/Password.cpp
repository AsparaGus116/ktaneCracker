#include "Password.h"

Password::Password()
{
	std::cout << "Enter column one (No spaces): ";
	std::cin >> colOne;

	int wordCount = 0;
	for (auto element : wordList)
	{
		if (colOne == "-1")
			return;
		if (IsInColumn(colOne, element[0]))
		{
			if (wordCount % 5 == 0)
				std::cout << "\n";
			Window::SetGreenText();
			std::cout << element << " ";
			Window::SetWhiteText();
			wordCount++;
		}
		
	}

	std::cout << '\n';
	Format::LineBreak();

	std::cout << "Enter column two (No spaces): ";
	std::cin >> colTwo;

	wordCount = 0;
	for (auto element : wordList)
	{
		if (colTwo == "-1")
			return;
		if (IsInColumn(colOne, element[0]) && 
			IsInColumn(colTwo, element[1]))
		{
			if (wordCount % 5 == 0)
				std::cout << "\n";
			Window::SetGreenText();
			std::cout << element << " ";
			Window::SetWhiteText();
			wordCount++;
		}

	}

	std::cout << '\n';
	Format::LineBreak();

	std::cout << "Enter column three (No spaces): ";
	std::cin >> colThree;

	wordCount = 0;
	for (auto element : wordList)
	{
		if (colThree == "-1")
			return;
		if (IsInColumn(colOne, element[0]) &&
			IsInColumn(colTwo, element[1]) &&
			IsInColumn(colThree, element[2]))
		{
			if (wordCount % 5 == 0)
				std::cout << "\n";
			Window::SetGreenText();
			std::cout << element << " ";
			Window::SetWhiteText();
			wordCount++;
		}

	}

	std::cout << '\n';
}

Password::~Password()
{
	colOne.clear();
	colTwo.clear();
	colThree.clear();
}

bool Password::IsInColumn(std::string column, char letter)
{
		for (auto element : column)
		{
			if (element == letter)
				return true;
		}
		return false;
}
