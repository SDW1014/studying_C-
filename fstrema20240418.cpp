#include "fstrema20240418.h"

fstrema20240418::fstrema20240418(const std::string& inputURL)
{
	inFile.open(inputURL);
	if (inFile)
	{
		while (getline(inFile, line))
		{
			std::cout << line << std::endl;
		}
		inFile.close();
	}
	else
	{
		std::cout << "������ �� �� �����ϴ�." << std::endl;
	}
}

fstrema20240418::~fstrema20240418()
{
	if (inFile.is_open())
	{
		inFile.close();
	}
}
