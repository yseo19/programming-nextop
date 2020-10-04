#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char word[15][5];
	int i, j;

	for (i = 0; i < 15; i++) {
		for (j = 0; j < 5; j++) {
			word[i][j] = '\0';
		}
	}


	for (i = 0; i < 5; i++) {
		scanf("%s", word[i]);
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 15; j++) {
			if (word[j][i]!='\0')
			printf("%c", word[j][i]);
		}
	}
	printf("\n");


	return 0;
}