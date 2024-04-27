#include <iostream>
#include <vector>
using namespace std;

void bubbleSortWithVector(vector<int>& abc)
{
	for (int i = 0; i < abc.size() - 1; i++)
	{
		for (int j = 0; j < abc.size() - 1 - i; j++)
		{
			if (abc[j] > abc[j + 1])
			{
				int temp = abc[j];
				abc[j] = abc[j + 1];
				abc[j + 1] = temp;
			}
		}
	}
}

int main()
{
	vector<int> vecInteger = { 1,2,32,134,124,124,15,234,5324,5234,523,4523,44523,452,345 };
	bubbleSortWithVector(vecInteger);

	for (auto& element : vecInteger)
		cout << element << endl;
	return 0;
} 