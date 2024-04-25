#include "GcdAndLcm20240426.h"

int GcdAndLcm20240426::gcd()
{
	if (iGcd == 0)
		iGcd = insideGcd(a, b);
	return insideGcd(a, b);
}

int GcdAndLcm20240426::insideGcd(int a, int b)
{
	if (b == 0) return a;
	return insideGcd(b, a%b);
}

int GcdAndLcm20240426::lcm()
{
	return (a*b)/iGcd;
}

vector<int> GcdAndLcm20240426::getVec()
{
	return { iGcd, lcm()};
}
