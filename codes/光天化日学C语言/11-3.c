#include <stdio.h>
int main()
{
	int a = !(5 > 4) && (7 - 8) && (0 - 1);

	printf("%d\n", a);

	return 0;
}