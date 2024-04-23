#include <iostream>
using namespace std;

class BankAccount2
{
private:
	double balance;
public:
	BankAccount2(double initialBalance)
	{
		if (initialBalance < 0)
		{
			throw invalid_argument("Initial balance cannot be negative.");
		}
		balance = initialBalance;
	}

	void deposit(double amount)
	{
		if (amount <= 0)
		{
			throw invalid_argument("Deposit amount must be positive.");
		}
		balance += amount;
	}

	void withdraw(double amount)
	{
		if (amount > balance)
		{
			throw invalid_argument("Withdrawal amount exceeds balance.");
		}
		balance -= amount;
	}

	double getBalance() const
	{
		return balance;
	}
};

int main()
{
	BankAccount2 account(100.0);

	account.deposit(50.0);
	cout << "Current balance after deposit : " << account.getBalance() << endl;

	account.withdraw(30.0);
	cout << "Current balance after withdrawal : " << account.getBalance() << endl;


	return 0;
}
