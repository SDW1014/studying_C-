#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x = 5;
	int y = 3;

	int result = add(x, y);
	cout << "The sum is: " << result << endl;
	return 0;
}