#include <iostream>

using namespace std;

struct a {
	int number;
	int s;
	int b;
};


int main(void) {

	int n;

	cin >> n;

	struct a baseball[100];

	for (int i = 0; i < n; i++) {
		cin >> baseball[i].number >> baseball[i].s >> baseball[i].b;
	}






	return 0;
}