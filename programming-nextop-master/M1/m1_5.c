#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int out[10] = { 0, };
	int in[10] = { 0, };
	int sum = 0;
	int max = 0;
	int i;

	for (i = 0; i < 10; i++) {
		scanf("%d %d", &out[i], &in[i]);
	}

	for (i = 0; i < 10; i++) {
		sum -= out[i];
		sum += in[i];

		if (sum > max)
			max = sum;
	}

	printf("%d\n", max);
		

	return 0;
}