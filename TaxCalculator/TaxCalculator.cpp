#include "TaxCalculator.hpp"
#include "TaxUtils.h"

int TaxCalculator::calculateProgressiveTax(int amount)
{
	int treshold1 = 10000;
	int treshold2 = 30000;
	int treshold3 = 120000;
	double tax1 = 0.1;
	double tax2 = 0.25;
	double tax3 = 0.4;

	if (TaxUtils::isLowerThenTreshold1(amount))
	{
		return 0;
	}
	else if (TaxUtils::isBetweenTreshold1andTreshold2(amount))
	{
		return (amount-treshold1) * tax1;
	}
	else if (TaxUtils::isBetweenTreshold2andTreshold3(amount))
	{
		return (treshold2-treshold1) * tax1 + (amount - treshold2) * tax2;
	}
	else if (TaxUtils::isBiggerThenTreshold3(amount))
	{
		return (treshold2 - treshold1) * tax1 + (treshold3 - treshold2) * tax2 + (amount - treshold3) * tax3;
	}

}

int TaxCalculator::calculateProgressiveTax(int amount, int treshold1, int treshold2, int treshold3, double tax1, double tax2, double tax3)
{

	if (TaxUtils::isLowerThenTreshold1(amount, treshold1))
	{
		return 0;
	}
	else if (TaxUtils::isBetweenTreshold1andTreshold2(amount, treshold1, treshold2))
	{
		return (amount - treshold1) * tax1;
	}
	else if (TaxUtils::isBetweenTreshold2andTreshold3(amount, treshold2, treshold3))
	{
		return (treshold2 - treshold1) * tax1 + (amount - treshold2) * tax2;
	}
	else if (TaxUtils::isBiggerThenTreshold3(amount, treshold3))
	{
		return (treshold2 - treshold1) * tax1 + (treshold3 - treshold2) * tax2 + (amount - treshold3) * tax3;
	}
}
