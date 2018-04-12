#include <iostream>

using namespace std;

bool IsPrime(int a) {
	if (a == 1 || a == 0) {
		return 0;
	}
	else if (a > 1) {
		for (auto i = 2; i <= a / 2; i = i++) {
			if (a > 10) i = i + 5;
			if (a % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int main() {
	int a;
	cin >> a;
	if (IsPrime(a) == true) {
		cout << "1";
	}
	else {
		cout << "0";
	}
	return 0;
}
