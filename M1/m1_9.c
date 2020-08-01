#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	freopen("input.txt", "r", stdin);

	int a[9][9];
	int i, j;
	int A, B;
	int max = 0;

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				A = i;
				B = j;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d\n", A + 1, B + 1);


	return 0;
}