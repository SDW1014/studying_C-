#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int number_turns;
	cout << "나선을 몇 바퀴 그릴까요? ";
	cin >> number_turns;

	double golden_ratio = (1 + sqrt(5)) / 2;
	double theta = 0;
	double radius = 1;

	while (number_turns-- > 0)
	{
		double x = radius * cos(theta);
		double y = radius * sin(theta);

		cout << "(" << x << ", " << y << ")" << endl;

		radius *= golden_ratio;

		theta += asin(1 / golden_ratio);
	}
	return 0;
}