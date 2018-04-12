#include <iostream>

using namespace std;

void DecToBin(int a) {
	int bin_skaicius[100];
	int temp;
	int i = 0;
	if (a == 0 || a == 1) {
		cout << a;
	}
	else {
		while (a != 0) {
			temp = a % 2;
			bin_skaicius[i++] = temp;
			a = a / 2;
		}
		for (auto j = i - 1; j >= 0; j--) {
			cout << bin_skaicius[j];
		}
	}
}

int main()
{
	int a;
	cin >> a;
	DecToBin(a);
}
