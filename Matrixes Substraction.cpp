#include <iostream>

using namespace std;

void matrix_substract(long long matrix1[][100], long long matrix2[][100], long long n, long long m) {
	long long matrix3[100][100];
	for (auto g = 0; g < n; g++) {
		for (auto h = 0; h < m; h++) {
			matrix3[g][h] = matrix1[g][h] - matrix2[g][h];
		}
	}
	for (auto w = 0; w < n; w++) {
		for (auto q = 0; q < m; q++) {
			cout << matrix3[w][q] << " ";
		}
		cout << endl;
	}
}

int main() {
	long long n, m;
	long long matrix1[100][100];
	long long matrix2[100][100];
	cout << "Enter matrixes rows number: ";
	cin >> n;
	cout << "Enter matrixes collumns number: ";
	cin >> m;
	cout << "Please enter all elements of first matrix: " << endl;
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < m; j++) {
			cin >> matrix1[i][j];
		}
	}
	cout << "Please enter all elements of second matrix: " << endl;
	for (auto k = 0; k < n; k++) {
		for (auto l = 0; l < m; l++) {
			cin >> matrix2[k][l];
		}
	}
	cout << "Your answer is: " << endl;
	matrix_substract(matrix1, matrix2, n, m);
	cin.get();
	return 0;
}

/*
Program doing matrix substraction.
If you want to use this program, you must
first enter firsts matrix size (two numbers)
n and m, then enter this matrix elements.
After that you must repeat these steps with
second matrixs elements. Your second matrixs
size cant be different because you wont be
able to do operation between matrixes.
Have fun! :)

Maximum size of matrix is 1000.
Maximum size of value is long long type.
*/
