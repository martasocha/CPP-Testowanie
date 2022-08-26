// BankAccount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BankAccount.hpp"


BankAccount::BankAccount()
    : _balance(0.0)
{
}

bool BankAccount::withdraw(double amount)
{
    if (_balance >= amount)
    {
        _balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

void BankAccount::deposit(double amount)
{
    _balance += amount;
}


double BankAccount::getAvailableFunds() const
{
    return _balance;
}
