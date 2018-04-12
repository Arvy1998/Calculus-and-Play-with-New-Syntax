#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	long double a, b, c, d;
	long long count = 0;
	cin >> a >> b >> c >> d;
	vector<int> ats;
	for (long double x = -1000; x <= 1000; x++) {
		if (a * pow(x, 3) + b * pow(x, 2) + c * x + d == 0) {
			ats.push_back(x);
		}
	}
	if (ats.size() == 1) {
		cout << ats[0];
	}
	if (ats.size() == 2) {
		cout << ats[0] << "_" << ats[1];
	}
	if (ats.size() == 3) {
		cout << ats[0] << "_" << ats[1] << "_" << ats[2];
	}
    return 0;
}
