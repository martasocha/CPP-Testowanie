#include "pch.h"
#include "../FizzBuzz/FizzBuzz.hpp"

TEST(FizzBuzzTest, TestFizz) 
{
	FizzBuzz fizzbuzz;
	EXPECT_EQ(fizzbuzz.fizzBuzz(3), "Fizz");
}

TEST(FizzBuzzTest, TestBuzz)
{
	FizzBuzz fizzbuzz;
	EXPECT_EQ(fizzbuzz.fizzBuzz(5), "Buzz");
}

TEST(FizzBuzzTest, TestFizzBuzz)
{
	FizzBuzz fizzbuzz;
	EXPECT_EQ(fizzbuzz.fizzBuzz(15), "FizzBuzz");
}

TEST(FizzBuzzTest, TestNumber)
{
	FizzBuzz fizzbuzz;
	EXPECT_EQ(fizzbuzz.fizzBuzz(1), "1");
	EXPECT_EQ(fizzbuzz.fizzBuzz(2), "2");
}