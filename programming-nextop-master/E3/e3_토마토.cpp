#include <iostream>
#include <fstream>
#define N 110
using namespace std;
int T[N][N][N];
int Q[N * N * N][4];
int A[6] = { 0,0,0,0,-1,1 };
int B[6] = { -1,1,0,0,0,0 };
int C[6] = { 0,0,1,-1,0,0 };
int n = 0, m = 0, h = 0;
int front = 0, rear = 0;

int check(int a,int b,int c) {
	if (a > 0 && a <= h && b > 0 && b <= n && c > 0 && c <= m)
		return 1;
	else
		return 0;
}
void BFS() {
	int q;
	int temp, ch;
	int i, j, k;

	while (1) {
		if (front == rear)
			break;
		front++;
		i = Q[front][0];
		j = Q[front][1];
		k = Q[front][2];

		for (q = 0; q <= 5; q++) {
			temp = T[i + A[q]][j + B[q]][k + C[q]];
			ch = check(i + A[q], j + B[q], k + C[q]);
			if (temp == 0 && ch == 1) {
				rear++;
				Q[rear][0] = i + A[q];
				Q[rear][1] = j + B[q];
				Q[rear][2] = k + C[q];
				Q[rear][3] = Q[front][3] + 1;
				T[i + A[q]][j + B[q]][k + C[q]] = 1;
			}
		}
	}
	
}


int main(void) {
	ifstream fin("input.txt");
	
	fin >> m >> n >> h;

	int i, j, k;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			for (k = 1; k <= h; k++) {
				fin >> T[i][j][k];
				if (T[i][j][k] == 1) {
					rear++;
					Q[rear][0] = i;
					Q[rear][1] = j;
					Q[rear][2] = k;
					Q[rear][3] = 1;
				}
			}
		}
	}
	BFS();

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			for (k = 1; k <= h; k++) {
				if (T[i][j][k] == 0) {
					printf("-1");
					return 0;
				}
			}
		}
	}


	printf("%d", Q[rear][3] - 1);
	

	return 0;
}