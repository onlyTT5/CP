#include <stdio.h>
int main()
{
	int x;

	scanf_s("%d", &x);
	printf("%d", (x & 0b11111));

	return 0;
}