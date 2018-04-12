#include <iostream>

using namespace std;

void Keisti(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b;
	cin >> a >> b;
	Keisti(a, b);
	cout << a << " " << b;
	return 0;
}
