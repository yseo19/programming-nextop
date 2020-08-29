#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	
	int D, K;
	int A = 1, B = 1;
	int i = 0;
	int j = 0;
	int pi[30] = { 0, };

	pi[0] = 1;
	pi[1] = 1;
	
	for (i = 2; i < 30; i++) {
		pi[i] = pi[i - 1] + pi[i - 2];
	}

	scanf("%d", &D);
	scanf("%d", &K);

	for (i = 1; i < K; i++) {
		for (j = i; j < K; j++) {
			if (K == pi[D - 3] * i + pi[D - 2] * j) {
				A = i;
				B = j;
				break;
			}
		}
	}


	printf("%d %d\n", A, B);


	return 0;
}