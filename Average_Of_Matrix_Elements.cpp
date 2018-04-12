#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long double n, m, matrix[10][10], sum = 0, count = 0;
	cin >> n >> m;
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < m; j++) {
			cin >> matrix[i][j];
			sum += matrix[i][j];
			count++;
		}
	}
	cout << fixed << setprecision(2) << sum / count;
	return 0;
}
