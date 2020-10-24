#include <iostream>
#include <fstream>
#define N 100

using namespace std;

int A[N][N];
int main(void) {
	ifstream fin("input.txt");

	int x, y;
	int i, j, k;
	int n;
	int cnt = 0;

	fin >> n;
	

	for (k = 1; k <= n; k++) {
		fin >> x >> y;
		for (j = y; j <= y + 9; j++) {
			for (i = x; i <= x + 9; i++) {
				A[j][i] = 1;
			}
		}
	}

	for (i = 0; i <= N; i++) {
		for (j = 0; j <= N; j++) {
			if (A[i][j] == 0 && A[i][j + 1] == 1)
				cnt++;
			if (A[i][j] == 1 && A[i][j + 1] == 0)
				cnt++;
			if (A[i][j] == 0 && A[i + 1][j] == 1)
				cnt++;
			if (A[i][j] == 1 && A[i + 1][j] == 0)
				cnt++;
		}
	}

	cout << cnt << '\n';




	return 0;
}