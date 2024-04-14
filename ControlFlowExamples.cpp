// ControlFlowExamples.cpp
#include "ControlFlowExamples.h"
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

void ControlFlowExamples::vectorExample()
{
	vector<int> numbers = { 1,2,3,4,5 };

	cout << "vector Content: ";
	for (int num : numbers)
	{
		cout << num << " ";
	}
	cout << endl;
}

void ControlFlowExamples::mapExample()
{
	map<string, int> fruitCount;
	fruitCount["apple"] = 5;
	fruitCount["banana"] = 3;
	fruitCount["cherry"] = 10;

	cout << "Fruit counts : \n";
	for (const auto& pair : fruitCount)
	{
		cout << pair.first << ": " << pair.second << endl;
	}
}

void ControlFlowExamples::setExample()
{
	set<int> uniqueNumbers = {1,2,3,3,4,4,4,5};
	cout << "Unique numbers: ";
	for (int num : uniqueNumbers) 
	{
		cout << num << " ";
	}
	cout << endl;
}
