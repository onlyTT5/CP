#include <stdio.h>
int main()
{
	int a = 5;
	int b = (a = 5);

	printf("%d\n", b);

	return 0;
}