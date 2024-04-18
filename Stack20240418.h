#pragma once
#include <iostream>
#include <vector>

template <typename T>
class Stack20240418
{
private:
    std::vector<T> elements;

public:
    Stack20240418();
    ~Stack20240418();
    void push(const T& element);
    T pop();
    T top();
    bool isEmpty() const;
};



//1번-기본 처음 유형 
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//template <typename T>
//class Stack {
//private:
//	vector<T> elements;
//
//public:
//	void push(const T& element)
//	{
//		elements.push_back(element);
//	}
//
//	T pop()
//	{
//		if (elements.empty())
//		{
//			throw out_of_range("Stack<>::pop(): empty stack");
//		}
//		T elem = elements.back();
//		elements.pop_back();
//		return elem;
//	}
//
//	T top()
//	{
//		if (elements.empty())
//		{
//			throw out_of_range("Stack<>::top(): empty stack");
//		}
//		return elements.back();
//	}
//
//	bool isEmpty() const
//	{
//		return elements.empty();
//	}
//};
//
//int main()
//{
//	Stack<int> intStack;
//	Stack<string> stringStack;
//
//	intStack.push(1);
//	intStack.push(2);
//	cout << "Top element in intStack: " << intStack.top() << endl;
//
//	stringStack.push("hello");
//	cout << "Top element in stringStack: " << stringStack.top() << endl;
//	return 0;
//}

//2번 신형 
//#include <iostream>
//#include "Stack20240418.h"
//
//using namespace std;
//
//int main()
//{
//	Stack20240418<int> stack1;
//
//	stack1.push(1);
//	stack1.push(2);
//	stack1.push(3);
//
//	cout << "Top element: " << stack1.top() << endl;
//
//	while (!stack1.isEmpty())
//	{
//		cout << "Popped element: " << stack1.pop() << endl;
//	}
//
//	return 0;
//}