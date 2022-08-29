#include "pch.h"
#include "../StrCalc/StrCalc.hpp"

TEST(StrCalcTest, EmptyStringTest)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.addSeparateNumbers(""), 0);
}

TEST(StrCalcTest, OneNumberStringTest)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.addSeparateNumbers("1"), 1);
}

TEST(StrCalcTest, OneBiggerNumberStringTest)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.addSeparateNumbers("32"), 32);
}

TEST(StrCalcTest, TwoNumbersStringTest)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.addSeparateNumbers("1,2"), 3);
}


TEST(StrCalcTest, UknownNumbersTest)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.addSeparateNumbers("1,2,3,4,5,6"), 21);
}

TEST(StrCalcTest, CommaAtTheEndTest)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.addSeparateNumbers("1,2,3,"), 6);
}

TEST(StrCalcTest, BiggerNumbersTest)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.addSeparateNumbers("11,22,3"), 36);
}

/////////////////////////////////

TEST(StrCalcTest, EmptyStringTest2)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.add(""), 0);
}

TEST(StrCalcTest, OneNumberStringTest2)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.add("1"), 1);
}

TEST(StrCalcTest, OneBiggerNumberStringTest2)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.add("32"), 32);
}

TEST(StrCalcTest, TwoNumbersStringTest2)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.add("1\n2"), 3);
}


TEST(StrCalcTest, UknownNumbersTest2)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.add("1\n2\n3\n4\n5\n6"), 21);
}

TEST(StrCalcTest, NewlineAtTheEndTest2)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.add("1\n2\n3\n"), 6);
}

//////////////////////////////////////

TEST(StrCalcTest, userDelimiterTest1)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.addNumbers("//;\n1;3"), 4);
}

TEST(StrCalcTest, userDelimiterTest2)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.addNumbers("//|\n1|2|3"), 6);
}

TEST(StrCalcTest, userDelimiterTest3)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.addNumbers("//sep\n2sep5"), 7);
}

TEST(StrCalcTest, userDelimiterTest4)
{
	StrCalc strCalculator;
	EXPECT_EQ(strCalculator.add("//|\n1|2,3"), 3);
}