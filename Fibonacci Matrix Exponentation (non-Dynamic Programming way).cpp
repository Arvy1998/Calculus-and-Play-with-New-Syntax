#include <iostream>
#include <algorithm>

using namespace std;

/*
| 1 0 |
| 1 1 | <- pradine matrica -> a(22[1,1]) elementas -> vektorius fibonaci(n), o a(21[1,0]) elementas -> vektorius fibonaci(n - 1)
*/
unsigned long long fibonaci(unsigned long long n) {
	unsigned long long fib[2][2] = { { 1,1 },{ 1,0 } };
	unsigned long long ats[2][2] = { { 1,0 },{ 0,1 } };
	unsigned long long temp[2][2] = { { 0,0 },{ 0,0 } };
	while (n) {
		if (n & 1) {
			memset(temp, 0, sizeof temp);
			for (auto i = 0; i < 2; i++) {
				for (auto j = 0; j < 2; j++) {
					for (auto k = 0; k < 2; k++) {
						temp[i][j] = (temp[i][j] + ats[i][k] * fib[k][j]);
					}
				}
			}
			for (auto i = 0; i < 2; i++) {
				for (auto j = 0; j < 2; j++) {
					ats[i][j] = temp[i][j];
				}
			}
		}
		memset(temp, 0, sizeof temp);
		for (auto i = 0; i < 2; i++) {
			for (auto j = 0; j < 2; j++) {
				for (auto k = 0; k < 2; k++) {
					temp[i][j] = (temp[i][j] + fib[i][k] * fib[k][j]);
				}
			}
		}
		for (auto i = 0; i < 2; i++) {
			for (auto j = 0; j < 2; j++) {
				fib[i][j] = temp[i][j];
			}
		}
		n = n / 2;
	}
	return ats[0][1] % 1000000007;
}

int main()
{
	unsigned long long n;
	cin >> n;
	cout << fibonaci(n);
    return 0;
}
