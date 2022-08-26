#include "pch.h"
#include "../BankAccount/BankAccount.hpp"
#include "../BankAccount/DebitBankAccount.hpp"

TEST(BankAccountTest, TestEmptyAccount)
{
	BankAccount account;
	EXPECT_EQ(account.getAvailableFunds(), 0.0);
}

TEST(BankAccountTest, TestDeposit)
{
	BankAccount account;
	account.deposit(1000.0);
	EXPECT_EQ(account.getAvailableFunds(), 1000.0);
}

TEST(BankAccountTest, TestWithdraw)
{
	BankAccount account;
	account.deposit(1000.0);
	account.withdraw(100);
	EXPECT_EQ(account.getAvailableFunds(), 900.0);
	EXPECT_TRUE(account.withdraw(100));
}

TEST(BankAccountTest, TestWithdrawFail)
{
	BankAccount account;
	account.withdraw(100);
	EXPECT_EQ(account.getAvailableFunds(), 0.0);
	EXPECT_FALSE(account.withdraw(100));
}

TEST(DebitAccountTest, TestDebitLimit)
{
	DebitBankAccount debitAccount;
	debitAccount.setDebitLimit(1000.0);
	EXPECT_EQ(debitAccount.getDebitLimit(), 1000.0);
}

TEST(DebitAccountTest, TestWithdrawFailWithoutDebitLimit)
{
	DebitBankAccount debitAccount;
	EXPECT_FALSE(debitAccount.withdraw(100));
}

TEST(DebitAccountTest, TestWithdrawWithDebitLimit)
{
	DebitBankAccount debitAccount;
	debitAccount.setDebitLimit(1000.0);
	EXPECT_TRUE(debitAccount.withdraw(500.0));
}