#include <iostream>

using namespace std;

int main()
{
	long double n, matrix[10][10], sum = 0;
	cin >> n;
	if (n <= 1) {
		cout << "No";
	}
	else {
		for (auto i = 0; i < n; i++) {
			for (auto j = 0; j < n; j++) {
				cin >> matrix[i][j];
			}
		}
		for (auto i = 0; i < n; i++) {
			for (auto j = 0; j < n; j++) {
				if (i > j) {
					sum += matrix[i][j];
				}
			}
		}
		cout << sum;
	}
	return 0;
}
