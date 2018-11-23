#include "stdafx.h"
#include <iostream>
#include <bitset>
#include <string>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[])
{
	char *a = nullptr, *b = nullptr;
	int A, B, Q;
	a = argv[0];
	b = argv[1];
	A = atoi(a);
	B = atoi(b);
	Q = (A | B) & ~(A & B);
	cout << "(A | B) & ~(A & B) = " << bitset<32>(Q) << endl;
	Q = ~(A | ~(A | B)) | ~(B | ~(A | B));
	cout << "~(~(A | ~(A | B)) | ~(B | ~(A | B))) = " << bitset<32>(Q) << endl;
	Q = A ^ B;
	cout << "A ^ B = " << bitset<32>(Q);
    return 0;
}
