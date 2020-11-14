#include <iostream>
#include <fstream>
#define MAX 200000

using namespace std;

struct ball {
	int color;
	int size;
	int cnt;
}colorball[MAX];

int main(void) {
	ifstream fin("input.txt");

	int n;
	int i,j;

	fin >> n;

	for (i = 0; i < n; i++) {
		fin >> colorball[i].color >> colorball[i].size;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if ((colorball[i].color != colorball[j].color) && (colorball[i].size > colorball[j].size))
				colorball[i].cnt += colorball[j].size;
		}
	}

	for (i = 0; i < n; i++)
		cout << colorball[i].cnt << "\n";




	return 0;
}