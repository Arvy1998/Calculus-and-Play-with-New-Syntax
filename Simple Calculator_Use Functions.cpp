#include <iostream>

using namespace std;

int sum(int X, int Y, int result);
int sub(int X, int Y, int result);
float div(int X, int Y, float result);
int mult(int X, int Y, int result);

int main()
{
	int X, Y;
	char E;
	int result = 0;
	int Z;
	start_again:
	cout << "Enter first value:" << endl;
	cin >> X;
	cout << "Enter second value:" << endl;
	cin >> Y;
	cout << "Choose, what you wanna do:" << endl;
	cout << "1 - Sum;" << endl;
	cout << "2 - Substraction;" << endl;
	cout << "3 - Division;" << endl;
	cout << "4 - Multiplication." << endl;
	cin >> Z;
	if (Z == 1) {
		sum(X, Y, result);
		cout << "Your result is: " << sum(X, Y, result) << "." << endl;
	}
	else if (Z == 2) {
		sub(X, Y, result);
		cout << "Your result is: " << sub(X, Y, result) << "." << endl;
	}
	else if (Z == 3) {
		div(X, Y, result);
		cout << "Your result is: " << div(X, Y, result) << "." << endl;
	}
	else if (Z == 4) {
		mult(X, Y, result);
		cout << "Your result is: " << mult(X, Y, result) << "." << endl;
	}
	else if ((Z != 1) || (Z != 2) || (Z != 3) || (Z != 4)) {
		cout << "Error occuried while choosing next step! Try again by entering any symbol or exit by clicking 'N'!" << endl;
		cin >> E;
		if ((E == 'N') || (E == 'n')) {
			goto close_program;
		}
		else if ((E != 'N') || (E != 'n')) {
			goto start_again;
			}
	}
	cout << "Do you want to use this program again? (Y/N)" << endl;
	cin >> E;
	if (E == 'Y') {
		goto start_again;
	}
	else if (E == 'y') {
		goto start_again;
	}
	else if (E == 'N') {
		goto close_program;
	}
	else if (E == 'n') {
		goto close_program;
	}
	else {
		cout << "Error occuried while choosing next step! Try again by entering any symbol or exit by clicking 'N'!" << endl;
		cin >> E;
		if ((E == 'N') || (E == 'n')) {
			goto close_program;
		}
		if ((E != 'N') || (E != 'n')) {
			goto start_again;
		}
	}
	close_program:
    return 0;
}

int sum(int X, int Y, int result) {
	result = X + Y;
	return result;
}

int sub(int X, int Y, int result) {
	result = X - Y;
	return result;
}

float div(int X, int Y, float result) {
	result = X / Y;
	return result;
}

int mult(int X, int Y, int result) {
	result = X * Y;
	return result;
}
