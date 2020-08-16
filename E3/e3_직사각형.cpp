#include <iostream>
#include <fstream>

using namespace std;

struct Square {
	int x, y, p, q;
};


int main(void) {
	ifstream fin("input.txt");

	for (int i = 0; i < 4; i++) {
		Square A, B;

		fin >> A.x >> A.y >> A.p >> A.q;
		fin >> B.x >> B.y >> B.p >> B.q;

		if ((A.x == B.p && B.x < A.x) || (A.p == B.x && B.x > A.x))
			printf("b");
		else if ((A.y == B.p && A.y > B.q) || (A.p == B.y && A.y < B.q))
			printf("b");
		else if ((A.x <= B.x && A.y <= B.y && A.p >= B.p && A.q >= B.q) || (A.x >= B.x && A.y >= B.y && A.p <= B.p && A.q <= B.q))
			printf("a");
		else if ((A.x < B.x && A.y < B.y && A.p < B.p && A.q < B.q && A.p > B.x && A.q > B.y) || (A.x > B.x && A.y > B.y && A.p > B.p && A.q > B.q && A.p < B.x && A.q < B.y))
			printf("a");
		else if ((A.x < B.x && A.y > B.x && A.p < B.p && A.q > B.q) || (A.x > B.x && A.y < B.x && A.p > B.p && A.q < B.q))
			printf("a");
		else if ((A.x < B.x && A.y > B.y && A.p > B.p && A.q < B.q) || (A.x > B.x && A.y < B.y && A.p < B.p && A.q > B.q))
			printf("a");
		else if ((A.p == B.x && A.q == B.y) || (A.x == B.p && A.q == B.y) || (A.x == B.p && A.y == B.q) || (A.p == B.x && A.y == B.q))
			printf("c");
		else
			printf("d");

		printf("\n");
	}

	return 0;
}