#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int time_a = 0;
	int time_b = 0;
	int time_c = 0;

	int time;

	scanf("%d", &time_a);
	scanf("%d", &time_b);
	scanf("%d", &time_c);

	scanf("%d", &time);

	time_a = (time_a + time / 3600);
	time_b = (time_b + time / 60);
	time_c = (time_c + time % 60);

	if (time_c >= 60) {
		time_b++;
		time_c = time_c % 60;
	}

	if (time_b >= 60) {
		time_a++;
		time_b = time_b % 60;
	}

	if (time_a >= 24)
		time_a = time_a % 24;
	
	printf("%d %d %d", time_a, time_b, time_c);

	return 0;
}