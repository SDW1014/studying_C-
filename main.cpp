#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
	
	vector<int> evenNumbers;

	copy_if(numbers.begin(), numbers.end(), back_inserter(evenNumbers), [](int n)
	{
		return !(n % 2);
	});

	cout << "Even Numbers : ";

	for (int n : evenNumbers)
	{
		cout << n << endl;
	}
	cout << endl;
	return 0;
}

