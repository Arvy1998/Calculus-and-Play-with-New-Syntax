/*
You are given an N x M size grid where N is the number of rows and M is the number of columns. 
Your task is to calculate in how many ways you can go from the upper-left corner to the bottom-right corner 
if you can only move down and to the right.

Input:

The input consists of two space-separated integers N and M (1 ≤ N, M ≤ 30).

Output:

Print out one integer - the answer to the given problem.

Examples:
Input: 1 1
Output: 2
Input: 4 4
Output: 70
*/

#include <iostream>
#include <cmath>

using namespace std;

long long temp[100] = { 1 };

long long f(unsigned long long aa) { // factorial

	if (aa == 0 || aa == 1) {
		return 1;
	}
	else {
		if (temp[aa] != 0)
			return temp[aa];
		else
			return temp[aa] = (aa * f(aa - 1));
	}

}

int main()
{
long long n, m, x, c;
	cin >> n >> m;
	c = n + m;
	cout << f(c) / f(n) * f(m); // (M+N)!/(M!N!)
	return 0;
}

/*
Doesnt work with large numbers. Maybe viewer could help? :>
*/
