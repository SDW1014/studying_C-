#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b, double c = 0.0)
{
	return a + b + c;
}

int main()
{
	cout << "정수의 합 : " << add(3, 4) << endl;
	cout << "실수의 합 : " << add(1.1, 2.2) << endl;
	cout << "실수의 합 (세개) : " << add(1.1, 2.2, 3.3) << endl;

	return 0;
}