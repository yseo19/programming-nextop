#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	int cnt, max;
	int i;
	int arr[100000] = { 0, };

	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	cnt = 1;
	max = 1;

	for (i = 0; i < n; i++) {
		if (arr[i] <= arr[i + 1])
			cnt++;
		else if (arr[i] != arr[i + 1]) {
			if (max < cnt)
				max = cnt;
			cnt = 1;
		}
	}

	cnt = 1;
	for (i = 0; i < n; i++) {
		if (arr[i] >= arr[i + 1])
			cnt++;
		else if (arr[i] != arr[i + 1]) {
			if (max < cnt)
				max = cnt;
			cnt = 1;
		}
	}

	printf("%d\n", max);

	return 0;
}