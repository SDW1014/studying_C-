#ifndef INCREMENET_ARRAY20240419_H
#define INCREMENET_ARRAY20240419_H

#include <vector>

void incrementArray(std::vector<int>& arr, int startIdx, int endIdx);

#endif // !INCREMENET_ARRAY20240419_H


//1번 기존 예제 
//#include <iostream>
//#include <thread>
//#include <vector>
//
//using namespace std;
//
//void incrementArray(vector<int>& arr, int startIdx, int endIdx)
//{
//	for (int i = startIdx; i < endIdx; i++)
//	{
//		arr[i]++;
//	}
//}
//int main()
//{
//	vector<int> numbers(10, 0);
//
//	thread t1(incrementArray, ref(numbers), 0, 5);
//	thread t2(incrementArray, ref(numbers), 5, 10);
//
//	t1.join();
//	t2.join();
//
//	for (int num : numbers)
//	{
//		cout << num << endl;
//	}
//	cout << endl;
//	return 0;
//}

//2번 예제 
//#include <iostream>
//#include <thread>
//#include <vector>
//#include "incremenet_array20240419.h"
//
//using namespace std;
//
//int main()
//{
//	vector<int> numbers(10, 0);
//
//	thread t1(incrementArray, ref(numbers), 0, 5);
//	thread t2(incrementArray, ref(numbers), 5, 10);
//
//	t1.join();
//	t2.join();
//
//	for (int num : numbers)
//	{
//		cout << num << endl;
//	}
//	cout << endl;
//	return 0;
//}