#include <iostream>
#include <fstream>

using namespace std;

struct loc {
	int x;
	int y;
};

int main(void) {
	ifstream fin("input.txt");

	struct loc map;
	struct loc gem[100];
	int k;
	int t;

	int i, j;
	int a, b, c;
	int cnt = 0;
	int x = 0, y = 0;
	int max = 0;


	fin >> map.x >> map.y;
	fin >> t;
	fin >> k;

	
	for (i = 0; i < t; i++)
		fin >> gem[i].x >> gem[i].y;
	

	for (i = 0; i < map.x - k; i++) {
		for (j = 0; j < map.y - k; j++) {
			cnt = 0;
			for (a = i; a <= i + k; a++) {
				for (b = j; b <= j + k; b++) {
					for (c = 0; c < t; c++) {
						if (gem[c].x == a && gem[c].y == b) 
							cnt++;
					}
				}
			}
			if (cnt > max) {
				max = cnt;
				x = i+1;
				y = j+k;
			}

		}
	}

	printf("%d %d \n%d", x, y, max);

	return 0;
}