#include <iostream>
#include <fstream>
#define N 100010

using namespace std;

struct abc {
	int m1, d1, m2, d2;
}DATA[N];
int n;


bool compare(const abc &i, const abc &j)


int main(void) {
	ifstream fin("input.txt");

	int i;
	
	fin >> n;

	for (i = 0; i < n; i++)
		fin >> DATA[i].m1 >> DATA[i].d1 >> DATA[i].m2 >> DATA[i].d2;

	sort(DATA + 1, DATA + n + 1, compare);





	return 0;
}