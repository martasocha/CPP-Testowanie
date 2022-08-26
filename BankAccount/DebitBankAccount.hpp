#pragma once
#include "BankAccount.hpp"

class DebitBankAccount : public BankAccount
{
public:
	DebitBankAccount();

	void setDebitLimit(double debitlimit);
	double getDebitLimit();
	void payDebit(double amount);
private:
	double _balance;
};