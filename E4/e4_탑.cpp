#include <iostream>
#include <fstream>
#define MAX 50000

using namespace std;

int main(void) {
	ifstream fin("input.txt");

	int n;
	int i, j;
	int top[MAX] = { 0, };
	int cnt[MAX] = { 0, };

	fin >> n;

	for (i = 0; i < n; i++) {
		fin >> top[i];
	}

	cnt[0] = 0;

	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (top[i - j] >= top[i])
				cnt[i] = i - j;
		}
	}

	for (i = 0; i < n; i++)
		cout << cnt[i];

	return 0;
}
