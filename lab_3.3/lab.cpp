#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x;
	double R;
	double y; //result 
	cout << "Enter x: "; cin >> x;
	cout << "Enter R: "; cin >> R;

	if (x <= -2)
		y = x + 3;
	else
		if (-2 < x && x <= 4)
			y = -1.0 / 4 * R * x;
		else
			if (4 < x && x <= 8 - R)
				y = -R;
			else
				if (8 - R < x && x <= 8)
					y = sqrt(R * R - x * x + 16 * x - 64) - R;
				else
					if (8 < x && x <= 8 + R)
						y = sqrt(R * R - x * x + 16 * x - 64) - R;
					else
						y = -R;
	cout << "y= " << y << endl;














	return 0;
}
