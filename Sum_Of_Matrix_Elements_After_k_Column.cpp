#include <iostream>

using namespace std;

int main()
{
	long double n, m, k, matrix[10][10], sum = 0;
	bool EGZISTUOJA = false;
	cin >> n >> m >> k;
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < m; j++) {
			cin >> matrix[i][j];
			if (j + 1 > k) {
				sum += matrix[i][j];
				EGZISTUOJA = true;
			}
		}
	}
	if (EGZISTUOJA == true) {
		cout << sum;
	}
	if (EGZISTUOJA == false) {
		cout << "NO";
	}
	return 0; 
}
