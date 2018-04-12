#include <iostream>
#include <string>

using namespace std;

int main()
{
	string diamond[101][101];
	long long n, inc = 1;
	cin >> n;
	long long temp;
	temp = n / 2;
	for (auto i = 0; i < n; i++) {
		diamond[0][i] = "-";
	}
	diamond[0][temp] = "O";
	for (auto j = 1; j < temp + 1; j++) {
		for (auto J = 0; J < n; J++) {
			diamond[j][J] = "-";
			diamond[j][temp - inc] = "O";
			diamond[j][temp + inc] = "O";
		}
		inc++;
	}
	inc--;
	for (auto a = temp; a < n; a++) {
		for (auto b = 0; b < n; b++) {
			diamond[a][b] = "-";
			diamond[a][temp - inc] = "O";
			diamond[a][temp + inc] = "O";
		}
		inc--;
	}
	for (auto I = 0; I < n; I++) {
		diamond[0][I] = "-";
	}
	diamond[0][temp] = "O";
	for (auto N = 0; N < n; N++) {
		for (auto M = 0; M < n; M++) {
			cout << diamond[N][M];
		}
		cout << endl;
	}
    return 0;
}
