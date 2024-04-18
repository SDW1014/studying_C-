#include <iostream>

using namespace std;

double calculate(double num1, double num2, char op);


//1¹ø 
//#include <iostream>
//#include <stdexcept>
//#include <string>
//
//using namespace std;
//
//double calculate(double num1, double num2, char op)
//{
//	switch (op)
//	{
//	case '+':
//		return num1 + num2;
//	case '-':
//		return num1 - num2;
//	case '*':
//		return num1 * num2;
//	case '/':
//		if (num2 == 0)
//			throw runtime_error("Error: Division by zero");
//		return num1 / num2;
//	default:
//		throw invalid_argument("Error: Invalid operator");
//	}
//}
//int main()
//{
//	double num1, num2;
//	char op;
//	cout << "Enter two numbers and and operator (+, -, *, /): ";
//	cin >> num1 >> num2 >> op;
//
//	try
//	{
//		double result = calculate(num1, num2, op);
//		cout << "Result: " << result << endl;
//	}
//	catch (const runtime_error& e)
//	{
//		cout << e.what() << endl;
//	}
//	catch (const invalid_argument& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

//2¹ø 
//#include <iostream>
//#include <stdexcept>
//#include "Calculate20240419.h"
//using namespace std;
//
//int main()
//{
//	double num1, num2;
//	char op;
//	cout << "Enter two numbers and and operator (+, -, *, /): ";
//	cin >> num1 >> num2 >> op;
//
//	try
//	{
//		double result = calculate(num1, num2, op);
//		cout << "Result: " << result << endl;
//	}
//	catch (const runtime_error& e)
//	{
//		cout << e.what() << endl;
//	}
//	catch (const invalid_argument& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}