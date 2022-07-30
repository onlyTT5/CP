#include <stdio.h>
int main()
{
	int a = 3, b = 4, c = 5;
	int x = (a > b) ? ((a > c) ? a : c) : ((b < c) ? b : c);

	printf("%d\n", x);

	return 0;
}