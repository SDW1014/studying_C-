#include "Calculator.h"
#include <iostream>

Calculator::Calculator()
{
	num1 = 0.0;
	num2 = 0.0;
}

void Calculator::inputNumbers()
{
	std::cout << "Enter the first number : ";
	std::cin >> num1;
	std::cout << "Eter the second number : ";
	std::cin >> num2;
}

void Calculator::performOperations()
{
	std::cout << "Addition result: " << num1 + num2 << std::endl;
	std::cout << "Subtraction result: " << num1 - num2 << std::endl;
	std::cout << "Multiplication result: " << num1 * num2 << std::endl;
	if (num2 != 0)
		std::cout << "Division result: " << num1 / num2 << std::endl;
	else
		std::cout << "Cannot divide by zero." << std::endl;
}
