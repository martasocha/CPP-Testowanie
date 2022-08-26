#include "pch.h"
#include "../Triangle/Triangle.hpp"

TEST(TestTriangle, TestisValid) 
{
	Triangle triangle(3, 4, 5);
	EXPECT_TRUE(triangle.isValid());
}

TEST(TestTriangle, TestGetArea)
{
	Triangle triangle(3, 4, 5);
	EXPECT_EQ(triangle.getArea(), 6);
}

TEST(TestTriangle, TestGetPermiter)
{
	Triangle triangle(3, 4, 5);
	EXPECT_EQ(triangle.getPermiter(), 12);
}

TEST(TestTriangle, TestisNotValid)
{
	Triangle triangle(10, 4, 5);
	EXPECT_FALSE(triangle.isValid());
	EXPECT_EQ(triangle.getArea(), 0);
	EXPECT_EQ(triangle.getPermiter(), 0);
}