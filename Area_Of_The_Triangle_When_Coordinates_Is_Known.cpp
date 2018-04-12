#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	long double x1, y1, x2, y2, x3, y3, s1, s2, s3, p, S;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	s1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	s2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	s3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	p = (s1 + s2 + s3) / 2;
	S = sqrt(p * (p - s1) * (p - s2) * (p - s3));
	cout << fixed << setprecision(1) << S;
    return 0;
}
