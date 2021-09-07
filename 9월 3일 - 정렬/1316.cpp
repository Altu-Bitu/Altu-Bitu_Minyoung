//백준1316 

#include <stdio.h>
#include <string.h>

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int group(char a[], int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			if (a[i] == a[j]) {
				if (i != j) {
					int m = max(i, j);
					if (a[m] != a[m-1])
						return 1;
				}
			}
		}
	}
	return 0;
}

int main(void) {
	int N;
	char w[100];
	int g = 0;

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%s", &w);
		g += group(w, strlen(w));
	}
	printf("%d", g);
	return 0;
}
