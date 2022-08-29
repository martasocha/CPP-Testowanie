#include "pch.h"
#include "../TaxCalculator/TaxCalculator.hpp"

TEST(TaxCalculatorTest, TestTaxesForTreshold1) 
{
	TaxCalculator taxCalc;
	EXPECT_EQ(taxCalc.calculateProgressiveTax(8000), 0);
}

TEST(TaxCalculatorTest, TestTaxesForTreshold2)
{
	TaxCalculator taxCalc;
	EXPECT_EQ(taxCalc.calculateProgressiveTax(18000), 800);
}

TEST(TaxCalculatorTest, TestTaxesForTreshold3)
{
	TaxCalculator taxCalc;
	EXPECT_EQ(taxCalc.calculateProgressiveTax(256250), 79000);
}

TEST(TaxCalculatorTest, TestTaxesForChoosingTresholds)
{
	int treshold1 = 10000;
	int treshold2 = 30000;
	int treshold3 = 120000;
	double tax1 = 0.1;
	double tax2 = 0.25;
	double tax3 = 0.4;
	TaxCalculator taxCalc;
	EXPECT_EQ(taxCalc.calculateProgressiveTax(256250, treshold1, treshold2, treshold3, tax1, tax2, tax3), 79000);
}

