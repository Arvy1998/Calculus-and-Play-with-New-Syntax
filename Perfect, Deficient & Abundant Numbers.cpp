#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

void Test(int n) {
	long long i = 1, sum = 0;

	while (i < n) {
		if (n % i == 0)
			sum = sum + i;
		i++;
	}
	if (sum == n) {
		cout << "perfect";
	}
	else if (sum < n) {
		cout << "deficient";
	}
	else {
		cout << "abundant";
	}
}

int main() {
	long long n;
	cin >> n;
	Test(n);
	return 0;
}
