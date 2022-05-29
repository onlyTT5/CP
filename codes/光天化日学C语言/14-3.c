#include <stdio.h>
int main()
{
	int x;

	scanf_s("%d", &x);
	printf("%d", (x & 0xffffffe0));

	return 0;
}