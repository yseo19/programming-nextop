#include <iostream>
#include <fstream>
#define N 50
int nx, ny, MAX;
char A[N][N];
int B[N][N], Q[N*N][3];
int c[] = { -1,0,1,0 };
int d[] = { 0,1,0,-1 };


using namespace std;

int check(int a, int b) {
	if (a < 0 || a >= ny || b < 0 || b >= nx)
		return 0;
	else return 1;
}

void cls() {
	for (int i = 0; i < ny; i++) {
		for (int j = 0; j < nx; j++)
			B[i][j] = 0;
	}
}


void BFS(int k1, int k2) {
	int i, x, y, front = 0, rear = 1;
	char temp;
	int temp_2, temp_3;
	Q[rear][0] = k1;
	Q[rear][1] = k2;
	Q[rear][2] = 1;
	B[k1][k2] = 1;



	while (1) {
		if (rear == front)
			break;

		front++;
		y = Q[front][0];
		x = Q[front][1];


		for (i = 0; i < 4; i++) {
			temp = A[y + c[i]][x + d[i]];
			temp_2 = check(y + c[i], x + d[i]);
			temp_3 = B[y + c[i]][x + d[i]];
			if (temp == 'L' && temp_2 && !temp_3) {
				rear++;
				Q[rear][0] = y + c[i];
				Q[rear][1] = x + d[i];
				Q[rear][2] = Q[front][2] + 1;
				B[y + c[i]][x + d[i]] = B[y][x] + 1;
			}
		}
	}
	if (MAX < Q[front][2])
		MAX = Q[front][2];
		


}
int main(void) {
	ifstream fin("input.txt");
	
	int i, j;

	fin >> ny >> nx;

	for (i = 0; i < ny; i++) {
		for (j = 0; j < nx; j++) {
			fin >> A[i][j];
		}
	}

	for (i = 0; i < ny; i++) {
		for (j = 0; j < nx; j++) {
			if (A[i][j] == 'L')
				BFS(i, j);
		}
	}
	printf("%d", MAX);



	return 0;
}