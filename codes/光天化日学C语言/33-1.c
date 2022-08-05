#include <stdio.h>
int max(int a, int b) {
	int c = a > b ? a : b;

	return c;
}

int main() {
	int a, b;

	while (scanf_s("%d %d", &a, &b) != EOF) {
		printf("%d\n", max(a, b));
	}

	return 0;
}