#pragma once

#include <string>
#include <iomanip>
#include <stdexcept>

class StrCalc
{
public:

	int stringToNumber(std::string str)
	{
		size_t pos = 0;
		int value = std::stoi(str, &pos);
		return value;
	}

	bool isDigit(char c)
	{
		return c >= 48 && c <= 57;
	}

	bool isDelimiter(char c, char delimiter)
	{
		return c == delimiter;
	}

	char findUserDelim(std::string& str)
	{
		if (str.at(0) == '/' && str.at(1) == '/')
		{
			char delimiter = str.at(2);
			return delimiter;
		}
	}

	std::string findUserDelim2(std::string& str)
	{
		if (str.at(0) == '/' && str.at(1) == '/')
		{
			std::string delimiter;
			int n = str.find("\n");
			for (int i = 2; i < n; ++i)
			{
				delimiter += str.at(i);
			}
			return delimiter;
		}
	}

	int addSeparateNumbers(std::string str)
	{
		std::string numberString;
		auto delimiter = ',';
		int sum = 0;
		for (auto it = str.begin(); it != str.end(); ++it)
		{
			if ( !isDelimiter(*it,delimiter) && isDigit(*it))
			{
				numberString += *it;
			}
			if (isDelimiter(*it, delimiter) || it==str.end()-1)
			{
				if (isDelimiter(*it, delimiter) && it == str.end() - 1)
				{
					throw std::exception ("end separator not allowed");
				}
				else
				{
					sum += stringToNumber(numberString);
					numberString = "";
				}
			}
		}
		return sum;
	}

	int add(std::string str)
	{
		std::string numberString;
		auto delimiter = str.find('\n');
		int sum = 0;
		for (auto it = str.begin(); it != str.end(); ++it)
		{
			if (*it != delimiter && *it >= 48 && *it <= 57)
			{
				numberString += *it;
			}
			if (*it == '\n' || it == str.end() - 1)
			{
				sum += stringToNumber(numberString);
				numberString = "";
			}
		}
		return sum;
	}

	int addNumbers(std::string str)
	{
		std::string numberString;
		char delimiter = findUserDelim(str);
		int sum = 0;
		for (auto it = str.begin() + 4; it != str.end(); ++it)
		{
			if (*it != delimiter && *it >= 48 && *it <= 57)
			{
				numberString += *it;
			}
			if (*it == delimiter || it==str.end()-1)
			{
				if (*it == delimiter && it == str.end() - 1)
				{
					std::cout << "error";
				}
				else
				{
					sum += stringToNumber(numberString);
					numberString = "";
				}
			}
		}
		return sum;
	}

	int addNumbers2(std::string str)
	{
		std::string numberString;
		std::string delimiter = findUserDelim2(str);
		int length = delimiter.length();
		int sum = 0;
		auto it = str.begin();
		std::advance(it, 4 + length -1);
		for (it ; it != str.end(); ++it)
		{
			if (*it >= 48 && *it <= 57)
			{
				numberString += *it;
			}
			if (*it == delimiter.at(0) || it == str.end() - 1)
			{
				if (*it == delimiter.at(0) && it == str.end() - 1)
				{
					std::cout << "error";
				}
				else
				{
					sum += stringToNumber(numberString);
					numberString = "";
				}
			}
		}
		return sum;
	}
};