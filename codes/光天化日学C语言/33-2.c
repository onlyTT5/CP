#include <stdio.h>
int absolute(int a) {
	return a < 0 ? -a : a;
}

int main() {
	int a;

	while (scanf_s("%d", &a) != EOF) {
		printf("%d\n", absolute(a));
	}

	return 0;
}