#include "DebitBankAccount.hpp"

DebitBankAccount::DebitBankAccount()
	: _debitLimit(0.0)
{
}

bool DebitBankAccount::withdraw(double amount)
{
    if ( amount <= _balance + _debitLimit)
    {
        _balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

void DebitBankAccount::setDebitLimit(double debitlimit)
{
	_debitLimit = debitlimit;
}

double DebitBankAccount::getDebitLimit() const
{
	return _debitLimit;
}


void DebitBankAccount::payDebit(double amount)
{
	_balance += amount;
}
