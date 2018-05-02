#include <iostream>
#include <fstream>

using namespace std;

long long Dvigubas_Faktorialas(int a) {
	if (a == 1 || a == 0) {
		return 1;
	}
	else {
		return a * Dvigubas_Faktorialas(a - 2);
	}
}

int main() {
	int a;
	ifstream failas;
	failas.open("13.txt");
	failas >> a;
	failas.close();
	ofstream rezultatai;
	rezultatai.open("13.out", ios::binary | ios::out);
	rezultatai << Dvigubas_Faktorialas(a);
	rezultatai.close();
	return 0;
}
