#include <cmath>
#include <iostream>
using namespace std;
int main() {
	double x;
	double y;
	double R;
	cout << "Enter x: "; cin >> x;
	cout << "Enter y: "; cin >> y;
	cout << "Enter R: "; cin >> R;

	if ((x <= 0 && x >= -R && y <= x + R && y >= 0 && y <= R) || (x >= 0 && x <= R && y <= sqrt(R*R-x*x) && y >= 0 && y <= R) || (x <= 0 && y <= sqrt(R*R-x*x) && y <= 0 && y >= -R && x >= -R))
		cout << "yes" << endl;
	else
		cout << "no";









	return 0;
}