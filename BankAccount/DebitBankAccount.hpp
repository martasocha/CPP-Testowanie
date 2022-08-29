#pragma once
#include "BankAccount.hpp"

class DebitBankAccount : public BankAccount
{
public:
	DebitBankAccount();
	void setDebitLimit(double debitlimit);
	double getDebitLimit() const;
	void payDebit(double amount);

	bool withdraw(double amount);

private:
	double _debitLimit;
};