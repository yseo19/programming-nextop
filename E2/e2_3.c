#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
struct size {
	int w;
	int h;
	int r;
};
int main(void) {
	int i, j;
	struct size b[50];
	int n;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &b[i].w);
		scanf("%d", &b[i].h);
	}

	for (i = 0; i < n; i++) {
		b[i].r = 1;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if ((b[i].w < b[j].w) && (b[i].h < b[j].h))
				b[i].r++;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d", b[i].r);
	}



	return 0;
}