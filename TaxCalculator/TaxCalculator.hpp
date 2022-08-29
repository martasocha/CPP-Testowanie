#pragma once

class TaxCalculator
{
public:
	int calculateProgressiveTax(int amount);
	int calculateProgressiveTax(int amount, int treshold1, int treshold2, int treshold3, double tax1, double tax2, double tax3);

};