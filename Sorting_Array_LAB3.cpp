#include <iostream>
#include <cstdio>

using namespace std;

int NuskaitytiSeka(int masyvas[], int &kiekis) {
	cin >> kiekis;
	for (auto i = 0; i < kiekis; i++) {
		cin >> masyvas[i];
	}
	return *masyvas;
}

void SurikiuotiElementus(int masyvas[], int &kiekis) {
	int i, j, temp;
	for (i = 1; i < kiekis; i++) {
		j = i;
		while (j > 0 && masyvas[j - 1] < masyvas[j]) {
			temp = masyvas[j];
			masyvas[j] = masyvas[j - 1];
			masyvas[j - 1] = temp;
			j--;
		}
	}
}

void SpausdintiRezultatus(int masyvas[], int kiekis) {
	for (auto j = 0; j < kiekis; j++) {
		cout << masyvas[j] << " ";
	}
}

int main() {
	ios::sync_with_stdio(0);
	int masyvas[10000];
	int kiekis;
	NuskaitytiSeka(masyvas, kiekis);
	SurikiuotiElementus(masyvas, kiekis);
	SpausdintiRezultatus(masyvas, kiekis);
	return 0;
}
