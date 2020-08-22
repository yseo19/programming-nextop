#include <iostream>
#include <fstream>
#define SIZE 5

using namespace std;

int main(void) {
	ifstream fin("input.txt");

	int bingo[SIZE][SIZE];
	int i, j, k;
	int cnt = 0;


	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			fin >> bingo[i][j];
		}
	}

	for (i = 1; i <= SIZE * SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			for (k = 0; k < SIZE; k++) {
				if (bingo[j][k] == i)
					bingo[j][k] = 0;
			}
		}

		for (j = 0; j < SIZE; j++) {
			if (bingo[j][0] == 0 && bingo[j][1] == 0 && bingo[j][2] == 0 && bingo[j][3] == 0 && bingo[j][4] == 0)
				cnt++;
			if (bingo[0][j] == 0 && bingo[1][j] == 0 && bingo[2][j] == 0 && bingo[3][j] == 0 && bingo[4][j] == 0)
				cnt++;
			if (bingo[0][0] == 0 && bingo[1][1] == 0 && bingo[2][2] == 0 && bingo[3][3] == 0 && bingo[4][4] == 0)
				cnt++;
			if (bingo[0][4] == 0 && bingo[1][3] == 0 && bingo[2][2] == 0 && bingo[3][1] == 0 && bingo[4][0] == 0)
				cnt++;
		}

		if (cnt >= 3) {
			printf("%d", i);
			return 0;
		}
	}





	return 0;
}