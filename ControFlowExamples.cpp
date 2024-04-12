#include "ControFlowExamples.h"
#include <iostream>

using namespace std;

void ControFlowExamples::ifElseExample()
{
	int number;
	cout << "Enter an Integer: ";
	cin >> number;
	if (number > 0)
	{
		cout << "The number is positive." << endl;
	}
	else if (number < 0)
	{
		cout << "The number is negative." << endl;
	}
	else
	{
		cout << "The number is zero." << endl;
	}
}

void ControFlowExamples::switchCaseExample()
{
	int day;
	cout << "Enter day number (1-7) : ";
	cin >> day;
	switch (day)
	{
	case 1: cout << "Monday" << endl; break;
	case 2: cout << "Tuesday" << endl; break;
	case 3: cout << "Wednesday" << endl; break;
	case 4: cout << "Thursday" << endl; break;
	case 5: cout << "Friday" << endl; break;
	case 6: cout << "Saturday" << endl; break;
	case 7: cout << "Sunday" << endl; break;
	default: cout << "Invalid day number." << endl;
	}
}

void ControFlowExamples::forLoopExample()
{
	int sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		sum += i;
	}
	cout << "Sum of 1 to 10 is " << sum << endl;
}

void ControFlowExamples::whileLoopExample()
{
	int number, sum = 0;
	cout << "Enter numbers (0 to step) : ";
	cin >> number;
	while (number != 0)
	{
		sum += number;
		cin >> number;
	}
	cout << "Total sum is " << sum << endl;
}

void ControFlowExamples::doWhileLoopExample()
{
	int number;

	do 
	{
		cout << "Enter a number (0 to stop): ";
		cin >> number;
		cout << "You entered: " << number << endl;
	} while (number != 0);

}
