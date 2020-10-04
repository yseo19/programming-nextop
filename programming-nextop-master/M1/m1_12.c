#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	freopen("input.txt", "r", stdin);

	int i;
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);

	c = a;
	d = b;
	while (1) {
		c = c % b;
		b = b % c;
		if (b==0)
			break;
	}

	int k = a * d / c;
	
	printf("%d\n%d", c, k);


	return 0;
}