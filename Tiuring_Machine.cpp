#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

void tiuringo_masinos_logika(string busena[], char esamas_simbolis[], char naujas_simbolis[], char kryptis[], string eiti_i_busena[], string duomenu_eilute, int galvutes_pozicija, int eiluciu_skaicius) {
	int n = duomenu_eilute.length();
	string sekanti_busena = "0";
	string zymeklis = " ";
	for (auto j = 0; j < n - 1; j++) {
		zymeklis.append(" ");
	}
	cout << n;
	cout << zymeklis << endl;
	zymeklis[galvutes_pozicija] = '^';
	while (sekanti_busena != "X") {
		for (auto i = 0; i < eiluciu_skaicius; i++) {
			if (sekanti_busena == busena[i]) {
				if (esamas_simbolis[i] == duomenu_eilute[galvutes_pozicija]) {
					duomenu_eilute[galvutes_pozicija] = naujas_simbolis[i];
					sekanti_busena = eiti_i_busena[i];
					if (sekanti_busena == "X") {
						break;
					}
					if (kryptis[i] == 'R') {
						zymeklis[galvutes_pozicija] = ' ';
						galvutes_pozicija++;
						zymeklis[galvutes_pozicija] = '^';
					}
					else {
						zymeklis[galvutes_pozicija] = ' ';
						galvutes_pozicija--;
						zymeklis[galvutes_pozicija] = '^';
					}
				}
			}
		}
		system("cls");
		cout << duomenu_eilute << endl;
		cout << zymeklis << endl;
		sleep_for(milliseconds(60));
	}
}

int main() {
	string duomenu_eilute, busena[100], eiti_i_busena[100];
	ifstream duomenu_failas;
	int galvutes_pozicija, pasirinktas_failas = 0;
	int eiluciu_sk = 0;
	char kryptis[100], esamas_simbolis[100], naujas_simbolis[100];
	while (pasirinktas_failas > 4 || pasirinktas_failas < 1) {
		cout << "Prasome pasirinkti faila, kuris bus nuskaitytas (iveskite atitinkama skaiciu salia nurodyto failo pavadinimo): " << endl;
		cout << "1) 1.txt\n2) 2.txt\n3) 3.txt\n4) 4.txt" << endl;
		cin >> pasirinktas_failas;
		switch (pasirinktas_failas) {
		case 1: { duomenu_failas.open("1.txt"); break; }
		case 2: { duomenu_failas.open("2.txt"); break; }
		case 3: { duomenu_failas.open("3.txt"); break; }
		case 4: { duomenu_failas.open("4.txt"); break; }
		default: { cout << "Pasirinkimas neegzistuoja, meginkite is naujo."; sleep_for(seconds(2)); system("cls"); break; }
		}
	}
	cout << "Pasirinkote faila " << pasirinktas_failas << ".txt!" << endl;
	duomenu_failas >> galvutes_pozicija;
	duomenu_failas >> duomenu_eilute;
	while (!duomenu_failas.eof()) {
		duomenu_failas >> busena[eiluciu_sk] >> esamas_simbolis[eiluciu_sk] >> naujas_simbolis[eiluciu_sk] >> kryptis[eiluciu_sk] >> eiti_i_busena[eiluciu_sk];
		eiluciu_sk++;
	}
	duomenu_failas.close();
	eiluciu_sk--;
	cout << "Duomenys nuskaityti sekmingai!" << endl;
	sleep_for(seconds(2));
	system("cls");
	cout << duomenu_eilute << endl;
				/* <esama busena> <esamas simbolis> <naujas simbolis> <kryptis> <nauja busena> */
	tiuringo_masinos_logika(busena, esamas_simbolis, naujas_simbolis, kryptis, eiti_i_busena, duomenu_eilute, galvutes_pozicija, eiluciu_sk);
	return 0;
}
