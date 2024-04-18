#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class Container20240419
{
private:
	vector<T> elements;
public:
	void add(const T& element);
	void print();
};

//1번 기존 예제
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//template <typename T>
//class Container
//{
//private:
//	vector<T> elements;
//public:
//	void add(const T& element)
//	{
//		elements.push_back(element);
//	}
//	void print()
//	{
//		for (auto& element : elements)
//		{
//			cout << element << endl;
//		}
//		cout << endl;
//	}
//};
//
//int main()
//{
//	Container<int> intContainer;
//	Container<string> stringContainer;
//
//	intContainer.add(10);
//	intContainer.add(20);
//	intContainer.print();
//
//	stringContainer.add("Hello");
//	stringContainer.add("World");
//	stringContainer.print();
//
//	return 0;
//}

//2번 예제 
//#include <iostream>
//#include <vector>
//#include <string>
//#include "Container20240419.h"
//
//using namespace std;
//
//int main()
//{
//	Container20240419<int> intContainer;
//	Container20240419<string> stringContainer;
//
//	intContainer.add(10);
//	intContainer.add(20);
//	intContainer.print();
//
//	stringContainer.add("Hello");
//	stringContainer.add("World");
//	stringContainer.print();
//
//	return 0;
//}
