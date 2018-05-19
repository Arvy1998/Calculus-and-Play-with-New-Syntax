#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long n, temp, temp1, temp2;
	cin >> n;
	n = 2 * n - 1;
	temp = n / 2;
	temp1 = temp;
	temp2 = temp;
	for (auto g = 0; g < temp; g++) {
		for (auto gg = 0; gg < n; gg++) {
			if (gg >= temp1 && gg <= temp2) {
				cout << "*";
			}
			else cout << ".";
		}
		temp1--;
		temp2++;
		cout << endl;
	}
	for (auto gg = 0; gg < n; gg++) {
		cout << "*";
	}
	temp1++;
	temp2--;
	cout << endl;
	for (auto g = 0; g < temp; g++) {
		for (auto gg = 0; gg < n; gg++) {
			if (gg >= temp1 && gg <= temp2) {
				cout << "*";
			}
			else cout << ".";
		}
		temp1++;
		temp2--;
		cout << endl;
	}
	return 0;
}
