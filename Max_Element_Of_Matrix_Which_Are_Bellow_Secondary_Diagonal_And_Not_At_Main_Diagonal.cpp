#include <iostream>

using namespace std;

int main()
{
	long long matrix[10][10];
	long long n, MAX;
	bool RASTAS = false;
	cin >> n;
	if (n <= 2 || n >= 11) {
		cout << "Ne";
	}
	else {
		for (auto i = 0; i < n; i++) {
			for (auto j = 0; j < n; j++) {
				cin >> matrix[i][j];
			}
		}
		for (auto a = 0; a < n; a++) {
			for (auto b = 0; b < n; b++) {
				if (a != b && b >= n - a) {
					if (RASTAS == true) {
						if (matrix[a][b] > MAX) {
							MAX = matrix[a][b];
						}
					}
					else {
						RASTAS = true;
						MAX = matrix[a][b];
					}
				}
			}
		}
		cout << MAX;
	}
	return 0;
}
