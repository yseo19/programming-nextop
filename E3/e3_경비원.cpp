#include <iostream>
#include <fstream>

using namespace std;

int length(int n) {
	if (n < 0)
		n *= -1;

	return  n;
}

struct place {
	int x;
	int y;
};
int main(void) {
	ifstream fin("input.txt");

	struct place size;
	struct place place;
	struct place shop[100];
	int min[100] = { 0, };
	int n;
	int i;
	int sum = 0;

	fin >> size.x >> size.y;
	fin >> n;
	fin >> place.x >> place.y;

	for (i = 0; i < n; i++)
		fin >> shop[i].x >> shop[i].y;

	for (i = 0; i < n; i++) {
		if (place.x + shop[i].x + length(shop[i].y - place.y) < length(size.x - place.x) + length(size.x - shop[i].x) + length(shop[i].y - place.y))
			min[i] = place.x + shop[i].x + length(shop[i].y - place.y);
		else
			min[i] = length(size.x - place.x) + length(size.x - shop[i].x) + length(shop[i].y - place.y);
	}

	for (i = 0; i < n; i++)
		sum += min[i];

	printf("%d\n", sum);


	return 0;
}