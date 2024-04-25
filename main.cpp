#include "GcdAndLcm20240426.h"
#include <vector>

using namespace std;

int main()
{
	GcdAndLcm20240426 GCD(3,5);
	cout << GCD.gcd() << endl;
	for (auto& num : GCD.getVec())
	{
		cout << num << endl;
	}
	return 0;
}