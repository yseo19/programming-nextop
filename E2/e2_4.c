#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, p;
	int i, j;
	int k;
	int a[1000] = { 0, };

	scanf("%d", &n);
	scanf("%d", &p);

	k = 0;
	a[0] = n;
	while (1) {
		k++;
		a[k] = (a[k - 1] * n) % p;
		
		for (i = 0; i < k; i++) {
			for (j = 1; j < k; j++) {
				if (a[i] == a[i + j]) {
					printf("%d", j - i + 1);
					return 0;
				}
			}
		}
	}


	return 0;
}