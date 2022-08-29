#include <iostream>
#include "TaxCalculator.hpp"

int main()
{
    TaxCalculator taxCalc;
    std::cout << taxCalc.calculateProgressiveTax(256250);

}
