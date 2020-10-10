#include <iostream>
#include <fstream>
#define N 10000

using namespace std;


int main(void) {
	ifstream fin("input.txt");

	int sea[N][N];
	int fish[100][2];
	int n, l, m;
	int i, j;
	int max;
		
	fin >> n >> l >> m;

	for (i = 0; i < m; i++)
		fin >> fish[i][0] >> fish[i][1];

	for (i = 0; i < m; i++) {
		for (j = 1; j < l / 2; j++) {
			
		}
	}
	
		




	return 0;
}
