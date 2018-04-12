#include <iostream>

using namespace std;

int main()
{
	long long matrix[10][10], n;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	for (auto M = 0; M < n; M++) {
		for (auto N = 0; N < n; N++) {
			if (n - 1 > N) {
				cout << matrix[(n - 1) - N][M] << " ";
			}
			else { 
				cout << matrix[(n - 1) - N][M];
			}
		}
		cout << endl;
	}
    return 0;
}
