#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long double n, m, matrix[10][10], MAX;
	bool RASTAS = false;
	cin >> n >> m;
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < m; j++) {
			cin >> matrix[i][j];
			if (i == 1) {
				if (RASTAS == true) {
				if (matrix[1][j] > MAX) {
						MAX = matrix[1][j];
					}
				}
				else {
					MAX = matrix[1][0];
					RASTAS = true;
				}
			}
		}
	}
	if (RASTAS == true) {
		cout << MAX;
	}
	if (RASTAS == false) {
		cout << "No";
	}
	return 0; 
}
