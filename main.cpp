#include <iostream>

void updateValue(int& ref)
{
	ref += 10;
}

int main()
{
	int number = 10;
	int* ptr = &number;
	
	std::cout << "Original number : " << number << std::endl;

	*ptr = 20;
	
	std::cout << "Modified number : " << number << std::endl;

	int arr[3] = {1,2,3};
	int* arr_ptr = arr;

	std::cout << "Array elements : ";
	for (int i = 0; i < 3; i++)
	{
		std::cout << *(arr_ptr + i) << " ";
	}
	std::cout << std::endl;

	int number2 = 10;
	int& ref2 = number2;

	std::cout << "Original number2 : " << number2 << std::endl;

	ref2 = 20;
	std::cout << "Modified number2 : " << number2 << std::endl;

	updateValue(number2);
	std::cout << "Updated number after function call : " << number2 << std::endl;

	return 0;
}