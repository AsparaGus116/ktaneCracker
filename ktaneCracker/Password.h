#pragma once

#include <string>
#include <array>
#include <iostream>
#include "Format.h"
#include "Window.h"

class Password
{
public:
	Password();

private:
	bool IsInColumn(std::string column, char letter);

	const std::array<std::string, 35> wordList{
	"about","after","again","below","could",
	"every","first","found","great","house",
	"large","learn","never","other","place",
	"plant","point","right","small","sound",
	"spell","still","study","their","there",
	"these","thing","think","three","water",
	"where","which","world","would","write" };

	std::string colOne;
	std::string colTwo;
	std::string colThree;
};