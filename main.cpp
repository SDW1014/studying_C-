#include <iostream>
#include "fstrema20240418.h"
using namespace std;

int main()
{
	string filename = "example.txt";
	try
	{
		fstrema20240418 fileTest(filename);

		cout << "������ �� ���� ���ҽ��ϴ�." << endl;
	}
	catch (const exception& e)
	{
		cerr << "������ ���� ���߽��ϴ�." << e.what() << endl;
	}
	return 0;
}