#pragma once

#include <iostream>

namespace TaxUtils
{
	bool isLowerThenTreshold1 (int amount)
	{
		int treshold1 = 10000;
		return (amount > 0 && amount <= treshold1);
	}

	bool isBetweenTreshold1andTreshold2(int amount)
	{
		int treshold1 = 10000;
		int treshold2 = 30000;
		return (amount > treshold1&& amount <= treshold2);
	}


	bool isBetweenTreshold2andTreshold3(int amount)
	{
		int treshold2 = 30000;
		int treshold3 = 120000;
		return (amount > treshold2&& amount <= treshold3);
	}

	bool isBiggerThenTreshold3(int amount)
	{
		int treshold3 = 120000;
		return (amount > treshold3);
	}


	////////////////////////////


	bool isLowerThenTreshold1(int amount, int treshold1)
	{
		return (amount > 0 && amount <= treshold1);
	}

	bool isBetweenTreshold1andTreshold2(int amount, int treshold1, int treshold2)
	{
		return (amount > treshold1 && amount <= treshold2);
	}


	bool isBetweenTreshold2andTreshold3(int amount, int treshold2, int treshold3)
	{
		return (amount > treshold2 && amount <= treshold3);
	}

	bool isBiggerThenTreshold3(int amount, int treshold3)
	{
		return (amount > treshold3);
	}



}