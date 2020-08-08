#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	freopen("input.txt", "r", stdin);

	int M, N;
	int i, j;
	int sum = 0;
	int min = 10000;

	scanf("%d %d", &M, &N);


	for (i = M; i <= N; i++) {
		int k = 0;
		for (j = 1; j <= i; j++) {
			if (i % j == 0)
				k++;
		}
		if (k == 2) {
			sum += i;
			if (min > i) min = i;
		}
	}

	printf("%d\n%d", sum, min);


	return 0;
}