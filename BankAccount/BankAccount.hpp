//Zadanie 2.
//Napisz klas� BankAccount, kt�ra b�dzie kontrolowa� stan konta :
//-withdraw()
//- deposit()
//- getAvailableFunds()

#pragma once

class BankAccount
{
public:
	BankAccount();
	bool withdraw(double amount); //czy operacja sie udala
	void deposit(double amount);
	double getAvailableFunds() const;
protected:
	double _balance;
};
