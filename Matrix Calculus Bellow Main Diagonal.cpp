#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long double sum = 0, count = 0, vid;
	vector< vector<long double> > matrix = { {6, 0, 0, 0, 0}, {6, 2, 0, 0, 0}, {8, 0, 0, 0, 0}, {8, 0, 0, 2, 0}, {3, 2, 0, 1, 0} };
	for (auto i = 0; i < matrix.size(); i++) {
		for (auto j = 0; j < matrix.size(); j++) {
			if (j < i) {
				if (matrix[i][j] > 0) {
					count++;
					sum += matrix[i][j];
				}
			}
		}
	}
	vid = sum / count;
	cout << "Kiekis: " << count << endl;;
	cout << "Suma: " << sum << endl;
	cout << "Vidurkis: " << vid << endl;
    return 0;
}
