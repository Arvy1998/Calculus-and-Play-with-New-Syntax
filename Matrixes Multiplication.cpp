#include <iostream>

using namespace std;

void matrix_substract(long long matrix1[][100], long long matrix2[][100], long long n1, long long m1, long long n2, long long m2) {
	long long matrix3[100][100];
	for (auto a = 0; a < n1; ++a) {
		for (auto b = 0; b < m2; ++b) {
			matrix3[a][b] = 0;
		}
	}
	for (auto i = 0; i < n1; ++i) {
		for (auto j = 0; j < m2; ++j) {
			for (auto k = 0; k < m1; ++k) {
				matrix3[i][j] = matrix3[i][j] + (matrix1[i][k] * matrix2[k][j]);
			}
		}
	}
	for (auto w = 0; w < n1; w++) {
		for (auto q = 0; q < m2; q++) {
			cout << matrix3[w][q] << " ";
		}
		cout << endl;
	}
}

int main() {
	long long n1, m1, n2, m2;
	long long matrix1[100][100];
	long long matrix2[100][100];
	cout << "Enter first matrix rows number: ";
	cin >> n1;
	cout << "Enter first matrix columns number: ";
	cin >> m1;
	cout << "Enter second matrix rows number: ";
	cin >> n2;
	cout << "Enter second matrix columns number: ";
	cin >> m2;
	if (m1 != n2) {
		cout << "You cant do multiplication, because column of first matrix not equal to row of second..." << endl;
		exit(0);
	}
	else {
		cout << "Please enter all elements of first matrix: " << endl;
		for (auto i = 0; i < n1; i++) {
			for (auto j = 0; j < m1; j++) {
				cin >> matrix1[i][j];
			}
		}
		cout << "Please enter all elements of second matrix: " << endl;
		for (auto k = 0; k < n2; k++) {
			for (auto l = 0; l < m2; l++) {
				cin >> matrix2[k][l];
			}
		}
		cout << "Your answer is: " << endl;
		matrix_substract(matrix1, matrix2, n1, m1, n2, m2);
	}
	cin.get();
	return 0;
}

/*
Program doing matrix multiplication.
If you want to use this program, you must
first enter firsts matrix size (two numbers)
n and m, then enter this matrix elements.
After that you must repeat these steps with
second matrix. Your second matrixs rows
size cant be different than firsts matrix
columns size because you wont be
able to do operation between matrixes.
Have fun! :)

Maximum size of matrix is 100.
Maximum size of value is long long type.
*/
