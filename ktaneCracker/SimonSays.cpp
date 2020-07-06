#include "SimonSays.h"

SimonSays::SimonSays()
{
	Format::LineBreak();

	while ((containsVowel != false && containsVowel != true)
		|| strikes > 2 || strikes < 0)
	{
		GetVariables();
		Format::LineBreak();
	}
		

	do
	{
		sequence.clear();
		std::cout << "Red (r)\nGreen(g)\nBlue(b)\nYellow(y)\n";
		std::cout << "Enter sequence (Press -1 to quit): ";
		std::cin >> sequence;

		ChangeCase();
		PrintSequence();
	} while (!(sequence == "-1"));
	
}

void SimonSays::GetVariables()
{
	std::cout << "How many strikes? ";
	std::cin >> strikes;

	char vowelInput;
	std::cout << "Does the serial number contain a vowel(y/n)? ";
	std::cin >> vowelInput;
	if (vowelInput == 'y' || vowelInput == 'Y')
		containsVowel = true;
	else if(vowelInput == 'n' || vowelInput == 'N')
		containsVowel = false;
}

void SimonSays::PrintSequence()
{
	for (auto element : sequence)
	{
		switch (element)
		{
		case 'r':
			print(rCase);
			break;
		case 'b':
			print(bCase);
			break;
		case 'g':
			print(gCase);
			break;
		case 'y':
			print(yCase);
			break;
		}
	}
	if (sequence != "-1")
		std::cout << '\n'; // simple cleaning up and formatting (allows for reusability in module switch case
		Format::LineBreak();
}

void SimonSays::print(std::string text)
{
	if (text == "RED")
		Window::SetRedText();
	else if (text == "BLUE")
		Window::SetBlueText();
	else if (text == "GREEN")
		Window::SetGreenText();
	else if (text == "YELLOW")
		Window::SetYellowText();
	std::cout << text + " ";
	Window::SetWhiteText();
}

void SimonSays::ChangeCase()
{
	if (containsVowel)
	{
		if (strikes == 0)
		{
			rCase = blue;
			bCase = red;
			gCase = yellow;
			yCase = green;
		}
		else if (strikes == 1)
		{
			rCase = yellow;
			bCase = green;
			gCase = blue;
			yCase = red;
		}
		else
		{
			rCase = green;
			bCase = red;
			gCase = yellow;
			yCase = blue;
		}
	}
	else
	{
		if (strikes == 0)
		{
			rCase = blue;
			bCase = yellow;
			gCase = green;
			yCase = red;
		}
		else if (strikes == 1)
		{
			rCase = red;
			bCase = blue;
			gCase = yellow;
			yCase = green;
		}
		else
		{
			rCase = yellow;
			bCase = green;
			gCase = blue;
			yCase = red;
		}
	}
}
