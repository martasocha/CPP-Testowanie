#include "Triangle.hpp"
#include <cmath>

Triangle::Triangle(int a, int b, int c)
	: _a(a), _b(b), _c(c)
{
}

int Triangle::getArea()
{
	if (isValid() == true)
	{
		double p = (_a + _b + _c) / 2;
		double area = sqrt((p - _a) * (p - _b) * (p - _c) * p);
		return area;
	}
	else
	{
		return 0;
	}

}

int Triangle::getPermiter()
{
	if (isValid() == true)
	{
		return _a + _b + _c;
	}
	else
	{
		return 0;
	}
}

bool Triangle::isValid()
{
	return ((_a + _b) > _c && (_a + _c) > _b && (_b + _c) > _a);
}
