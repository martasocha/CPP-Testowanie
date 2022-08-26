#include "pch.h"
#include "../Factorial/Factorial.hpp"

TEST(FactorialTest, HandlesZeroInput) 
{
	Factorial fact;
	int result = fact.factorial(0);
	EXPECT_EQ(result,1);
}

TEST(FactorialTest, HandlesPositiveInput)
{
	Factorial fact;
	int result = fact.factorial(3);
	EXPECT_EQ(result, 6);
}