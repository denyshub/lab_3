#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double x;//number
	double y; // final result
	double y2; // option
	double f;//1.0 / abs(x + 2) + 1
	cout << "Enter a number: "; cin >> x;
	f = (1.0 / abs(x + 2)) + 1;
	if (x<1)
		y2 = 7 * x * x + x - 8;
	else
		if (1 <= x && x <= 4)
			y2 = 1.0 / tan((x + 4.0) / sqrt(11)) + 3;
		else
			y2 = sqrt(1.0 + abs(pow(cos(x), 3)));
	y = f - y2;
	cout << y << endl;
















	return 0;
}
