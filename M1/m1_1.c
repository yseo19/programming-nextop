#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int i;
	
	int A[10] = { 0, };
	int B[10] = { 0, };
	int cnt[10] = { 0, };
	int sum = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &A[i]);
	}

	for (i = 0; i < 10; i++) {
		scanf("%d", &B[i]);
	}

	for (i = 0; i < 10; i++) {
		if (A[i] > B[i])
			cnt[i]++;
		else if (A[i] < B[i])
			cnt[i]--;
		else
			cnt[i] = 0;
	}

	for (i = 0; i < 10; i++) {
		sum += cnt[i];
	}

	if (sum > 0)
		printf("A\n");
	else if (sum < 0)
		printf("B\n");
	else
		printf("D\n");


	return 0;
}