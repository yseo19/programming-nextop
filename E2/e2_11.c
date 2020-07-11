#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b;
	int x, y, z;
	

	scanf("%d", &a);
	scanf("%d", &b);

	x = b / 100;
	y = (b / 10) % 10;
	z = b % 10;

	printf("%d\n", a * z);
	printf("%d\n", a * y);
	printf("%d\n", a * x);
	printf("%d\n", a * b);

	return 0;
}