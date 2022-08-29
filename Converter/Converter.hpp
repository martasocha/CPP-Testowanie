#pragma once

class Converter
{
public:
	double convertFeetToMeters(double feet);
	double convertCelsiusToFarenheit(double degreesCesius);
	double convertMetersToFeet(double meters);
	double convertFarenheitToCelsius(double farenheit);
private:
	const double feetToMetersFactor = 3.281;
};