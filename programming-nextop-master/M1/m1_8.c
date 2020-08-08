#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	int sr[100] = { 0, };
	int s[100] = { 0, };
	int score = 0;
	int i;

	freopen("input.txt", "r", stdin);

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &sr[i]);
	}

	if (sr[0] == 1)
		s[0] = 1;
	else
		s[0] = 0;

	for (i = 1; i < n; i++) {
		if (sr[i] == 1)
			s[i] += s[i - 1] + 1;
		else
			s[i] = 0;
	}

	for (i = 0; i < n; i++) 
		score += s[i];
	

	printf("%d", score);

	return 0;
}