#pragma once
#include <string>

class StringStatistics
{
public:
	StringStatistics(std::string str);
	int countNumOfLetters() const;
	int countNumOfDigits() const;
	int countNumOfSpecialSigns() const;
private:
	std::string _str;
	bool isLetter(char c);
	bool isDigit(char c);
	bool isSpecialSign(char c);
	bool isBeetween(char c, char lower, char higher);
};