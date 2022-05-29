#include <stdio.h>
int main()
{
	int x;

	scanf_s("%d", &x);
	printf("%d", x | 0b10000);

	return 0;
}