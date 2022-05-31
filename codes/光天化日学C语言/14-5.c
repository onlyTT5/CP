#include <stdio.h>
int main()
{
	int x;

	scanf_s("%d", &x);
	printf("%d", (x - 1) & x);

	return 0;
}