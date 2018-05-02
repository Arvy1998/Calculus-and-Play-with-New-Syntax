#include <iostream>
#include <fstream>

using namespace std;

ofstream rezultatai;

void reverse(int matrix[][100], int n) {
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < n / 2; j++) {
			int temp = matrix[i][n - j - 1];
			matrix[i][n - j - 1] = matrix[i][j];
			matrix[i][j] = temp;
		}
	}
}

void transpose(int matrix[][100], int n) {
	for (auto i = 0; i < n; i++) {
		for (auto j = i + 1; j < n; j++) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}

int main()
{
	int matrix[100][100], n, k;
	ifstream failas;
	failas.open("15.txt", ios::in);
	failas >> n;
	failas >> k;
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < n; j++) {
			failas >> matrix[i][j];
		}
	}
	failas.close();
	if (k % 4 == 0) {
		for (auto x = 0; x < 4; x++) {
			transpose(matrix, n);
			reverse(matrix, n);
		}
	}
	else if (k % 3 == 0) {
		for (auto x = 0; x < 3; x++) {
			transpose(matrix, n);
			reverse(matrix, n);
		}
	}
	else if (k % 2 == 0) {
		for (auto x = 0; x < 2; x++) {
			transpose(matrix, n);
			reverse(matrix, n);
		}
	}
	else {
		transpose(matrix, n);
		reverse(matrix, n);
	}
	rezultatai.open("15", ios::out);
	for (auto l = 0; l < n; l++) {
		for (auto r = 0; r < n; r++) {
			rezultatai << matrix[l][r] << " ";
		}
		rezultatai << endl;
	}
	rezultatai.close();
}
