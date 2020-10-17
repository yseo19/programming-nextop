#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	ifstream fin("input.txt");

	int n;
	int i;
	char word;
	char words[100][10];
	int cnt[26] = { 0, };

	fin >> n;

	for (i = 0; i < n; i++)
		fin >> words[i];

	for (i = 0; i < n; i++) {
		cnt[int(words[i]) - 97]++;
	}
		






	return 0;
}