#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Staciakampis(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double &p, double &s) {
	double ilgis, plotis;
	if (x1 == x3 || y1 == y3) {
		ilgis = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
		if ((x1 == x2 || y1 == y2) || (x2 == y1 && x1 == y2)) {
			plotis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		}
		else {
			plotis = sqrt(pow((x4 - x1), 2) + pow((y4 - y1), 2));
		}
	}
	else if (x1 == x4 || y1 == y4) {
		ilgis = sqrt(pow((x4 - x1), 2) + pow((y3 - y2), 2));
		if ((x1 == x2 || y1 == y2) || (x2 == y1 && x1 == y2)) {
			plotis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		}
		else {
			plotis = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
		}
	}
	else if (x1 == x2 || y1 == y2) {
		ilgis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		if ((x1 == x3 || y1 == y3) || (x3 == y1 && x1 == y3)) {
			plotis = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
		}
		else {
			plotis = sqrt(pow((x4 - x1), 2) + pow((y4 - y1), 2));
		}
	}
	else if (x1 == y2 && y1 == x2) {
		ilgis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		if ((x1 == x3 || y1 == y3) || (x3 == y1 && x1 == y3)) {
			plotis = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
			
		}
		else {
			plotis = sqrt(pow((x4 - x1), 2) + pow((y4 - y1), 2));
		}
	}
	else if (x2 == y3 && x3 == y2) {
		ilgis = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
		if ((x1 == x2 || y1 == y2) || (x2 == y1 && x1 == y2)) {
			plotis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		}
		else {
			plotis = sqrt(pow((x4 - x2), 2) + pow((y4 - y2), 2));
		}
	}
	else if (x4 == y3 && x3 == y4) {
		ilgis = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
		if ((x3 == x2 || y3 == y2) || (x2 == y3 && x3 == y2)) {
			plotis = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));

		}
		else {
			plotis = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));

		}
	}
	else if (x1 == y4 && x4 == y1) {
		ilgis = sqrt(pow((x4 - x1), 2) + pow((y3 - y2), 2));
		if ((x1 == x2 || y1 == y2) || (x2 == y1 && x1 == y2)) {
			plotis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		}
		else {
			plotis = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
		}
	}
	p = 2 * (ilgis + plotis);
	s = ilgis * plotis;
}

int main() {
	double x1, y1, x2, y2, x3, y3, x4, y4, p, s;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	Staciakampis(x1, y1, x2, y2, x3, y3, x4, y4, p, s);
	cout << fixed << setprecision(5);
	cout << s << endl << p;
	return 0;
}
