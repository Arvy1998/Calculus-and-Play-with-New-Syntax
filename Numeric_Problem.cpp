#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

unsigned long long swap(unsigned long long x) {
	unsigned long long a, b, c, d, x_reverse;
	vector <unsigned long long> XREVERSE;
	XREVERSE.clear();
	if (x == 0) {
		x_reverse = 0;
	}
	else if (x < 100) {
		a = x % 10;
		b = (x / 10) % 10;
		XREVERSE.push_back(b);
		XREVERSE.push_back(a);
		sort(XREVERSE.begin(), XREVERSE.end());
		x_reverse = XREVERSE[1] * 10 + XREVERSE[0];
	}
	else if (x < 1000) {
		a = x % 10;
		b = (x / 10) % 10;
		c = (x / 100) % 10;
		XREVERSE.push_back(c);
		XREVERSE.push_back(b);
		XREVERSE.push_back(a);
		sort(XREVERSE.begin(), XREVERSE.end());
		x_reverse = XREVERSE[2] * 100 + XREVERSE[1] * 10 + XREVERSE[0];
	}
	else if (x < 10000) {
		a = x % 10;
		b = (x / 10) % 10;
		c = (x / 100) % 10;
		d = (x / 1000) % 10;
		XREVERSE.push_back(d);
		XREVERSE.push_back(c);
		XREVERSE.push_back(b);
		XREVERSE.push_back(a);
		sort(XREVERSE.begin(), XREVERSE.end());
		x_reverse = XREVERSE[3] * 1000 + XREVERSE[2] * 100 + XREVERSE[1] * 10 + XREVERSE[0];
	}
	return x_reverse;
}

int main()
{
	unsigned long long n, x_swapped, x_reverse, a, b, c, d, x;
	vector <unsigned long long> XREVERSE;
	cin >> x_reverse >> n;
	if (n < 10) {
		x = n;
	}
	else x = 10;
	for (auto i = 1; i < x; i++) {
		x_reverse = swap(x_reverse);
		XREVERSE.clear();
		if (x_reverse < 10000) {
			a = x_reverse % 10;
			b = (x_reverse / 10) % 10;
			c = (x_reverse / 100) % 10;
			d = (x_reverse / 1000) % 10;
			XREVERSE.push_back(d);
			XREVERSE.push_back(c);
			XREVERSE.push_back(b);
			XREVERSE.push_back(a);
			x_swapped = XREVERSE[3] * 1000 + XREVERSE[2] * 100 + XREVERSE[1] * 10 + XREVERSE[0];
		}
		else if (x_reverse < 1000) {
			a = x_reverse % 10;
			b = (x_reverse / 10) % 10;
			c = (x_reverse / 100) % 10;
			XREVERSE.push_back(c);
			XREVERSE.push_back(b);
			XREVERSE.push_back(a);
			x_swapped = XREVERSE[2] * 100 + XREVERSE[1] * 10 + XREVERSE[0];
		}
		else if (x_reverse < 100) {
			a = x_reverse % 10;
			b = (x_reverse / 10) % 10;
			XREVERSE.push_back(b);
			XREVERSE.push_back(a);
			x_swapped = XREVERSE[1] * 10 + XREVERSE[0];
		}
		else {
			x_swapped = XREVERSE[0];
		}
		if (x_reverse > x_swapped) {
			x_reverse = x_reverse - x_swapped;
		}
		else {
			x_reverse = x_swapped - x_reverse;
		}
	}
	cout << x_reverse;
    return 0;
}
