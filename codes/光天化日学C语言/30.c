#include <stdio.h>
int main()
{
	int n, i;
	int sum;

	while (scanf_s("%d", &n) != EOF) {
		sum = 0;
		for (i = 1; i <= n; ++i) {
			sum += i;
		}
		printf("%d\n", sum);
	}

	return 0;
}