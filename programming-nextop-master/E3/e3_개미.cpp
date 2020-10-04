#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	ifstream fin("input.txt");
	
	int w, h, x, y, t = 0;
	int i;

	fin >> w >> h >> x >> y >> t;

	int k = 1;

	for (i = 0; i < t; i++) {
		x += k;

		if (x >= w)
			k *= -1;

		if (x <= 0)
			k *= -1;
	}

	for (i = 0; i < t; i++) {
		y += k;

		if (y >= h)
			k *= -1;

		if (y <= 0)
			k *= -1;
	}

	cout << x << ' ' << y;



	return 0;
}