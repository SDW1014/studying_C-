#include <iostream>
#include <cstring>

int main()
{
	char* a = new char[100];

	strcpy_s(a, sizeof(a), "Hello");

	strcat_s(a, sizeof(a), ", World!");

	std::cout << a << std::endl;

	delete[] a;

	return 0;
}