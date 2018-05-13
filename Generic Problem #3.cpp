#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long double a, count = 0;
	cin >> a;
	long double x = (1 + (a / 1)) / 2;
	while (count != 100) {
		count++;
		x = (x + (a / x)) / 2;
	}
	cout << fixed << setprecision(6) << x;
    return 0;
}

/*
Panaudodami žemiau aprašytą algoritmą, ištraukite šaknį 
iš skaičiaus n nenaudodami sqrt komandos. 
Algoritmas Ištraukime šaknį iš skaičiaus 10. 
Pirmiausia pasirenkame bet kokį pradinį artinį,
tarkime a=1. Skaičiuojame sekančius artinius pagal atitinkamą formą:
a = (a + (n / a)) / 2.
*/
