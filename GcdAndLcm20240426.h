#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class GcdAndLcm20240426
{
private:
	int a, b;
	int iGcd;
public:
	GcdAndLcm20240426(int a, int b) : a(a), b(b), iGcd(0) {}

	int gcd();
	int insideGcd(int a, int b);
	int lcm();
	vector<int> getVec();
};

