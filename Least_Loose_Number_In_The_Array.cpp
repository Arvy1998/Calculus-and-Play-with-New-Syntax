#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	long long n, seka[101], MIN_TEIG = 0, count;
	vector <long long> izulus_teig_sk;
	cin >> n;
	for (auto x = 0; x < n; x++) {
		cin >> seka[x];
	}
	for (auto i = 0; i < n; i++) {
		if (i == 0) {
			if (seka[i] > seka[i + 1]) {
				izulus_teig_sk.push_back(seka[i]);
			}
		}
		if (i > 0 && i < n - 1) {
			if (seka[i] > seka[i - 1] && seka[i] > seka[i + 1]) {
				izulus_teig_sk.push_back(seka[i]);
			}
		}
		if (i == n - 1) {
			if (seka[i] > seka[i - 1]) {
				izulus_teig_sk.push_back(seka[i]);
			}
		}
	}
	if (izulus_teig_sk.size() == 0 || n <= 1) {
		cout << "NO";
		exit(0);
	}
	else {
		sort(izulus_teig_sk.begin(), izulus_teig_sk.end());
		for (size_t j = 0; j < izulus_teig_sk.size(); j++) {
			if (izulus_teig_sk[j] > 0) {
				MIN_TEIG = izulus_teig_sk[j];
				cout << MIN_TEIG;
				break;
			}
		}
	}
	if (MIN_TEIG == 0) {
		cout << "NO";
	}
    return 0;
}
