#include <iostream>

using namespace std;

int main()
{
	long long n, count = 1;
	cin >> n;
	for (auto i = 1; i < n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		cout << "TAIP";
	}
	else cout << "NE";
	return 0;
}
