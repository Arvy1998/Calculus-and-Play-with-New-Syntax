#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	long double a, b, x, numb_of_digits;
	cin >> a >> b;
	numb_of_digits = floor(1 + b * log10(a));
	cout << fixed << setprecision(0) << numb_of_digits;
    return 0;
}
