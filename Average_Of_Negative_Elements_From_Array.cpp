#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long double seka[10], n, sum = 0, count = 0;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		cin >> seka[i];
	}
	for (auto j = 0; j < n; j++) {
		if (seka[j] < 0) {
			sum += seka[j];
			count++;
		}
	}
	if (count == 0) {
		cout << "NO";
	}
	else
		cout << fixed << setprecision(2) << sum / count;
    return 0;
}
