#include <iostream>
#include <vector>

using namespace std;

int main()
{
	unsigned long long n, lyg = 0, nelyg = 0, temp;
	vector <unsigned long long> seka;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		cin >> temp;
		seka.push_back(temp);
	}
	for (auto j = 0; j < n; j++) {
		if (seka[j] % 2 == 0 && seka[j] != 0) {
			lyg++;
			if (lyg == 2) {
				cout << "NELYGINIS";
				break;
			}
		}
		else if (seka[j] % 2 != 0 && seka[j] != 0) {
			nelyg++;
			if (nelyg == 2) {
				cout << "LYGINIS";
				break;
			}
		}
	}
    return 0;
}
