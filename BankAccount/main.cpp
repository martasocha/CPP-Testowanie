#include <iostream>
#include "BankAccount.hpp"
#include "DebitBankAccount.hpp"

int main()
{
	DebitBankAccount debitAccount;
	debitAccount.setDebitLimit(1000.0);
	std::cout << debitAccount.withdraw(500.0);
	std::cout << debitAccount.getDebitLimit();
}