#include <iostream>
#include <fstream>

using namespace std;

long double Fibonaci(long double n)
{
	if (n < 2) {
		return n;
	}
	else {
		return (Fibonaci(n - 1) + Fibonaci(n - 2));
	}
}

int main()
{
	long double n;
	ifstream input_failas;
	input_failas.open("11.in", ios::in|ios::binary);
	input_failas >> n;
	input_failas.close();
	ofstream rezultatai;
	rezultatai.open("11.out", ios::out|ios::binary);
	rezultatai << Fibonaci(n);
	rezultatai.close();
	return 0;
}
