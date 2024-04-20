#ifndef CONVERT_TO_UPPER_20240421_H
#define CONVERT_TO_UPPER_20240421_H

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

class convertToUpper20240421
{
private:
	ifstream inputFile;
	ofstream outputFile;
public:
	convertToUpper20240421();
	convertToUpper20240421(string inputFileName, string outputFileName);

	~convertToUpper20240421();

	void MyFileHandler(string inputFileName, string outputFileName);
	void MyFileToupper();
};

#endif


//1. 이미 했던것 
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cctype>
//
//using namespace std;
//
//void convertToUpper(string inputFilename, string outputFilename)
//{
//	ifstream inputFile(inputFilename);
//	ofstream outputFile(outputFilename);
//
//	if (!inputFile.is_open() || !outputFile.is_open())
//	{
//		cout << "Error opening files!" << endl;
//		return;
//	}
//
//	string line;
//	while (getline(inputFile, line))
//	{
//		for (char& c : line)
//		{
//			c = toupper(c);
//		}
//		outputFile << line << '\n';
//	}
//
//	inputFile.close();
//	outputFile.close();
//}
//
//int main()
//{
//	string input, output;
//	cout << "Enter input file name : ";
//	cin >> input;
//	cout << "Enter puput file name : ";
//	cin >> output;
//
//	convertToUpper(input, output);
//	cout << "Conversion completed." << endl;
//	return 0;
//}

//2번 테스트 
//#include "convertToUpper20240421.h"
//
//int main()
//{
//	convertToUpper20240421 convertClass("input.txt", "output.txt");
//	return 0;
//}