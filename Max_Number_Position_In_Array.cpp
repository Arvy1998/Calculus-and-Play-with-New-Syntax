#include <iostream>

using namespace std;

int main()
{
	long long n, MAX, temp, adresas;
	bool RASTAS = false;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		cin >> temp;
		if (temp < 0) {
			if (RASTAS == true) {
				if (temp > MAX) {
					MAX = temp;
					adresas = i + 1;
				}
			}
			else {
				MAX = temp;
				RASTAS = true;
				adresas = i + 1;
			}
		}
	}
	if (RASTAS == true) {
		cout << adresas;
	}
	if (RASTAS == false) {
		cout << "NERA";
	}
	return 0;
}
