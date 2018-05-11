#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

unsigned long long F(long double N, unsigned long long a, unsigned long long b) {
	unsigned long long sum;
	sum = (pow((1 + sqrt(5)) / 2, N) - pow((1 - sqrt(5)) / 2, N))/sqrt(5);
	cout << sum;
	return sum;
}

int main()
{
	vector<unsigned long long> ATS;
	unsigned long long Q, a, b, N, temp, power10 = 10;
	unsigned long long M;
	cin >> Q;
	for (auto i = 1; i <= Q; i++) {
		cin >> a >> b >> N >> M;
		for (auto j = 1; j < M; j++) {
			power10 *= 10;
		}
		if (N == 0) {
			temp = a % power10;
			ATS.push_back(temp);
			power10 = 10;
		}
		else if (N == 1) {
			temp = b % power10;
			ATS.push_back(temp);
			power10 = 10;
		}
		else if (N == 2) {
			temp = (b + a) % power10;
			ATS.push_back(temp);
			power10 = 10;
		}
		else {
			temp = F(N, a, b) % power10;
			ATS.push_back(temp);
			power10 = 10;
		}
	}
	for (auto x = 0; x <= Q - 1; x++) {
		cout << ATS[x] << endl;
	}
    return 0;
}
