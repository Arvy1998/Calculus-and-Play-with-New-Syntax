#include <iostream>
#include <cmath>

using namespace std;

long long temp[100] = { 1 };

long long f(unsigned long long aa) { // factorial

	if (aa == 0 || aa == 1) {
		return 1;
	}
	else {
		if (temp[aa] != 0)
			return temp[aa];
		else
			return temp[aa] = (aa * f(aa - 1));
	}

}

int main()
{
long long n, m, x, c;
	cin >> n >> m;
	c = n + m;
	cout << f(c) / f(n) * f(m);
	return 0;
}

/*
Doesnt work with large numbers. Maybe viewer could help? :>
*/
