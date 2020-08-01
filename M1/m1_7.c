#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	freopen("input.txt", "r", stdin);
	char S[9] = { 0, };
	int i;

	for (int j = 0; j < 3; j++) {
		int sum = 1;
		int max = 1;
		scanf("%s", S);
		for (i = 0; i < 8; i++) {
			if (S[i] == S[i + 1]) {
				sum++;
				if (sum > max)
					max = sum;
			}
			else
				sum = 1;
		}
		printf("%d", max);
	}


	return 0;
}