#include "Calculate20240419.h"

double calculate(double num1, double num2, char op)
{
	switch (op)
	{
	case '+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	case '*':
		return num1 * num2;
	case '/':
		if (num2 == 0)
			throw runtime_error("Error: Division by zero");
		return num1 / num2;
	default:
		throw invalid_argument("Error: Invalid operator");
	}
}