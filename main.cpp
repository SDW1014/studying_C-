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
	cout << "������ �� : " << add(3, 4) << endl;
	cout << "�Ǽ��� �� : " << add(1.1, 2.2) << endl;
	cout << "�Ǽ��� �� (����) : " << add(1.1, 2.2, 3.3) << endl;

	return 0;
}