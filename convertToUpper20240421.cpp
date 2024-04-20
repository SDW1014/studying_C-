#include "convertToUpper20240421.h"

convertToUpper20240421::convertToUpper20240421()
{
	string input, output;

	cout << "Enter input file name : ";
	cin >> input;
	cout << "Enter output file name : ";
	cin >> output;

	MyFileHandler(input, output);
}

convertToUpper20240421::convertToUpper20240421(string inputFileName, string outputFileName)
{
	MyFileHandler(inputFileName, outputFileName);
}

convertToUpper20240421::~convertToUpper20240421()
{
	if (inputFile.is_open())
	{
		inputFile.close();
	}
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void convertToUpper20240421::MyFileHandler(string inputFileName, string outputFileName)
{
	inputFile.open(inputFileName);
	outputFile.open(outputFileName);

	if (!inputFile.is_open() || !outputFile.is_open())
	{
		cout << "Error opening files!" << endl;
		return;
	}
	MyFileToupper();
}

void convertToUpper20240421::MyFileToupper()
{
	string line;
	while (getline(inputFile, line))
	{
		for (char& c : line)
		{
			c = toupper(c);
		}
		outputFile << line << '\n';
	}
}


