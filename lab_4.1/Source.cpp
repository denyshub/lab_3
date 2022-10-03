#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i;
	double y;
	double y1;
	double y2;
	double y3;//results

	// for 1
	y = 1;
	for (i = 1; i <= 15; i++) {
		y *= (pow(sin(1. * i), 2) + pow(cos(1.0 / 1. * i), 2)) / 1. * i * 1. * i;
	}
	cout << "Result_for_plus: " << y << endl;


	// for 1

	y3 = 1;
	for (i = 15; i >= 1; i--) {
		y3 *= (pow(sin(1. * i), 2) + pow(cos(1.0 / 1. * i), 2)) / 1. * i * 1. * i;
	}
	cout << "Result_for_minus: " << y3 << endl;



	//while
	y1 = 1;
	i = 1;
	while (i <= 15) {
		y1 *= (pow(sin(1. * i), 2) + pow(cos(1.0 / 1. * i), 2)) / 1. * i * 1. * i;
		i++;

	}
	cout << "Result_while: " << y1 << endl;
	//do while
	y2 = 1;
	i = 1;
	do {
		y2 *= (pow(sin(1. * i), 2) + pow(cos(1.0 / 1. * i), 2)) / 1. * i * 1. * i;
		i++;
	} while (i <= 15);
	cout << "Result_do_while: " << y2 << endl;



	return 0;
}