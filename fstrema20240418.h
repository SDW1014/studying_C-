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
//		cout << "파일을 잘 열어 보았습니다." << endl;
//	}
//	catch (const exception& e)
//	{
//		cerr << "파일을 열지 못했습니다." << e.what() << endl;
//	}
//	return 0;
//}