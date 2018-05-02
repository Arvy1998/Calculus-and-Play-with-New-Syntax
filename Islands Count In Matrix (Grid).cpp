#include <iostream>

using namespace std;

int N, M;

void island(int i, int j, int n, int m, char grid[][200]) {
	if (grid[i][j] == '.' || grid[i][j] == 'x') return;
	grid[i][j] = 'x';
	if (i >= 1) island(i - 1, j, n, m, grid);
	if (j >= 1) island(i, j - 1, n, m, grid);
	if (i < n - 1) island(i + 1, j, n, m, grid);
	if (j < m - 1) island(i, j + 1, n, m, grid);
}
int numIslands(char grid[][200]) {
	int n = N;
	if (n == 0) return 0;
	int m = M, ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (grid[i][j] == '#') {
				island(i, j, n, m, grid);
				ans++;
			}
		}
	}
	return ans;
}

int main() {
	char grid[200][200];
	cin >> N >> M;
	for (auto i = 0; i < N; i++) {
		for (auto j = 0; j < M; j++) {
			cin >> grid[i][j];
		}
	}
	cout << numIslands(grid);
	return 0;
}
