#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long double n, m, matrix[10][10], sum = 0, MAX;
	bool RASTAS = false;
	long long eil_nr = 0;
	cin >> n >> m;
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < m; j++) {
			cin >> matrix[i][j];
			if (RASTAS == true) {
				if (matrix[i][j] > MAX) {
					MAX = matrix[i][j];
					eil_nr = i;
				}
			}
			else {
				RASTAS = true;
				MAX = matrix[i][j];
			}
		}
	}
	for (auto x = 0; x < m; x++) {
		sum += matrix[eil_nr][x];
	}
	if (sum != 0) {
			cout << fixed << setprecision(2) << sum / m;
		}
	else cout << "0.00";
	return 0; 
}
