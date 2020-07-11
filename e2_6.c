#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	int i, j;

	scanf("%d", &n);

	int dice[3][1000];
	int max_dice = 0;
	int money[1000] = { 0, };
	int max_money = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 1000; j++) {
			dice[i][j] = 0;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) 
			scanf("%d", &dice[j][i]);
	}

	for (i = 0; i < n; i++) {
		if (dice[0][i] == dice[1][i] && dice[1][i] == dice[2][i] && dice[0][i] == dice[2][i])
			money[i] = 10000 + dice[0][i] * 1000;
		else if (dice[0][i] == dice[1][i])
			money[i] = 1000 + dice[0][i] * 100;
		else if (dice[1][i] == dice[2][i])
			money[i] = 1000 + dice[1][i] * 100;
		else if (dice[0][i] == dice[2][i])
			money[i] = 1000 + dice[0][i] * 100;
		else {
			for (j = 0; j < 3; j++) {
				if (max_dice < dice[j][i])
					max_dice = dice[j][i];
			}
			money[i] = max_dice * 100;
		}

	}

	for (i = 0; i < n; i++) {
		if (max_money < money[i])
			max_money = money[i];
	}

	printf("%d\n", max_money);


	return 0;
}
