#include <iostream>

using namespace std;

int main()
{
	long double n, koeficientai[101][3], D;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < 3; j++) {
			cin >> koeficientai[i][j];
		}
	}
	for (auto x = 0; x < n; x++) {
		D = koeficientai[x][1] * koeficientai[x][1] - 4 * koeficientai[x][0] * koeficientai[x][2];
		if (D > 0) {
			if (koeficientai[x][0] == 0) {
				if (koeficientai[x][2] == 0) {
					cout << "1" << endl;
				}
				else {
					cout << "1" << endl;
				}
			}
			else if (koeficientai[x][2] == 0) {
				if ((koeficientai[x][0] > 0 && koeficientai[x][1] > 0) || (koeficientai[x][0] < 0 && koeficientai[x][1] < 0)) {
					cout << "2" << endl;
				}
				else if ((koeficientai[x][0] > 0 && koeficientai[x][1] < 0) || (koeficientai[x][0] < 0 && koeficientai[x][1] > 0)) {
					cout << "2" << endl;
				}
				else {
					cout << "2" << endl;
				}
			}
			else {
				cout << "2" << endl;
			}
		}
		else if (D == 0) {
			if (koeficientai[x][0] == 0 && koeficientai[x][1] == 0 && koeficientai[x][2] == 0) {
				cout << "-1" << endl;
			}
			else if (koeficientai[x][0] == 0 && koeficientai[x][1] == 0) {
				cout << "0" << endl;
			}
			else cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
    return 0;
}
