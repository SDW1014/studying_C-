#include "BankAccount.h"

double BankAccount::getBlance() const
{
	return balance;
}

void BankAccount::deposit(double amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		std::cout << "입금 금액은 양수여야 합니다." << std::endl;
	}
}

bool BankAccount::withdraw(double amount)
{
	if (amount <= balance && amount > 0)
	{
		balance -= amount;
		return true;
	}
	else
	{
		std::cout << "잔액 부족 또는 잘못된 출금 시도입니다." << std::endl;
		return false;
	}
	
}

void BankAccount::printAccountInfo() const
{
}
