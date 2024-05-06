#include <iostream>
#include <random>

using namespace std;

int main()
{
	int counter = 0;
	cout << "출력할 숫자의 범위를 입력해주세요 : ";
	cin >> counter;

	int index = 0;

	while (index <= counter)
	{
		if (index % 2 == 0)
			cout << index <<endl;
		index++;
	}

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 100);

	int quetion_number = dis(gen);

	cout << "question_number : " << quetion_number << endl;

	int result_number = 101;
	while (result_number != quetion_number)
	{
		cout << "input result number (0 <= x <= 100) : ";

		cin >> result_number;
	}

	cout << "this number is correct" << endl;

	int n;
	cout << "피보나치의 길이를 입력하세요 n :";
	cin >> n;

	int a = 1, b = 1;

	cout << "피보나치 수열 :  " << endl;

	if (n >= 1)
		cout << a << " ";
	if (n >= 2)
		cout << b << " ";

	int count = 3;
	while (count <= n)
	{
		int c = a + b;
		cout << c << " ";
		a = b;
		b = c;

		count++;
	}

	return 0;
}