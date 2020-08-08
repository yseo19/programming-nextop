#include <iostream>
#define MAX 100000

using namespace std;

int main(void) {
	int i;
	int top = 0;
	int cnt = 0;
	string arr;

	cin >> arr;

	for (i = 1; i < arr.size(); i++) {
		if (arr[i - 1] == '(' && arr[i] == ')') {
			arr[i - 1] = '1';
			arr[i] = '0';
		}
	}

	for (i = 0; i < arr.size(); i++) {
		if (arr[i] == '(')
			top++;
		else if (arr[i] == ')') {
			top--;
			cnt++;
		}
		if (arr[i] == '1') {
			cnt += top;
		}
	}

	cout << cnt;

	return 0;
}