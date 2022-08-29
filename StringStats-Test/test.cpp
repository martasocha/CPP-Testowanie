#include "pch.h"
#include "../StringStats/StringStats.hpp"


class StringStatisticsTest : public ::testing::Test {
protected:
	StringStatisticsTest()
		: stringStats("")
	{

	}
	StringStatistics stringStats;
};
TEST_F(StringStatisticsTest, NumOfLettersCount_test)
{
	EXPECT_EQ(stringStats.countNumOfLetters(), 0);
}

TEST_F(StringStatisticsTest, NumOfDigitsCount_test)
{
	EXPECT_EQ(stringStats.countNumOfDigits(), 0);
}

TEST_F(StringStatisticsTest, NumOfSpecialSignsCount_test)
{
	EXPECT_EQ(stringStats.countNumOfSpecialSigns(), 0);
}