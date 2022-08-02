#include <stdio.h>
int main()
{
	int i;
	int sum = 1;

	for (i = 1; i <= 12; ++i) {
		sum *= i;
	}

	printf("%d\n", sum);
	return 0;
}