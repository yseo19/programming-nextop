#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int cnt[10] = { 0, };
	int A, B, C;
	int sum;
	int i;
	int a = 0;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	sum = A * B * C;

	while (sum != 0) {
		a++;
		sum /= 10;
	}

	sum = A * B * C;

	for (i = 0; i < a; i++) {
		cnt[sum % 10]++;
		sum /= 10;
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", cnt[i]);
	}

	return 0;
}