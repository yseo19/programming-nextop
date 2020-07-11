#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	int line[100] = { 0, };
	int i,j;
	int change[100] = { 0, };
	int k;
	int a;


	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &change[i]);
		line[i] = i;
		if (change[i] != 0) {
			a = i;
			for (j = change[i]; j > 0; j--) {
				k = line[a];
				line[a] = line[a - 1];
				line[a- 1] = k;
				a--;
			}
		}
	}

	for (i = 1; i <= n; i++) {
		printf("%d ", line[i]);
	}



	return 0;
}