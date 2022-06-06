#include <stdio.h>
int main()
{
	int x = 6;
	
	printf("%d\n", x ^ (1 << 3));

	return 0;
}