#include <iostream>
#include <string>

using namespace std;

int main()
{
	string lygtis;
	char a, b, c;
	long double A, B, C, REZ;
	string temp;
	cin >> lygtis;
	a = lygtis[0];
	b = lygtis[2];
	c = lygtis[4];
	if (a == 'x' && b != 'x' && c != 'x') {
		B = b - '0';
		C = c - '0';
		if (lygtis[1] == '+') {
			REZ = C - B;
		}
		else if (lygtis[1] == '-') {
			REZ = C + B;
		}
	}
	if (b == 'x' && a != 'x' && c != 'x') {
		A = a - '0';
		C = c - '0';
		if (lygtis[1] == '+') {
			REZ = C - A;
		}
		else if (lygtis[1] == '-') {
			REZ = -C + A;
		}
	}
	if (c == 'x' && a != 'x' && b != 'x') {
		A = a - '0';
		B = b - '0';
		if (lygtis[1] == '+') {
			REZ = A + B;
		}
		else if (lygtis[1] == '-') {
			REZ = A - B;
		}
	}
	cout << REZ;
    return 0;
}
