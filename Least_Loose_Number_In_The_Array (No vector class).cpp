#include <iostream>

using namespace std;

int main()
{
	long long n, seka[101], MIN_TEIG = 0, count, m = 0;
	long long izulus_teig_sk[101];
	bool RASTAS = false;
	cin >> n;
	for (auto x = 0; x < n; x++) {
		cin >> seka[x];
	}
	for (auto i = 0; i < n; i++) {
		if (i == 0) {
			if (seka[i] > seka[i + 1]) {
				izulus_teig_sk[i] = seka[i];
				count++;
			}
			else izulus_teig_sk[i] = 0;
		}
		else if (i > 0 && i < n - 1) {
			if (seka[i] > seka[i - 1] && seka[i] > seka[i + 1]) {
				izulus_teig_sk[i] = seka[i];
				count++;
			}
			else izulus_teig_sk[i] = 0;
		}
		else if (i == n - 1) {
			if (seka[i] > seka[i - 1]) {
				izulus_teig_sk[i] = seka[i];
				count++;
			}
			else izulus_teig_sk[i] = 0;
		}
	}
	if (count == 0 || n <= 1) {
		cout << "NO";
		exit(0);
	}
	else {
		for (auto i = 0; i < n; i++) {	
			if (izulus_teig_sk[i] != 0 && izulus_teig_sk[i] > 0) {
				m++;
					if (izulus_teig_sk[i] < MIN_TEIG) {
						MIN_TEIG = izulus_teig_sk[i];
					}
					if (m == 1) {
						MIN_TEIG = izulus_teig_sk[i];
					}
				}
			}
		}
		if (MIN_TEIG != 0) {
			cout << MIN_TEIG;
		}
		else {
			cout << "NO";
			}
	return 0;
}
