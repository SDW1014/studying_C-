//사용법 입니다.
//#include <iostream>
//#include "BankAccount.h"
//
//int main() {
//	BankAccount bankAccount("123-456-789", "홍길동");
//	bankAccount.deposit(1000.0);
//	bankAccount.withdraw(500.0);
//	bankAccount.printAccountInfo();
//	return 0;
//}
#pragma once

#include <string>
#include <iostream>

class BankAccount
{
private:
	std::string accountNumber;
	std::string accountHolder;
	double balance;
public:
	BankAccount(std::string number, std::string holder) : accountNumber(number), accountHolder(holder), balance(0.0) {};

	double getBlance() const;

	void deposit(double amount);

	bool withdraw(double amount);

	void printAccountInfo() const;
};