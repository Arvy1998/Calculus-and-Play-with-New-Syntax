#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
ofstream rezultatai;
int laipsnis = 1;

void Pasukimas(int eilute, int skaitmenu_kiekis) {
	int skaitmuo;
	skaitmuo = (eilute / laipsnis) % 10;
	rezultatai << skaitmuo << endl;
	skaitmenu_kiekis--;
	laipsnis = laipsnis * 10;
	if (skaitmenu_kiekis >= 0) {
		Pasukimas(eilute, skaitmenu_kiekis);
	}
}

int main() {
	int eilute;
	int skaitmenu_kiekis;
	ifstream failas;
	failas.open("input.txt");
	rezultatai.open("o.txt");
	failas >> eilute;
	skaitmenu_kiekis = floor(log10(eilute));
	Pasukimas(eilute, skaitmenu_kiekis);
	failas.close();
	return 0;
}
