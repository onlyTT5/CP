#include <stdio.h>
int main()
{
	int x;
	int a = 0b10000;

	scanf_s("%d", &x);
	printf("%d\n", (x | a) - a);

	return 0;
}