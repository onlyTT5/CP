#include <stdio.h>
int main()
{
	int x = 5;
	int y = 6;

	printf("%d", x - (~y + 1));

	return 0;
}