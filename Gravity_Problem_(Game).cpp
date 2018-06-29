#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

int main() {
	int n, a, mas1[100], b, mas2[100], count = 0;
	cin >> n;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> mas1[i];
	}
	cin >> b;
	for (int j = 0; j < b; j++) {
		cin >> mas2[j];
	}
	for (int m = 1; m < n; m++) {
		for (int x = 1; x < n; x++) {
			if (m == mas1[x] || m == mas2[x]) {
				count++;
			}
		}
	}
	if (count == n) {
		cout << "I am the guy!";
	}
	else {
		cout << "Sad day...";
	}
	return 0;
}
