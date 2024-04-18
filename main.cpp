#include <iostream>
#include "Stack20240418.h"

using namespace std;

int main()
{
	Stack20240418<int> stack1;

	stack1.push(1);
	stack1.push(2);
	stack1.push(3);

	cout << "Top element: " << stack1.top() << endl;

	while (!stack1.isEmpty())
	{
		cout << "Popped element: " << stack1.pop() << endl;
	}

	return 0;
}