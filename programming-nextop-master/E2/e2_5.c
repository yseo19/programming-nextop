#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct point {
	int a;
	int b;
	int c;
};
int main(void) {
	int n;
	int i;

	struct point p[1000];
	struct point cnt[3];

	int sum[3] = { 0, };
	

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &p[i].a);
		scanf("%d", &p[i].b);
		scanf("%d", &p[i].c);
	}
	
	for (i = 0; i < n; i++) {
		sum[0] += p[i].a;
		sum[1] += p[i].b;
		sum[2] += p[i].c;
	}
	for (i = 0; i < 3; i++) {
		cnt[i].a = 0;
		cnt[i].b = 0;
		cnt[i].c = 0;
	}

	for (i = 0; i < n; i++) {
		if (p[i].a == 1)
			cnt[0].a++;
		else if (p[i].a == 2)
			cnt[1].a++;
		else
			cnt[2].a++;
	}

	for (i = 0; i < n; i++) {
		if (p[i].b == 1)
			cnt[0].b++;
		else if (p[i].b == 2)
			cnt[1].b++;
		else
			cnt[2].b++;
	}

	for (i = 0; i < n; i++) {
		if (p[i].c == 1)
			cnt[0].c++;
		else if (p[i].c == 2)
			cnt[1].c++;
		else
			cnt[2].c++;
	}

	int max = 0;

	for (i = 0; i < 3; i++) {
		if (max < sum[i])
			max = sum[i];
	}
	
	if (sum[0] == sum[1]) {
		if (cnt[2].a > cnt[2].b)
			printf("1\n");
		else if (cnt[2].a < cnt[2].b)
			printf("2\n");
		else {
			if (cnt[1].a > cnt[2].b)
				printf("1\n");
			else if (cnt[1].a < cnt[1].b)
				printf("2\n");
			else {
				if (cnt[0].a > cnt[0].b)
					printf("1\n");
				else if (cnt[0].a < cnt[0].b)
					printf("2\n");
				else
					printf("0\n");
			}
		}
		printf("%d\n", max);
		return 0;
	}

	else if (sum[1] == sum[2]) {
		if (cnt[2].b > cnt[2].c)
			printf("2\n");
		else if (cnt[2].b < cnt[2].c)
			printf("3\n");
		else {
			if (cnt[1].b > cnt[2].c)
				printf("2\n");
			else if (cnt[1].b < cnt[1].c)
				printf("3\n");
			else {
				if (cnt[0].b > cnt[0].c)
					printf("2\n");
				else if (cnt[0].b < cnt[0].c)
					printf("3\n");
				else
					printf("0\n");
			}
		}
		printf("%d\n", max);
		return 0;
	}

	else if (sum[0] == sum[2]) {
		if (cnt[2].a > cnt[2].c)
			printf("1\n");
		else if (cnt[2].a < cnt[2].c)
			printf("3\n");
		else {
			if (cnt[1].a > cnt[2].c)
				printf("1\n");
			else if (cnt[1].a < cnt[1].c)
				printf("3\n");
			else {
				if (cnt[0].a > cnt[0].c)
					printf("1\n");
				else if (cnt[0].a < cnt[0].c)
					printf("3\n");
				else
					printf("0\n");
			}
		}
		printf("%d\n", max);
		return 0;
	}

	else {
		for (i = 0; i < 3; i++) {
			if (sum[i] == max) {
				printf("%d\n", i + 1);
				printf("%d\n", sum[i]);
			}
		}
	}

	return 0;
}