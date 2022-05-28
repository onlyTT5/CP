#include <stdio.h>
int main()
{
	printf("%d\n", 0 && 0);
	printf("%d\n", 5 && 0);
	printf("%d\n", 0 && 5);
	printf("%d\n", 5 && 9);

	return 0;
}