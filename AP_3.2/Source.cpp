#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{//First option
	double x;
	double a;
	double b;
	double c;
	double F;//Result1
	double F1;//Result2
	cout << "Enter an x: "; cin >> x;
	cout << "Enter an a: "; cin >> a;
	cout << "Enter an b: "; cin >> b;
	cout << "Enter an c: "; cin >> c;
	if (x < 0 && b != 0)
		F = a - x * 1.0 / (10 + b);
	else
		if (x > 0 && b == 0)
			F = (x - a) * 1.0 / (x - c);
		else
			F = 3 * x + 2.0 / c;



	cout << "Result 1: " << F << endl;

	//Option2

	if (x < 0 && b != 0)
		F1 = a - x * 1.0 / (10 + b);
	if (x > 0 && b == 0)
		F1 = (x - a) * 1.0 / (x - c);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F1 = 3 * x + 2.0 / c;

	cout << "Result 2: " << F1 << endl;





	return 0;
}
