#include "DebitBankAccount.hpp"

DebitBankAccount::DebitBankAccount()
	: _balance(0.0)
{
}

//bool DebitBankAccount::withdraw(double amount)
//{
//    if ( amount <= _debitlimit)
//    {
//        _debitlimit -= amount;
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}

void DebitBankAccount::setDebitLimit(double debitlimit)
{
	//_debitlimit = debitlimit;
	_balance = debitlimit;
}

double DebitBankAccount::getDebitLimit()
{
	//return _debitlimit;
	return _balance;
}


void DebitBankAccount::payDebit(double amount)
{
	//if (amount <= _debitlimit)
	//{
	//	_debitlimit -= amount;
	//}
	if (amount <= _balance)
	{
		_balance -= amount;
	}
}
