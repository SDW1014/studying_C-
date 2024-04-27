#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(const vector<int>& arr, int target)
{
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == target)
		{
			return mid;
		}
		else if (arr[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}

void bubble_sort(vector<int>& arr)
{
	for (int i = 0; i < arr.size() - 1; i++)
	{
		for (int j = 0; j < arr.size() - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	vector<int> arr = { 1,3,4,2,5,6,2354,234,234,234,234,234,12,312,3 };

	bubble_sort(arr);


	int result = binary_search(arr, 4);

	for (auto& num : arr)
		cout << num << " ";

	if (result != -1)
	{
		cout << "Found target at index: " << result << endl;
	}
	else
	{
		cout << "Target not found." << endl;
	}
}