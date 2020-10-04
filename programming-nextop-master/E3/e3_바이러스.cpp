#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	ifstream fin("input.txt");

	int n, m;
	int a[100] = { 0, };
	int b[2][100];
	int i,j;
	int k = 0;
	int z;

	a[0] = 1;


	fin >> n;
	fin >> m;

	for (i = 0; i < m; i++)
		fin >> b[0][i] >> b[1][i];


	for (i = 0; i < m; i++) {
		if (b[0][i] == 1) {
			z = b[1][i];
			a[z-1] = 1;
			for (j = 0; j < m; j++) {
				if (b[0][j] == z)
					b[0][j] = 1;
				if (b[1][j] == z)
					b[1][j] = 1;
			}
			b[1][i] = 1;
		}
		if (b[1][i] == 1) {
			z = b[0][i];
			a[z-1] = 1;
			for (j = 0; j < m; j++) {
				if (b[0][j] == z)
					b[0][j] = 1;
				if (b[1][j] == z)
					b[1][j] = 1;
			}
			b[0][i] = 1;
		}
	}

	for (i = 0; i < n; i++) {
		if (a[i] == 1)
			k++;
	}

	printf("%d\n", k-1);


	return 0;
}