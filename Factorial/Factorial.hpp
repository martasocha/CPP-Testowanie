#pragma once

class Factorial
{
public:
	int factorial(int number)
	{
		int factorial = 1;
		if (number == 0)
		{
			factorial = 1;
		}
		else
		{
			for (unsigned int i = 1; i <= number; ++i)
			{
				factorial *= i;
			}
		}
		return factorial;
	}
};