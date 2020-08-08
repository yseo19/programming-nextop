#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int i;
	int k;
	int NX, NY;

	cin >> NX >> NY;

	int nx = NX-1;
	int ny = NY;
	
	vector<vector<int>> arr(NY, vector<int>(NX));

	int y = -1;
	int x = 0;
	int sw = 1;
	int cnt = 1;

	for(k = 0; k < NX * NY; k++) {
		for (i = 0; i < ny; i++) {
			y += sw;
			arr[y][x] = cnt++;
		}
		for (i = 0; i < nx; i++) {
			x += sw;
			arr[y][x] = cnt++;
		}
			
		ny--; nx--;
		sw *= -1;
	}

	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			cout.width(3);
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}