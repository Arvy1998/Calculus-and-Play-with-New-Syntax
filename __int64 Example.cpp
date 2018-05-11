#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	__int64 S, n;
	cin >> n;
	S = 0;
	if (n <= 0) { cout << S; }
	else {
		S = ((9 * pow(10, n - 1)) * (pow(10, n - 1) + (pow(10, n) - 1))) / 2;
	}
	cout << fixed << setprecision(0) << S;
    return 0;
}
