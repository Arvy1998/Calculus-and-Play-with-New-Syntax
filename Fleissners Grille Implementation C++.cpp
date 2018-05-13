#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void reverse(char matrix_rotated[][100], int N) {
	for (auto i = 0; i < N; i++) {
		for (auto j = 0; j < N / 2; j++) {
			int temp = matrix_rotated[i][N - j - 1];
			matrix_rotated[i][N - j - 1] = matrix_rotated[i][j];
			matrix_rotated[i][j] = temp;
		}
	}
}

void transpose(char matrix_rotated[][100], int N) {
	for (auto i = 0; i < N; i++) {
		for (auto j = i + 1; j < N; j++) {
			int temp = matrix_rotated[i][j];
			matrix_rotated[i][j] = matrix_rotated[j][i];
			matrix_rotated[j][i] = temp;
		}
	}
}

void rotate(char matrix_rotated[][100], int N) {
	transpose(matrix_rotated, N);
	reverse(matrix_rotated, N);
}

int main()
{
	int N, count = 0, vienetukai = 0, GROT = 0;
	string dekoduoti;
	string uzkoduoti;
	char matrix[100][100];
	char matrix2[100][100];
	char matrix_rotated[100][100];
	char dekoduoti_[10000];
	char uzkoduoti_[10000];
	char new_zinute[10000] = { '#' };
	cin >> N;
	for (auto i = 0; i < N; i++) {
		for (auto j = 0; j < N; j++) {
			cin >> matrix_rotated[i][j];
			matrix[i][j] = '#';
			matrix2[i][j] = '#';
		}
	}
	cin >> dekoduoti;
	cin >> uzkoduoti;
	int n1 = dekoduoti.length();
	int n2 = uzkoduoti.length();
	strcpy_s(dekoduoti_, dekoduoti.c_str());
	strcpy_s(uzkoduoti_, uzkoduoti.c_str());
	for (auto M = 0; M < 4; M++) {
		for (auto x = 0; x < N; x++) {
			for (auto y = 0; y < N; y++) {
				if (matrix_rotated[x][y] == '1') {
					if (uzkoduoti_[count] != '\0' && uzkoduoti_[count] != NULL) {
						matrix[x][y] = uzkoduoti_[count];
						count++;
					}
				}
			}
		}
		rotate(matrix_rotated, N);
	}
	count = 0;
	for (auto x = 0; x < N; x++) {
		for (auto y = 0; y < N; y++) {
			if (dekoduoti_[count] != '\0' && dekoduoti_[count] != NULL) {
				matrix2[x][y] = dekoduoti_[count];
				count++;
			}
		}
	}
	count = 0;
	for (auto M = 0; M < 4; M++) {
		for (auto x = 0; x < N; x++) {
			for (auto y = 0; y < N; y++) {
				if (matrix_rotated[x][y] == '1') {
					new_zinute[count] = matrix2[x][y];
					count++;
				}
			}
		}
		rotate(matrix_rotated, N);
	}
	new_zinute[count + 1] = '#';
	new_zinute[count + 2] = '#';
	string str(new_zinute);
	str.erase(str.find_last_not_of('#') + 1, string::npos);
	cout << str;
	cout << endl;
	for (auto x = 0; x < N; x++) {
		for (auto y = 0; y < N; y++) {
			cout << matrix[x][y];
		}
	}
    return 0;
}

/*

3
1 1 0
0 0 0
0 0 0

AR#S#Y#DA
ARVYDAS#

--------------------------------------

8
0 1 0 0 1 0 0 0
0 0 1 0 0 0 1 0
0 1 0 0 1 0 0 0
0 0 0 1 0 1 0 1
0 0 0 0 0 0 1 0
1 0 1 0 0 0 0 0
0 0 0 0 1 0 0 1
1 0 1 0 0 0 0 0

MZI#V_#SU#IN#SRKEB_#LEAS#T#INS#_AT_#L_TKU#RIU#Z##D#PEASJOT_#O###
ZVIRBLIS_TUREJO_MISKE_ANT_KUPSTO_SUNESTA_LIZDA

---------------------------------------

4
1 1 0 0
1 1 0 0
0 0 0 0
0 0 0 0

ABCDEFGHIJKLMNOP
ABCDEFGHIJKLMNOP

*/
