#include <iostream>

using namespace std;

int main()
{
	long double P, S, a, b;
	cin >> P >> S;
	for (int i = 0; i <= P; i++) {
		for (int j = 0; j <= P; j++) {
			if (2 * i + 2 * j == P && i * j == S) {
				a = i; b = j;
				break;
			}
		}
	}
	if (a > b) {
		cout << b << "," << a;
	}
	else cout << a << "," << b;
    return 0;
}
