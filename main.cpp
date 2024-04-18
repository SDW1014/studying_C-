#include <iostream>
#include <vector>
#include <string>
#include "Container20240419.h"

using namespace std;

int main()
{
	Container20240419<int> intContainer;
	Container20240419<string> stringContainer;

	intContainer.add(10);
	intContainer.add(20);
	intContainer.print();

	stringContainer.add("Hello");
	stringContainer.add("World");
	stringContainer.print();

	return 0;
}