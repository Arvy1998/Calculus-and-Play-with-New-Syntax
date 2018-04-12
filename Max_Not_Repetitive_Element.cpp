#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long n, seka[10], MAX, count = 0, kiek = 0;
	bool RASTAS = false;
	vector <long long> kiek_krt_sk_lygus;
	cin >> n;
	for (auto k = 0; k < n; k++) {
		cin >> seka[k];
	}
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < n; j++) {
			if (seka[i] == seka[j]) {
				count++;
			}
		}
		kiek_krt_sk_lygus.push_back(count);
		count = 0;
	}
	for (auto w = 0; w < n; w++) {
		if (kiek_krt_sk_lygus[w] == 1) {
			if (RASTAS == true) {
				if (seka[w] > MAX) {
					MAX = seka[w];
				}
			}
			else {
				RASTAS = true;
				MAX = seka[w];
			}
		}
		else kiek++;
	}
	if (RASTAS == true) {
		cout << MAX;
	}
	if (RASTAS == false || kiek == n) {
		cout << "NO";
	}
	return 0;
}
