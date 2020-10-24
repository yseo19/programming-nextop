#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

#define N 100
using namespace std;

int main(void) {
	//ifstream fin("input.txt");

	char word[N][10];
	int cnt[N][26];
	int sum[N] = { 0, };
	int i, j;
	int n,a = 1;
	int k = 0;
	

	for (i = 0; i < N; i++) {
		for (j = 0; j < 10; j++) {
			word[i][j] = 0;
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < 26; j++) {
			cnt[i][j] = 0;
		}
	}

	cin >> n;

	for (i = 0; i < n; i++) {
		scanf("%s", word[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < strlen(word[i]); j++) {
			cnt[i][word[i][j] - 65]++;
		}
	}

	for (i = 1; i < n; i++) {
		a = 1;
		for (j = 0; j < 26; j++) {
			if (cnt[0][j] == cnt[i][j] + a || cnt[0][j] == cnt[i][j] - a)
				a = 0;

			else if (cnt[0][j] != cnt[i][j])
				break;
			
				

			if (j >= 25)
				k++;
		}
	}
	

	printf("%d\n", k);

	

	return 0;
}

