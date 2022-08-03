#include <stdio.h>
int pascal(int i, int j);
int main() {
	int n, i, j;
	setbuf(stdout, NULL);
	printf("Enter The Limit: ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++) {
		for (j = 0; j <= n - i; j++) {
			printf("  ");
		}

		for (j = 0; j <= i; j++) {
			printf(" %3d", pascal(i, j));
		}

		printf("\n");
	}
	return 0;
}

int factorial(int m) {
	int f;

	for (f = 1; m > 1; m--) {
		f =f*m;
	}

	return f;
}

int pascal(int i, int j) {
	return factorial(i) / (factorial(i - j) * factorial(j));
}