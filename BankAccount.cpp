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
		std::cout << "�Ա� �ݾ��� ������� �մϴ�." << std::endl;
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
		std::cout << "�ܾ� ���� �Ǵ� �߸��� ��� �õ��Դϴ�." << std::endl;
		return false;
	}
	
}

void BankAccount::printAccountInfo() const
{
}
