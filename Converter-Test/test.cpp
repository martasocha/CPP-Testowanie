#include "pch.h"
#include "../Converter/Converter.hpp"

TEST(TestConverter, CelsiusToFarenheit_ConvertZero)
{
	Converter converter;
	EXPECT_DOUBLE_EQ(converter.convertCelsiusToFarenheit(0),32);
}

TEST(TestConverter, CelsiusToFarenheit_ConvertPositiveValue)
{
	Converter converter;
	EXPECT_DOUBLE_EQ(converter.convertCelsiusToFarenheit(40), 104);
}

TEST(TestConverter, CelsiusToFarenheit_ConvertNegativeValue)
{
	Converter converter;
	EXPECT_DOUBLE_EQ(converter.convertCelsiusToFarenheit(-15), 5);
}

TEST(TestConverter, CelsiusToFarenheit_ConvertFractionValue)
{
	Converter converter;
	EXPECT_DOUBLE_EQ(converter.convertCelsiusToFarenheit(37.6), 99.68);
	EXPECT_DOUBLE_EQ(converter.convertCelsiusToFarenheit(-10.5), 13.1);
}

//
//TEST(TestConverter, TestFeetConverter)
//{
//	Converter converter;
//	EXPECT_DOUBLE_EQ(converter.convertFeetToMeters(100), 30.48);
//}
//
//TEST(TestConverter, TestMetersConverter)
//{
//	Converter converter;
//	EXPECT_DOUBLE_EQ(converter.convertMetersToFeet(0.3), 1);
//}
//
//
//TEST(TestConverter, TestFarenheitConverter)
//{
//	Converter converter;
//	EXPECT_DOUBLE_EQ(converter.convertCelsiusToFarenheit(80.6), 27);
//}

