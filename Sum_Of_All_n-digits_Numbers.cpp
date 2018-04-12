#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string S = "49455";
	cin >> n;
	if (n > 2) {
		S.insert(3, n - 3, '9');
		S.insert(S.length(), n - 2, '0');
	}
	else if (n == 2) {
		S = "4905";
	}
	else if (n == 1) {
		S = "45";
	}
	else S = "0";
	cout << S;
    return 0;
}
