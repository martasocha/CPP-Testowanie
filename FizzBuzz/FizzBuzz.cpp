#include "FizzBuzz.hpp"

std::string FizzBuzz::fizzBuzz(int number)
{
	std::string Fizz = "Fizz";
	std::string Buzz = "Buzz";
	std::string FizzBuzz = "FizzBuzz";

	if (number % 3 == 0 && number % 5 == 0)
	{
		return FizzBuzz;
	}
	else if (number % 3 == 0)
	{
		return Fizz;
	}
	else if (number % 5 == 0)
	{
		return Buzz;
	}
	else
	{
		return std::to_string(number);
	}
}
