#include <iostream>
using namespace std;

int main(void) {
	int x, y;
	int w, h;
	int t;
	int i;

	cin >> w >> h >> x >> y >> t;


	int xsw = 1;
	int ysw = 1;

	for (i = 0; i < t % (w * 2); i++) {
		x += xsw;
		if (x >= w || x <= 0) xsw *= -1;
	}

	for (i = 0; i < t % (h * 2); i++) {
		y += ysw;
		if (y >= h || y <= 0) ysw *= -1;
	}


	cout << x << ' ' << y;



	return 0;
}