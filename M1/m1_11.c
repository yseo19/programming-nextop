#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	freopen("input.txt", "r", stdin);
	
	int i;
	int sum = 0;
	int max = 0;
	int a[10] = { 0, };
	int b[100] = { 0, };
	int c;
	

	for (i = 0; i < 10; i++) {
		int tmp;
		scanf("%d", &tmp);
		sum += tmp;
		b[tmp / 10]++;
	}

	printf("%d\n", sum / 10);
	
	for (i = 0; i < 100; i++) {
		if (max < b[i]) {
			max = b[i];
			c = i;
		}
			
	}

	printf("%d\n", c*10);

	return 0;
}