using namespace std;

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	long double n;
	cin >> n;

	long double result = pow(2, n);
	string resString = to_string(result);
	resString.erase(resString.find_last_not_of('0') + 1, string::npos);
	resString.erase(resString.find_last_not_of('.') + 1, string::npos);

	if (resString.length() > 3) {
		cout << resString.substr(resString.length() - 3);
	}
	else {
		cout << resString;
	}
}
