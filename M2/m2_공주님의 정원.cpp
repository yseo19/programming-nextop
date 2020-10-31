#include <iostream>
#include <fstream>
#include <algorithm>
#define N 1010
using namespace std;
int n;

struct abc {
	int m1, d1, m2, d2;
}DATA[N];

abc STACK[N];

bool compare(const abc& i, const abc& j) {
	if (i.m1 == j.m1)
		return i.d1 < j.d1;
	else
		return i.m1 < j.m1;
}

int date(int m, int d) {
	return (m * 1000 + d);
}

int main(void) {
	ifstream fin("input.txt");	
	
	int i;	
	int top = 1;
	
	fin >> n;

	for (i = 0; i < n; i++)
		fin >> DATA[i].m1 >> DATA[i].d1 >> DATA[i].m2 >> DATA[i].d2;

	sort(DATA , DATA + n, compare);

	//for (i = 0; i < n; i++)
	//	cout << DATA[i].m1 << DATA[i].d1 << DATA[i].m2 << DATA[i].d2 << '\n';

	
	STACK[top].m1 = DATA[0].m1;
	STACK[top].d1 = DATA[0].d1;
	STACK[top].m2 = DATA[0].m2;
	STACK[top].d2 = DATA[0].d2;
	top++;

	for (i = 1; i < n; i++) {
		if (date(DATA[i].m2, DATA[i].d2) > date(STACK[top-1].m2, STACK[top-1].d2)) {
			if (date(STACK[top - 1].m2, STACK[top - 1].d2) >= 11030) {
				break;
			}
			if (date(DATA[i].m1, DATA[i].d1) <= date(STACK[top - 2].m2, STACK[top - 2].d2)) {
				STACK[top - 1].m1 = DATA[i].m1;
				STACK[top - 1].d1 = DATA[i].d1;
				STACK[top - 1].m2 = DATA[i].m2;
				STACK[top - 1].d2 = DATA[i].d2;
			}
			else {
				STACK[top].m1 = DATA[i].m1;
				STACK[top].d1 = DATA[i].d1;
				STACK[top].m2 = DATA[i].m2;
				STACK[top].d2 = DATA[i].d2;
				top++;
			}
		}
	}

	printf("%d", top - 2);



	return 0;
}