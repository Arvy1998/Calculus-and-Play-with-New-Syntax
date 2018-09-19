#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <vector>
#include <climits>
#include <mutex>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

struct TURING_MACHINE {
	string duomenu_eilute, busena[100], eiti_i_busena[100];
	string zymeklis = " ";
	int galvutes_pozicija;
	int eiluciu_skaicius = 0;
	char kryptis[100], esamas_simbolis[100], naujas_simbolis[100];
	vector <string> duomenu_eilute_rezultatine;
	vector <string> zymeklis_rezultatinis;
	std::mutex mtx[5];
} Tiuringas[5];

void tiuringo_masinos_logika(TURING_MACHINE Tiuringas[], int x) {
	Tiuringas[x].mtx[x].try_lock();
	int n = Tiuringas[x].duomenu_eilute.length();
	string sekanti_busena = "0";
	for (auto j = 0; j < n - 1; j++) {
		Tiuringas[x].zymeklis.append(" ");
	}
	while (sekanti_busena != "X") {
		for (auto i = 0; i < Tiuringas[x].eiluciu_skaicius; i++) {
			if (sekanti_busena == Tiuringas[x].busena[i]) {
				if (Tiuringas[x].esamas_simbolis[i] == Tiuringas[x].duomenu_eilute[Tiuringas[x].galvutes_pozicija]) {
					Tiuringas[x].duomenu_eilute[Tiuringas[x].galvutes_pozicija] = Tiuringas[x].naujas_simbolis[i];
					sekanti_busena = Tiuringas[x].eiti_i_busena[i];
					if (sekanti_busena == "X") {
						
					}
					if (Tiuringas[x].kryptis[i] == 'R') {
						Tiuringas[x].zymeklis[Tiuringas[x].galvutes_pozicija] = ' ';
						Tiuringas[x].galvutes_pozicija++;
						Tiuringas[x].zymeklis[Tiuringas[x].galvutes_pozicija] = '^';
					}
					else {
						Tiuringas[x].zymeklis[Tiuringas[x].galvutes_pozicija] = ' ';
						Tiuringas[x].galvutes_pozicija--;
						Tiuringas[x].zymeklis[Tiuringas[x].galvutes_pozicija] = '^';
					}
				}
			}
		}
		Tiuringas[x].duomenu_eilute_rezultatine.push_back(Tiuringas[x].duomenu_eilute);
		Tiuringas[x].zymeklis_rezultatinis.push_back(Tiuringas[x].zymeklis);
	}
	Tiuringas[x].mtx[x].unlock();
}

void paraller_print() {
	//mutex mtxS;
	//mtxS.try_lock();
	for (unsigned long long i = 0; ; i++) {
		cout << Tiuringas[0].duomenu_eilute_rezultatine[i] << endl;
		cout << Tiuringas[0].zymeklis_rezultatinis[i] << endl << endl;
		cout << Tiuringas[1].duomenu_eilute_rezultatine[i] << endl;
		cout << Tiuringas[1].zymeklis_rezultatinis[i] << endl << endl;
		cout << Tiuringas[2].duomenu_eilute_rezultatine[i] << endl;
		cout << Tiuringas[2].zymeklis_rezultatinis[i] << endl << endl;
		cout << Tiuringas[3].duomenu_eilute_rezultatine[i] << endl;
		cout << Tiuringas[3].zymeklis_rezultatinis[i] << endl << endl;
		sleep_for(milliseconds(60));
		system("cls");
	}
	//mtxS.unlock();
}

int main() {
	ifstream duomenu_failas;
	for (auto x = 0; x < 4; x++) {
		duomenu_failas.open(to_string(x + 1) + ".txt");
		duomenu_failas >> Tiuringas[x].galvutes_pozicija;
		duomenu_failas >> Tiuringas[x].duomenu_eilute;
		while (!duomenu_failas.eof()) {
			duomenu_failas >> Tiuringas[x].busena[Tiuringas[x].eiluciu_skaicius]
				>> Tiuringas[x].esamas_simbolis[Tiuringas[x].eiluciu_skaicius]
				>> Tiuringas[x].naujas_simbolis[Tiuringas[x].eiluciu_skaicius]
				>> Tiuringas[x].kryptis[Tiuringas[x].eiluciu_skaicius]
				>> Tiuringas[x].eiti_i_busena[Tiuringas[x].eiluciu_skaicius];
			Tiuringas[x].eiluciu_skaicius++;
		}
		duomenu_failas.close();
		Tiuringas[x].eiluciu_skaicius--;
	}
	thread paraller1 = thread{ tiuringo_masinos_logika, Tiuringas, 0 };
	thread paraller2 = thread{ tiuringo_masinos_logika, Tiuringas, 1 };
	thread paraller3 = thread{ tiuringo_masinos_logika, Tiuringas, 2 };
	thread paraller4 = thread{ tiuringo_masinos_logika, Tiuringas, 3 };
	sleep_for(milliseconds(60));
	thread parallerP = thread{ paraller_print };
	return 0;
}
