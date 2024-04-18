#include <iostream>
#include <stdexcept>
#include "Calculate20240419.h"
using namespace std;

int main()
{
	double num1, num2;
	char op;
	cout << "Enter two numbers and and operator (+, -, *, /): ";
	cin >> num1 >> num2 >> op;

	try
	{
		double result = calculate(num1, num2, op);
		cout << "Result: " << result << endl;
	}
	catch (const runtime_error& e)
	{
		cout << e.what() << endl;
	}
	catch (const invalid_argument& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}