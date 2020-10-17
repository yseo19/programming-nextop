#include <iostream>
#include <fstream>
#include <cstring>
#define N 40
using namespace std;

char arr[N] = { 0, };
int cnt[N] = { 0, };
int S[N] = { 0, };

void input(void) {
	ifstream fin("input.txt");
	int i;

	for (i = 0; i < N; i++)
		fin >> arr[i];

	for (i = 0; i < strlen(arr); i++) {
		if (arr[i] == '(')
			cnt[i] = -1;
		if (arr[i] == ')')
			cnt[i] = -3;
		if (arr[i] == '[')
			cnt[i] = -2;
		if (arr[i] == ']')
			cnt[i] = -4;
	}

}


int main(void) {
	input();

	int i, top = 0;
	int sum;
	int len = strlen(arr);

	for (i = 0; i < len; i++) {
		if (cnt[i] == -3 || cnt[i] == -4) {
			sum = 0;
			while (1) {
				if (S[top] == -1 || S[top] == -2)
					break;
				sum += S[top];
				S[top] = 0;
				top--;
			}   
			if ((cnt[i] == -3 && S[top] == -2) || (cnt[i] == -4 && S[top] == -1)) {
				printf("0");
				return  0;
			}

			if (sum == 0 && S[top] == -1) 
				S[top] = 2;
			else if (sum == 0 && S[top] == -2) 
				S[top] = 3;
			else if (S[top] == -1)
				S[top] = sum * 2;
			else if (S[top] == -2)
				S[top] = sum * 3;
		}
		else {
			top++;
			S[top] = cnt[i];
		}
	}

	sum = 0;
	for (i = top; i >= 1; i--) {
		sum += S[i];
	}

	printf("%d", sum);

	return 0;
}