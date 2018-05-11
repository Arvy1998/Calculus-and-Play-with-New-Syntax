#include <iostream>

using namespace std;

class Rectangle {
	public:
		int height;
		int breadth;
		int lenght;
		int radius;
};

int main()
{
	int Choice;
	Rectangle Cube;
	Rectangle Rect;
	Rectangle NRect;

	repeat_program:
	cout << "Choose figure:" << endl;
	cout << "1) Cube;" << endl;
	cout << "2) Rectangle;" << endl;
	cout << "3) Other Shape." << endl;
	cin >> Choice;
	if (Choice == 1) {
		cout << "Enter cube parameters..." << endl;
		cout << "Breadth is: ";
		cin >> Cube.breadth;
		cout << "Height is: ";
		cin >> Cube.height;
		cout << "Lenght is: ";
		cin >> Cube.lenght;
		cout << "Volume is: " << Cube.breadth * Cube.height * Cube.lenght << "." << endl;
	}
	if (Choice == 2) {
		cout << "Enter rectangle parameters..." << endl;
		cout << "Breadth is: ";
		cin >> Rect.breadth;
		cout << "Height is: ";
		cin >> Rect.height;
		cout << "Lenght is: ";
		cin >> Rect.lenght;
		cout << "Volume is: " << Rect.breadth * Rect.height * Rect.lenght << "." << endl;
	}
	if (Choice == 3) {
		cout << "Your figure is round-shaped..." << endl;
		cout << "Radius is: ";
		cin >> NRect.radius;
		cout << "Volume is: " << (3.14 * NRect.radius) / 2 << "." << endl;
	}
	if ((Choice != 1) && (Choice != 2) && (Choice != 3)) {
		cout << "Error ocurred while taking step!" << endl;
	}
	cerr_program:
	cout << "Do you want to repeat process?" << endl;
	cout << "1) Yes;" << endl;
	cout << "2) No." << endl;
	cin >> Choice;
	if (Choice == 1) {
		goto repeat_program;
	}
	if (Choice == 2) {
		goto end_program;
	}
	if ((Choice != 1) && (Choice != 2)) {
		cout << "Error ocurred while taking step! Please, select next step again!" << endl;
		goto cerr_program;
	}
	end_program:
    return 0;
}
