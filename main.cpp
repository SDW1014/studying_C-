#include <iostream>
#include <vector>

using namespace std;

bool is_even(int number)
{
	return (number % 2 == 0);
}

int main()
{
	vector<int> numbers;
	for (int i = 1; i <= 10; ++i)
	{
		numbers.push_back(i);

	}
	for (int number : numbers)
	{
		if (is_even(number))
		{
			cout << number << "is even." << endl;
		}
		else
		{
			cout << number << "is odd." << endl;
		}
	}
	return 0;
}