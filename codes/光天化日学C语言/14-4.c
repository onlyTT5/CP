#include <stdio.h>
int main()
{
	int x;

	scanf_s("%d", &x);
	printf("%d\n", (x + 1) & x);

	return 0;
}