#include <iostream>
#include <fstream>
#define N 30010
int DATA[N], A[N / 10];
int n, d, c, k;
int s, e, tot;
int MAX;
using namespace std;

void q() {

	A[DATA[e]] -= 1;
	if (A[e] == 0) tot--;
	e = (e + 1) % n;
	s = (s + 1) % n;
	A[DATA[s]] += 1;
	if (A[DATA[s]] == 1) 
		tot++;
	if (MAX < tot)
		MAX = tot;
}


int main(void) {
	ifstream fin("input.txt");
	int i;

	fin >> n >> d >> k >> c;

	for (i = 0; i < n; i++) {
		fin >> DATA[i];
	}

	A[c] = 1;
	tot = 1;
	for (i = 0; i < k; i++) {
		if (A[DATA[i]] == 0)
			tot++;
		A[DATA[i]] += 1;
	}

	if (MAX < tot)
		MAX = tot;

	s = k - 1;
	e = 0;

	for (i = 1; i <= n; i++) {
		q();
	}

	printf("%d", MAX);




























	/*int i, j, l;
	int n, d, k, c;
	int cnt = 0;
	int max = 0;
	int exit = 0;
	int plate[30000] = { 0, };
	int plate_eat[3000] = { 0, };

	fin >> n >> d >> k >> c;
	

	for (i = 0; i < n; i++)
		fin >> plate[i];


	for (i = 0; i < n; i++) {
		for (j = 0; j < k; j++) {
			plate_eat[j] = plate[(i + j) % n];
			if (exit) {
				cnt = j + 1;
				exit = 0;
				break;
			}
			for (l = 0; l < j; l++) {
				if (plate_eat[j] == plate_eat[l]) {
					cnt--;
					exit++;
					break;
				}
			}
		}

		if (plate_eat[i-1] == c || plate_eat[i + k + 1] == c) {
			for (l = 0; l < k; l++) {
				if (plate_eat[l] == c) {
					cnt--;
					break;
				}
			}
			cnt++;
		}
		
		if (max < cnt) {
			max = cnt;
			cnt = 0;
		}

	}
	
	printf("%d", max);
	*/

	return 0;
}