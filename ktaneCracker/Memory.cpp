#include "Memory.h"

Memory::Memory()
{
	StageOne();
	StageTwo();
	StageThree();
	StageFour();
	StageFive();
}

void Memory::StageOne()
{
	GetDisplay();

	if (display == 1 || display == 2)
	{
		Pos1 = 2;
	}
	else if (display == 3)
	{
		Pos1 = 3;
	}
	else if (display == 4)
	{
		Pos1 = 4;
	}
	PrintPos(Pos1); // All positions, one case

	GetLab(Lab1);

	Format::LineBreak();
}

void Memory::StageTwo()
{
	GetDisplay();

	if (display == 1)
	{
		Lab2 = 4;
		PrintLab(Lab2); // Positions and labels, different cases
		GetPos(Pos2);
	}
	else if (display == 2 || display == 4)
	{
		Pos2 = Pos1;
		PrintPos(Pos2);
		GetLab(Lab2);
	}
	else if (display == 3)
	{
		Pos2 = 1;
		PrintPos(Pos2);
		GetLab(Lab2);
	}

	Format::LineBreak();
}

void Memory::StageThree()
{
	GetDisplay();

	if (display == 1)
	{
		Lab3 = Lab2;
		PrintLab(Lab3);
		GetPos(Pos3);
	}
	else if (display == 2)
	{
		Lab3 = Lab1;
		PrintLab(Lab3);
		GetPos(Pos3);
	}
	else if (display == 3)
	{
		Pos3 = 3;
		PrintPos(Pos3);
		GetLab(Lab3);
	}
	else if (display == 4)
	{
		Lab3 = 4;
		PrintLab(Lab3);
		GetPos(Pos3);
	}

	Format::LineBreak();
}

void Memory::StageFour()
{
	GetDisplay();

	if (display == 1)
	{
		Pos4 = Pos1;
		PrintPos(Pos4);
		GetLab(Lab4);
	}
	else if (display == 2)
	{
		Pos4 = 1;
		PrintPos(Pos4);
		GetLab(Lab4);
	}
	else if (display == 3 || display == 4)
	{
		Pos4 = Pos2;
		PrintPos(Pos4);
		GetLab(Lab4);
	}

	Format::LineBreak();
}

void Memory::StageFive()
{
	GetDisplay();

	if (display == 1)
	{
		PrintLab(Lab1);
	}
	else if(display == 2)
	{
		PrintLab(Lab2);
	}
	else if (display == 3)
	{
		PrintLab(Lab4);
	}
	else if (display == 4)
	{
		PrintLab(Lab3);
	}
}

void Memory::PrintPos(int num)
{
		std::cout << "Press the button in the ";
		if (num == 1)
		{
			Window::SetGreenText();
			std::cout << "FIRST POSITION.\n";
			Window::SetWhiteText();
		}
		else if (num == 2)
		{
			Window::SetGreenText();
			std::cout << "SECOND POSITION.\n";
			Window::SetWhiteText();
		}
		else if (num == 2)
		{
			Window::SetGreenText();
			std::cout << "THIRD POSITION.\n";
			Window::SetWhiteText();
		}
		else if(num == 4)
		{
			Window::SetGreenText();
			std::cout << "FOURTH POSITION.\n";
			Window::SetWhiteText();
		}
}

void Memory::PrintLab(int num)
{
	std::cout << "Press the button ";
	Window::SetGreenText();
	std::cout << "LABELED " << num << '\n';
	Window::SetWhiteText();
}

void Memory::GetDisplay()
{
	do
	{
		std::cout << "What number is the display? ";
		std::cin >> display;
	} while (display > 4 || display < 1);
}

void Memory::GetPos(int& pos)
{
	do
	{
		std::cout << "What was the position of the button pressed? ";
		std::cin >> pos;
	} while (pos > 4 || pos < 1);
}

void Memory::GetLab(int& lab)
{
	do
	{
		std::cout << "What was the label of the button pressed? ";
		std::cin >> lab;
	} while (lab > 4 || lab < 1);
}
