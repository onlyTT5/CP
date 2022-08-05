#include <stdio.h>
int main()
{
	int sum = 0;
	int i = 1;

	while (i <= 100) {
		sum += i;
		i++;
	}

	printf("%d\n", sum);

	return 0;
}