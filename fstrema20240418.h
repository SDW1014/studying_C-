#pragma once
#include <iostream>
#include <fstream>
#include <string>
class fstrema20240418
{
private:
	std::fstream inFile;
	std::string line;
public:
	fstrema20240418 (const std::string& inputURL);
	~fstrema20240418();
};


//#include <iostream>
//#include "fstrema20240418.h"
//using namespace std;
//
//int main()
//{
//	string filename = "example.txt";
//	try
//	{
//		fstrema20240418 fileTest(filename);
//
//		cout << "������ �� ���� ���ҽ��ϴ�." << endl;
//	}
//	catch (const exception& e)
//	{
//		cerr << "������ ���� ���߽��ϴ�." << e.what() << endl;
//	}
//	return 0;
//}