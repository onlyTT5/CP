#include <stdio.h>
int main()
{
	int x;

	scanf_s("%d", &x);
	printf("%d\n", x | (x - 1));

	return 0;
}