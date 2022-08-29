#include <iostream>
#include "StrCalc.hpp"

int main()
{
    try
    {
        StrCalc strCalculator;
        std::cout << strCalculator.addSeparateNumbers("") << std::endl;
        std::cout << strCalculator.addSeparateNumbers("1") << std::endl;
        std::cout << strCalculator.addSeparateNumbers("1,2,3,4,5,6") << std::endl;
        std::cout << strCalculator.addNumbers("//sep\n2sep5");
    }
    catch (std::exception& ex)
    {
        std::cout << "Unexpected exception cought: " << ex.what() << std::endl;
    }
}
