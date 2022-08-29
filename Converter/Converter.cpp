#include "Converter.hpp"

double Converter::convertFeetToMeters(double feet)
{
	return feet / feetToMetersFactor;
}

double Converter::convertCelsiusToFarenheit(double degreesCelsius)
{
	return (degreesCelsius * 9 / 5) + 32;
}

double Converter::convertMetersToFeet(double meters)
{
	return meters * feetToMetersFactor;
}

double Converter::convertFarenheitToCelsius(double farenheit)
{
	return (farenheit - 32) * 5 / 9;
}
