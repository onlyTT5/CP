#include <stdio.h>
void add(int x) {
	++x;
}

int main()
{
	int a = 1;

	add(a);
	printf("%d\n", a);

	return 0;
}