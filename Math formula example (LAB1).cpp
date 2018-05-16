#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	long double x, vardiklis, skaitiklis, rez;
	cin >> x;
	skaitiklis = 5 * pow(x, 3) + pow(sin(exp(3 * x) - 16 * pow(x, 2)), 2);
	vardiklis = ((sin(4 * x)) / (cos(4 * x) + 1)) + 1;
	rez = skaitiklis / vardiklis;
	cout << fixed << setprecision(2) << rez;
	return 0;
}

/*
Uzd 0.6 is LAB1 procedurinio programavimo, sugaisinusi daug laiko del blogai sudaryto tikrinimo :)
*/
