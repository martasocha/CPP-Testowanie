#include "StringStats.hpp"
#include <algorithm>

StringStatistics::StringStatistics(std::string str)
	: _str(str)
{
}

bool StringStatistics::isLetter(char c)
{
	return isBeetween(c, 65, 90) || isBeetween(c, 97, 122);
}

bool StringStatistics::isDigit(char c)
{
	return isBeetween(c, 48, 57)
}

bool StringStatistics::isSpecialSign(char c)
{
	return !isDigit(c) && !isLetter(c);
}

bool StringStatistics::isBeetween(char c, char lower, char higher)
{
	return (c >= lower && c <= higher);
}


int StringStatistics::countNumOfLetters() const
{
	int numOfLetters = 0;
	return std::count_if(_str.begin(), _str.end(), isLetter);
}

int StringStatistics::countNumOfDigits() const
{
	int numOfDigits = 0;
	return std::count_if(_str.begin(), _str.end(), isDigit);
}

int StringStatistics::countNumOfSpecialSigns() const
{
	int numOfSpecialSigns = 0;
	return std::count_if(_str.begin(), _str.end(), isSpecialSign);
}


