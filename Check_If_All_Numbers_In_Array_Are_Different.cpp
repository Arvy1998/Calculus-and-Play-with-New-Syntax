#include <iostream>

using namespace std;

int main()
{
	long long n, seka[10], j = 1;
	bool LYGUS = false;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		cin >> seka[i];
	}
	for (auto z = 0; z < n; z++) {
		for (auto j = z + 1; j < n; j++) {
			if (seka[z] == seka[j]) {
				LYGUS = true;
				break;
			}
		}
		if (seka[z] == seka[j]) {
			break;
		}
		j = z + 1;
	}
	if (LYGUS == true) {
		cout << "NE";
	}
	else if (LYGUS == false) {
		cout << "TAIP";
	}
	return 0;
}
