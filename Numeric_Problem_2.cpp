#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long double r, h, C, Clonger;
	cin >> r;
	C = 2 * 355.0/113.0 * 1;
	Clonger = C + 100;
	h = (Clonger / (2 * 355.0/113.0)) - 1;
	cout << fixed << setprecision(3) << h;
	return 0;
}
