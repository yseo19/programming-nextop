#include <iostream>
#include <fstream>
using namespace std;

struct baseball {
	int num;
	int str;
	int ball;
};


int main(void) {
	ifstream fin("input.txt");

	int n;
	int i, j;
	int k = 0;
	baseball A[100];
	int cnt[2] = { 0, };

	fin >> n;

	for (i = 0; i < n; i++)
		fin >> A[i].num >> A[i].str >> A[i].ball;

	for (i = 123; i <= 987; i++) {
		for (j = 0; j < n; j++) {
			cnt[0] = 0;
			cnt[1] = 0;

			if (i / 100 == A[j].num / 100)
				cnt[0]++;
			if (i / 100 == (A[j].num / 10) % 10 || i / 100 == A[j].num % 10)
				cnt[1]++;
			if ((i / 10) % 10 == (A[j].num / 10) % 10)
				cnt[0]++;
			if ((i / 10) % 10 == A[j].num / 100 || (i / 10) % 10 == A[j].num % 10)
				cnt[1]++;
			if (i % 10 == A[j].num % 10)
				cnt[0]++;
			if (i % 10 == (A[j].num / 10) % 10 || i % 10 == A[j].num / 100)
				cnt[1]++;

			if (cnt[0] != A[j].str || cnt[1] != A[j].ball)
				break;
		}
		if (j == n - 1)
			k++;

		
	}



	/*a = 110;

	a++;
	cnt[0] = 0;
	cnt[1] = 0;

	for (i = 0; i < n; i++) {
		if (a / 100 == A[i].n / 100)
			cnt[0]++;
		if (a / 100 == (A[i].n / 10) % 10 || a / 100 == A[i].n % 10)
			cnt[1]++;
		if ((a / 10) % 10 == (A[i].n / 10) % 10)
			cnt[0]++;
		if ((a / 10) % 10 == A[i].n / 100 || (a / 10) % 10 == A[i].n % 10)
			cnt[1]++;
		if (a % 10 == A[i].n % 10)
			cnt[0]++;
		if (a % 10 == (A[i].n / 10) % 10 || a % 10 == A[i].n / 100)
			cnt[1]++;

		if (cnt[0] != A[i].str || cnt[1] != A[i].ball)
			continue;
	}

	k++;

	if (a >= 999)
		break;

	*/
	printf("%d", k);



	return 0;
}