#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	float x, xp, xk, step, f, b, r;
	cout << "Enter xp: "; cin >> xp;
	cout << "Enter xk: "; cin >> xk;
	cout << "Enter step: "; cin >> step;

	cout << fixed;
	cout << "---------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(5) << "|" << setw(2) << " " << setw(5) << "result" << setw(3) << "|" << endl;
	cout << "---------------------" << endl;

	x = xp;
	while (x <= xk) {
		f = 1. / abs(x + 2) + 1;
		if (x < 1)
			b = 7 * x * x + x - 8;
		else
			if (x > 4)
				b = sqrt(1 + abs(pow(cos(x), 3)));
			else
				b = 1. / (tan((x + 4) / sqrt(11))) + 3;
		r = f - b;



		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << r
			<< " |" << endl;
		cout << "---------------------" << endl;
		x += step;
	}


	return 0;
}