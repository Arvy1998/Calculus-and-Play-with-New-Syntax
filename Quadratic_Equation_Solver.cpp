#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	long double a, b, c, x1, x2, D;
	cin >> a >> b >> c;
	D = pow(b, 2) - 4 * a * c;
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		if (x1 > x2) {
			cout << x2 << "_" << x1;
		}
		else if (x1 < x2) {
			cout << x1 << "_" << x2;
		}
	}
	else  if (D == 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		cout << x1;
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
