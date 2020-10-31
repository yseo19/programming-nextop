#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	ifstream fin("input.txt");
	
	int i;
	int x, y;
	int w, h;
	int a_x = 1, a_y = 1;
	int t;

	fin >> w >> h;
	fin >> x >> y;
	fin >> t;

	for (i = 0; i < t; i++) {
		x += a_x;
		if (x >= w)
			a_x = -1;
		else if (x <= 0)
			a_x = 1;
	}

	for (i = 0; i < t; i++) {
		y += a_y;
		if (y >= h)
			a_y = -1;
		else if (y <= 0)
			a_y = 1;
	}

	printf("%d %d\n", x, y);

	return 0;
}