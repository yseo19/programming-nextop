#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year;
	int  a[10] = { 6,7,8,9,0,1,2,3,4,5 };
	char b[12];

	b[0] = 'I';
	b[1] = 'J';
	b[2] = 'K';
	b[3] = 'L';
	b[4] = 'A';
	b[5] = 'B';
	b[6] = 'C';
	b[7] = 'D';
	b[8] = 'E';
	b[9] = 'F';
	b[10] = 'G';
	b[11] = 'H';

	scanf("%d", &year);

	printf("%c", b[year % 12]);
	printf("%d", a[year % 10]);

	return 0;
}