#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<int> numbers = { 1,2,3,4,5 };
	
	// accumulate�� �̿��� vector�� �Է� ���Ŀ� ���� �հ踦 ���Ѵ�. (first = �������� ������, second = �������� ����, third = ���� index)
	int sum = accumulate(numbers.begin(), numbers.end(), 0);
	cout << "sum : " << sum << endl;

	// innert_product �Լ��� ����Ͽ� �� ������ ������ ��� �Ѵ�. 
	vector<int> vec1 = { 1,2,3,4,5 };
	vector<int> vec2 = { 6,7,8,9,10 };
	int inner_prod = inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);
	cout << "Inner Product : " << inner_prod << endl;

	// partial_sum �Լ��� ����Ͽ� �κ����� ��� �Ѵ�. 
	vector<int> partial_sums(numbers.size());
	partial_sum(numbers.begin(), numbers.end(), partial_sums.begin());
	cout << "Partial Sums : ";
	for (int num : partial_sums)
	{
		cout << num << " ";
	}
	cout << endl;

	// adjacent_difference �Լ��� ����Ͽ� ������ ��� ���� ���̸� ����Ѵ�. 
	vector<int> differences(numbers.size());
	adjacent_difference(numbers.begin(), numbers.end(), differences.begin());
	cout << "Adjacent Differences : ";
	for (int diff : differences)
	{
		cout << diff << " ";
	}
	cout << endl;

	return 0;
}