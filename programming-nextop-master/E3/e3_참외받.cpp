#include <iostream>
#include <fstream>
#define N 10	

using namespace std;
int A[N] = { 0, };
int B[N] = { 0, };

int main(void) {
	ifstream fin("input.txt");

	int n;
	int X, Y;
	int x, y;
	int s;

	X = Y = x = y = 0;

	fin >> n;

	for (int i = 0; i < 6; i++) {
		fin >> A[i] >> B[i];
		if ((A[i] == 1 || A[i] == 2) && B[i] > X) {
			X = B[i]; 
		}
		if ((A[i] == 3 || A[i] == 4) && B[i] > Y) {
			Y = B[i];
			s = i;
		}
	}

	if (B[(s + 1)%6] == X) {
		x = B[(s + 3) % 6];
		y = B[(s + 4) % 6];
	}
	else {
		x = B[(s + 2) % 6];
		y = B[(s + 3) % 6];
	}

	cout << n * (X * Y - x * y);
		

	return 0;
}