#include <iostream>

using namespace std;

int main()
{
	long double n, k, matrix[10], count = 0;
	bool EGZISTUOJA = false;
	cin >> n;
	for (auto i = 0; i < n; i++) {
		cin >> matrix[i];
	}
	if (n <= 2) {
		cout << "NE";
		exit(0);
	}
	if (n == 3) {
		int a = 0;
		if (matrix[a] == matrix[a + 1] - 1 && matrix[a + 1] == matrix[a + 2] - 1) {
			count++;
		}
		if (count >= 1) {
			EGZISTUOJA = true;
			exit(0);
		}
	}
	else {
		for (auto x = 0; x < n - 2; x++) {
			if (matrix[x] == matrix[x + 1] - 1 && matrix[x + 1] == matrix[x + 2] - 1) {
				count++;
			}
			if (count >= 1) {
				EGZISTUOJA = true;
				break;
			}
		}
	}
	if (EGZISTUOJA == true) {
		cout << "TAIP";
	}
	if (EGZISTUOJA == false) {
		cout << "NE";
	}
	return 0;
}
//----------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	int matrix[10][10];
	int MIN = 1000001;
	int k, N;
	bool RASTAS = false;
	cin >> N >> k;
	for (auto x = 0; x < N; x++) {
		for (auto y = 0; y < N; y++) {
			cin >> matrix[x][y];
		}
	}
	for (auto i = 0; i < N; i++) {
		for (auto j = 0; j < N; j++) {
			if (i + 1 == k) {
				if (RASTAS == true) {
					if (MIN >= matrix[i][j]) {
						MIN = matrix[i][j];
						RASTAS = true;
					}
					else {
						RASTAS = true;
						MIN = matrix[i][j];
					}
				}
			}
		}
	}
	cout << MIN;
    return 0;
}
//----------------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

bool IsPrime(int a) {
	if (a == 1 || a == 0) {
		return 0;
	}
	else if (a > 1) {
		for (auto i = 2; i <= sqrt(a); i = i++) { // i <= a / 2;...
												  //	if (a > 10) i = i + 6;
			if (a % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int main()
{
	long int N, M, k, matrix[10][10], max = -100001;
	long int masyvas[4];
	bool EGZISTUOJA = false;
	bool RASTAS = false;
	cin >> N >> M;
	for (auto a = 0; a < N; a++) {
		for (auto b = 0; b < M; b++) {
			cin >> matrix[a][b];
		}
	}
	masyvas[0] = matrix[0][0];
	masyvas[1] = matrix[0][M - 1];
	masyvas[2] = matrix[N - 1][0];
	masyvas[3] = matrix[N - 1][M - 1];
	for (auto x = 0; x < 4; x++) {
		if (IsPrime(masyvas[x]) == true) {
			if (RASTAS == true) {
				if (max < masyvas[x]) {
					max = masyvas[x];
					EGZISTUOJA = true;
				}
			}
			else {
				max = masyvas[x];
				EGZISTUOJA = true;
				RASTAS = true;
			}
		}
	}
	if (EGZISTUOJA == true) {
		cout << max;
	}
	else if (EGZISTUOJA == false) {
		cout << "NO";
	}
	return 0;
}
//----------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
	long double matrica[10][10];
	long double k, N;
	long double sum = 0, vid, count = 0;
	ifstream failas;
	failas.open("in.txt");
	failas >> N >> k;
	for (auto i = 0; i < N; i++) {
		for (auto j = 0; j < N; j++) {
			failas >> matrica[i][j];
		}
	}
	ofstream rezult;
	rezult.open("ou.txt");
	if (N <= 1) {
		rezult << "NO";
		exit(0);
	}
	for (auto n = 0; n < N; n++) {
		for (auto m = 0; m < N; m++) {
			if (m + 1 == k) {
				if (n < m) {
					sum = sum + matrica[n][m];
					count++;
				}
			}
		}
	}
	if (count != 0) {
		vid = sum / count;
		rezult << fixed << setprecision(2) << vid;
	}
	else if (count == 0) rezult << "NO";
	rezult.close();
	failas.close();
	return 0;
}
//----------------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
	int seka[10];
	int N;
	cin >> N;
	for (auto x = 0; x < N; x++) {
		cin >> seka[x];
	}
	for (auto x = 0; x < N; x++) {
		if (seka[x] != seka[N - 1 - x]) {
			cout << "NE";
			exit(0);
		}
	}
	cout << "TAIP";
}
//----------------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
	long double n, k, matrix[10][10], max = -100001;
	bool EGZISTUOJA = false;
	bool RASTAS = false;
	cin >> n >> k;
	for (auto a = 0; a < n; a++) {
		for (auto b = 0; b < n; b++) {
			cin >> matrix[a][b];
		}
	}
	if (k > n || k == n) {
		cout << "NO";
		exit(0);
	}
	for (auto i = 0; i < n; i++) {
		for (auto j = 0; j < n; j++) {
			if (j + 1 > k) {
				if (RASTAS == true) {
					if (max <= matrix[i][j]) {
						EGZISTUOJA = true;
						max = matrix[i][j];
					}
				}
				else {
					RASTAS = true;
					EGZISTUOJA = true;
					max = matrix[i][j];
				}
			}
		}
	}
	if (EGZISTUOJA == true) {
		cout << max;
	}
	else if (EGZISTUOJA == false) {
		cout << "NO";
	}
	return 0;
}
