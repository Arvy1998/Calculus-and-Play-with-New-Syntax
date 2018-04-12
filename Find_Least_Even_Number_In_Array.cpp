#include <iostream>

using namespace std;

int main()
{
	long long n, MIN, temp;
	bool RASTAS = false;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		cin >> temp;
		if (temp % 2 == 0) {
			if (RASTAS == true) {
				if (temp < MIN) {
					MIN = temp;
				}
			}
			else {
				MIN = temp;
				RASTAS = true;
			}
		}
	}
	if (RASTAS == true) {
		cout << MIN;
	}
	if (RASTAS == false) {
		cout << "No";
	}
	return 0;
}
