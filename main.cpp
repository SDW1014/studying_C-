#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<int> numbers = { 1,2,3,4,5 };
	
	// accumulate를 이용한 vector등 입력 형식에 따른 합계를 구한다. (first = 데이터의 시작점, second = 데이터의 끝점, third = 시작 index)
	int sum = accumulate(numbers.begin(), numbers.end(), 0);
	cout << "sum : " << sum << endl;

	// innert_product 함수를 사용하여 두 벡터의 내적을 계산 한다. 
	vector<int> vec1 = { 1,2,3,4,5 };
	vector<int> vec2 = { 6,7,8,9,10 };
	int inner_prod = inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);
	cout << "Inner Product : " << inner_prod << endl;

	// partial_sum 함수를 사용하여 부분합을 계산 한다. 
	vector<int> partial_sums(numbers.size());
	partial_sum(numbers.begin(), numbers.end(), partial_sums.begin());
	cout << "Partial Sums : ";
	for (int num : partial_sums)
	{
		cout << num << " ";
	}
	cout << endl;

	// adjacent_difference 함수를 사용하여 인접한 요소 간의 차이를 계산한다. 
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